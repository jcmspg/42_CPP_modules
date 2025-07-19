/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:10:57 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/19 21:47:44 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {

    ClapTrap claptrap("OG stairs enjoyer");
    claptrap.attack("target1");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    claptrap.attack("target2");
    claptrap.takeDamage(10);
    claptrap.beRepaired(5);

    ClapTrap anotherClaptrap(claptrap);
    anotherClaptrap.attack("target3");
    anotherClaptrap.takeDamage(2);
    anotherClaptrap.beRepaired(1); 

    ScavTrap scavtrap("Scavenger");
    scavtrap.attack("target4");
    // scavtrap.takeDamage(15);
    // scavtrap.beRepaired(10);
    scavtrap.guardGate();
    scavtrap.attack("target5");
    // scavtrap.takeDamage(50);
    // scavtrap.beRepaired(20);

    ScavTrap anotherScavtrap(scavtrap);
    anotherScavtrap.attack("target6");

    anotherScavtrap = scavtrap;

    return 0;
}