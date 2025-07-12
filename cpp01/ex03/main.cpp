/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:12:56 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/12 19:12:56 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    } // Scopes, so the destructors are called
    std::cout << std::endl;
    
    {
        Weapon club = Weapon("crude spiked club");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    } // Scopes, so the destructors are called
    std::cout << std::endl;

    // additional tests and scopes
    {
        Weapon sword = Weapon("sharp sword");
        HumanA alice("Alice", sword);
        alice.attack();
        sword.setType("blunt sword");
        alice.attack();
    } // Scopes, so the destructors are called
    std::cout << std::endl;

    {
        Weapon axe = Weapon("battle axe");
        HumanB charlie("Charlie");
        charlie.setWeapon(axe);
        charlie.attack();
        axe.setType("double-edged axe");
        charlie.attack();
    } // Scopes, so the destructors are called
    std::cout << std::endl;

    {
        HumanB dave("Dave");
        dave.attack(); // No weapon set, should handle gracefully
        Weapon spear = Weapon("long spear");
        dave.setWeapon(spear);
        dave.attack();
    } // Scopes, so the destructors are called
    std::cout << std::endl;
    {
        Weapon magicWand = Weapon("magic wand");
        HumanB eva("EvA");
        HumanA eve("EvE", magicWand);
        eve.attack(); // Should print the type of the magic wand
        eva.attack(); // Should indicate no weapon

        eva.setWeapon(magicWand);
        eva.attack(); // Now should print the type of the magic wand

        // HumanA voldy("Voldemort", Weapon("dark magic"));   // this one is not allowed, because Weapon is not a reference
        // voldy.attack(); // Should print the type of the dark magic


    } // Scopes, so the destructors are called
    std::cout << std::endl;


    return 0;
};