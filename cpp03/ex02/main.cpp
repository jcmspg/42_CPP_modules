/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:10:57 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/20 02:23:09 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

    ClapTrap claptrap("ClapTrap");
    claptrap.attack("target1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    std::cout << claptrap.getName() << " has " << claptrap.getHitPoints() << " hit points left." << std::endl;
    ScavTrap scavtrap("ScavTrap");
    scavtrap.attack("target2");
    scavtrap.guardGate();
    scavtrap.takeDamage(10);
    scavtrap.beRepaired(5);
    std::cout << scavtrap.getName() << " has " << scavtrap.getHitPoints() << " hit points left." << std::endl;
    FragTrap fragtrap("FragTrap");
    fragtrap.attack("target3");
    fragtrap.highFivesGuys();
    fragtrap.takeDamage(15);
    fragtrap.beRepaired(10);
    std::cout << fragtrap.getName() << " has " << fragtrap.getHitPoints() << " hit points left." << std::endl;

    ClapTrap claptrapCopy = claptrap; // Copy constructor
    claptrapCopy.attack("target4");
    ClapTrap claptrapAssigned("AssignedClapTrap");
    claptrapAssigned = claptrap; // Assignment operator
    claptrapAssigned.attack("target5");
    ScavTrap scavtrapCopy = scavtrap; // Copy constructor
    scavtrapCopy.attack("target6");
    ScavTrap scavtrapAssigned("AssignedScavTrap");
    scavtrapAssigned = scavtrap; // Assignment operator
    scavtrapAssigned.attack("target7");
    FragTrap fragtrapCopy = fragtrap; // Copy constructor
    fragtrapCopy.attack("target8");
    FragTrap fragtrapAssigned("AssignedFragTrap");
    fragtrapAssigned = fragtrap; // Assignment operator
    fragtrapAssigned.attack("target9");

    // Demonstrating polymorphism
    ClapTrap *clapPtr = &scavtrap; // ScavTrap is a ClapTrap
    clapPtr->attack("target10");
    ClapTrap *fragPtr = &fragtrap; // FragTrap is a ClapTrap
    fragPtr->attack("target11");
    ScavTrap *scavPtr = &scavtrap; // ScavTrap can call its own method
    scavPtr->guardGate();

    


    return 0;
}