/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:31:29 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/23 20:01:52 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name) : name(name), materiaCount(0)
{
	for (int i = 0; i < 4; ++i)
	{
		inventory[i] = NULL; // Initialize inventory with NULL
	}
	std::cout << "Character constructor called for: " << name << std::endl;
}

Character::Character(const Character &other) : name(other.name),
	materiaCount(other.materiaCount)
{
	for (int i = 0; i < 4; ++i)
	{
		if (other.inventory[i])
		{
			inventory[i] = other.inventory[i]->clone();
		}
		else
		{
			inventory[i] = NULL; // Initialize inventory with NULL;
		}
	}
	std::cout << "Character copy constructor called for: " << name << std::endl;
}

Character::~Character()
{
    for (int i = 0; i < 4; ++i)
	{
		if (inventory[i])
		{
			delete	inventory[i];
			inventory[i] = NULL; // Set to NULL after deletion
		}
	}
	std::cout << "Character destructor called for: " << name << std::endl;
}

Character &Character::operator=(const Character &other)
{
	std::cout << "Character assignment operator called for: " << name << std::endl;
	if (this != &other)
	{
		name = other.name;
		materiaCount = other.materiaCount;
		for (int i = 0; i < 4; ++i)
		{
			delete inventory[i]; // Clean up existing materias
			if (other.inventory[i])
			{
				inventory[i] = other.inventory[i]->clone();
			}
			else
			{
				inventory[i] = NULL; // Initialize inventory with NULL;
			}
		}
	}
	return (*this);
}

const std::string &Character::getName() const
{
	return this->name;
}


void Character::equip(AMateria *m)
{
    if (!m)
    {
        std::cout << "Cannot equip a null materia." << std::endl;
        return;
    }

    for (int i = 0; i < 4; ++i)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
            materiaCount++; // increment count properly
            std::cout << "Equipped materia: " << m->getType() << " to " << name << std::endl;
            return;
        }
    }
    std::cout << "Cannot equip more materias: inventory full." << std::endl;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && inventory[idx])
	{
		// Note: do not delete here
		inventory[idx] = NULL; // Initialize inventory with NULL;
		materiaCount--;
	}
	else
		std::cout << "Invalid index for unequip." << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
    else
        std::cout << "Invalid index for use." << std::endl;
}