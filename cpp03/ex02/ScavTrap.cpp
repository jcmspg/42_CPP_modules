/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 21:24:25 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/19 22:02:03 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap " << name << " created." << std::endl;
}

ScavTrap::ScavTrap(const std::string &name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) 
    : ClapTrap(name, hitPoints, energyPoints, attackDamage)
{
    std::cout << "ScavTrap " << name << " created with custom attributes." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap " << this->name << " copied." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap " << this->name << " assigned." << std::endl;
    return *this;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " destroyed." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " is now in Gate Keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (hitPoints > 0 && energyPoints > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    }
    else if (hitPoints == 0)
    {
        std::cout << "ScavTrap " << this->name << " cannot attack! ... They are dead ..." << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << this->name << " cannot attack! ... They are exhausted ..." << std::endl;
    }
}