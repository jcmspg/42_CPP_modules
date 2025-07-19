/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 21:50:45 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/19 22:02:50 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name): ScavTrap(name, 100, 100, 30) // FragTrap has specific stats
{
    std::cout << "FragTrap " << name << " created." << std::endl;
}

FragTrap::FragTrap(const std::string &name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) 
    : ScavTrap(name, hitPoints, energyPoints, attackDamage)
{
    std::cout << "FragTrap " << name << " created with custom attributes." << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ScavTrap(other)
{
    std::cout << "FragTrap " << this->name << " copied." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        ScavTrap::operator=(other);
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
