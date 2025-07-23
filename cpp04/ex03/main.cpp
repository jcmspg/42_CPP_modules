/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:40:31 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/23 19:52:59 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

#include <iostream>

// should make a bucked[] to store all the unequipped materias.. but yeah.... rather just delete if not equipped for all intents and purposes

int main() {

    // Color codes for terminal output
    std::cout << CYAN << BOLD << "\n=== Creating MateriaSource ===\n" << RESET;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << GREEN << BOLD << "\n=== Creating Characters ===\n" << RESET;
    ICharacter* me = new Character("Magnus the Red");
    ICharacter* enemy = new Character("Roboute Guilliman");

    AMateria* dumpster[1000]; // Array to store unequipped materias
    for (int i = 0; i < 1000; ++i) {
        dumpster[i] = NULL; // Initialize all pointers to nullptr
    }
    int i = 0; // Index for dumpster

    std::cout << YELLOW << BOLD << "\n=== Creating and Equipping Materia ===\n" << RESET;
    
    AMateria* ice = src->createMateria("ice"); // dynamic allocation
    me->equip(ice); // character now owns this (slot 0)

    AMateria* cure = src->createMateria("cure");
    me->equip(cure); // character now owns this (slot 1)

    std::cout << CYAN << BOLD << "\n=== Using Materia ===\n" << RESET;
    me->use(0, *enemy); // Ice
    me->use(1, *enemy); // Cure

    std::cout << RED << BOLD << "\n=== Unequipping Materia ===\n" << RESET;
    
    // Store the unequipped materia externally to delete later
    dumpster[i++] = ice; // Store ice in dumpster
    me->unequip(0); // character no longer owns ice
    me->use(0, *enemy); // Does nothing

    std::cout << GREEN << BOLD << "\n=== Re-Equip and Use ===\n" << RESET;
    AMateria* ice2 = src->createMateria("ice");
    me->equip(ice2); // new ice, character owns this in slot 0
    me->use(0, *enemy); // Ice again

    std::cout << CYAN << BOLD << "\n=== Overfilling Inventory (only 4 slots allowed) ===\n" << RESET;

    // Track each new Materia in case equip fails
    AMateria* cure2 = src->createMateria("cure");
    AMateria* ice3  = src->createMateria("ice");
    AMateria* cure3 = src->createMateria("cure");

    me->equip(cure2); // slot 2
    me->equip(ice3);  // slot 3

    // This one should be ignored (inventory full)
    dumpster[i++] = cure3; // Store cure3 in dumpster
    me->equip(cure3); // not equipped → must be deleted manually


    std::cout << RED << BOLD << "\n=== Cleaning Up ===\n" << RESET;

    delete enemy;
    delete me; // character should delete all equipped materia

    delete src; // no dynamic Materia stored inside in this implementation

    // Manual cleanup of unequipped / rejected materia
    //now emptying the dumpster
    for (int j = 0; j < i; ++j) {
        delete dumpster[j]; // delete each unequipped materia
    }
    std::cout << GREEN << BOLD << "\n=== All resources cleaned up successfully! ===\n" << RESET;

    return 0;
}
