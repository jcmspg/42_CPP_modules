/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 21:50:45 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/20 02:22:11 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name): ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap " << name << " created." << std::endl;
}

FragTrap::FragTrap(const std::string &name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) 
    : ClapTrap(name, hitPoints, energyPoints, attackDamage)
{
    std::cout << "FragTrap " << name << " created with custom attributes." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other.getName(), other.getHitPoints(), other.getEnergyPoints(), other.getAttackDamage())
{
    std::cout << "FragTrap " << this->name << " copied." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap " << this->name << " assigned." << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " destroyed." << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " requests a high five! ...\nDon't let them hanging" << std::endl;
}
