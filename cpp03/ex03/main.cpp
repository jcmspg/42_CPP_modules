/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 20:10:57 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/20 02:25:07 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main() {
    
    std::cout << "\n=== Creating DiamondTrap: Abaddon ===\n";
    DiamondTrap abaddon("Abaddon");
    abaddon.whoAmI();
    abaddon.attack("Sanguinius");
    abaddon.guardGate();
    abaddon.highFivesGuys();
    std::cout << std::endl;

    std::cout << "\n=== Copying DiamondTrap: Abaddon -> Horus ===\n";
    DiamondTrap horus = abaddon;
    horus.whoAmI();
    std::cout << std::endl;

    std::cout << "\n=== Assigning DiamondTrap: Horus -> Lorgar ===\n";
    DiamondTrap lorgar("Lorgar");
    lorgar = horus;
    lorgar.whoAmI();
    std::cout << std::endl;

    std::cout << "\n=== Testing base classes ===\n";
    std::cout << "\n-- Creating ClapTrap: Guilliman --\n";
    ClapTrap guilliman("Guilliman");
    guilliman.attack("Chaos Cultist");

    std::cout << "\n-- Creating ScavTrap: Kharn --\n";
    ScavTrap kharn("Kharn");
    kharn.attack("Eldar");
    kharn.guardGate();

    std::cout << "\n-- Creating FragTrap: Lucius --\n";
    FragTrap lucius("Lucius");
    lucius.attack("Imperial Fist");
    lucius.highFivesGuys();

    std::cout << "\n=== Destroying all traps ===\n";
    return 0;

}