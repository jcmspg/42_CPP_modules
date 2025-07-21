/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:40:31 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/21 18:47:32 by joamiran         ###   ########.fr       */
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



int main() {
    std::cout << CYAN << BOLD << "\n=== Creating MateriaSource ===\n" << RESET;
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    std::cout << GREEN << BOLD << "\n=== Creating Characters ===\n" << RESET;
    ICharacter* me = new Character("Magnus the Red");
    ICharacter* enemy = new Character("Roboute Guilliman");

    std::cout << YELLOW << BOLD << "\n=== Creating and Equipping Materia ===\n" << RESET;
    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);
    
    tmp = src->createMateria("cure");
    me->equip(tmp);

    std::cout << CYAN << BOLD << "\n=== Using Materia ===\n" << RESET;
    me->use(0, *enemy); // Ice on Guilliman
    me->use(1, *enemy); // Cure on Guilliman

    std::cout << RED << BOLD << "\n=== Unequipping Materia ===\n" << RESET;
    me->unequip(0); // Unequip Ice
    me->use(0, *enemy); // Should do nothing

    std::cout << GREEN << BOLD << "\n=== Re-Equip and Use ===\n" << RESET;
    tmp = src->createMateria("ice");
    me->equip(tmp); // Re-equip ice
    me->use(0, *enemy); // Should work now

    std::cout << CYAN << BOLD << "\n=== Overfilling Inventory (only 4 slots allowed) ===\n" << RESET;
    me->equip(src->createMateria("cure"));
    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("cure")); // Should be ignored (5th slot)

    std::cout << RED << BOLD << "\n=== Cleaning Up ===\n" << RESET;
    delete enemy;
    delete me;
    delete src;

    return 0;
}
