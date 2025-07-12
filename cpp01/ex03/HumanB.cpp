/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:09:01 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/12 19:09:01 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

// Constructor, initializes name and sets weapon to nullptr (cant use nullptr because of C++ standard version, it is safer, but prohibited)
// NULL is way more ambiguous, but it is the only option for C++98
HumanB::HumanB(const std::string name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon; // Set the weapon reference
}

void HumanB::attack() const {
    if (this->weapon) {
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    } else {
        std::cout << this->name << " has no weapon to attack with!" << std::endl;
    }
}