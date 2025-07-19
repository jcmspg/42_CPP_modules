/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:10:54 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/19 21:58:42 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(100), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " created." << std::endl;
}

ClapTrap::ClapTrap(const std::string &name, unsigned int hitPoints, unsigned int energyPoints, unsigned int attackDamage) : name(name), hitPoints(hitPoints), energyPoints(energyPoints), attackDamage(attackDamage)
{
    std::cout << "ClapTrap " << name << " created with custom attributes." << std::endl;
}

const std::string &ClapTrap::getName() const
{
    return name;
}
unsigned int ClapTrap::getHitPoints() const
{
    return hitPoints;
}
unsigned int ClapTrap::getEnergyPoints() const
{
    return energyPoints;
}
unsigned int ClapTrap::getAttackDamage() const
{
    return attackDamage;
}

ClapTrap::ClapTrap(const ClapTrap &other) : name(other.getName()), hitPoints(other.getHitPoints()),
                                            energyPoints(other.getEnergyPoints()), attackDamage(other.getAttackDamage())
{
    std::cout << "ClapTrap " << this->name << " copied." << std::endl;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        name = other.getName();
        hitPoints = other.getHitPoints();
        energyPoints = other.getEnergyPoints();
        attackDamage = other.getAttackDamage();
    }
    std::cout << "ClapTrap " << this->name << " assigned." << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " destroyed." << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if (energyPoints > 0 && hitPoints > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        energyPoints--;
    }
    else if (hitPoints == 0)
    {
        std::cout << "ClapTrap " << name << " cannot attack! ... They are dead ..." << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << name << " has no energy left to attack!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hitPoints > 0)
    {
        unsigned int damageTaken = (amount > hitPoints) ? hitPoints : amount;
        hitPoints -= damageTaken;
        std::cout << "ClapTrap " << name << " takes " << amount
                  << " points of damage! Hit points left: " << hitPoints << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << name << " is already dead .. Talk about beating a dead horse.." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energyPoints > 0 && hitPoints > 0)
    {
        hitPoints += amount;
        energyPoints--;
        std::cout << "ClapTrap " << name << " repairs themselves for " << amount
                  << " points! Hit points now: " << hitPoints << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << name << " cannot be repaired! ... As they are dead !" << std::endl;
    }
}