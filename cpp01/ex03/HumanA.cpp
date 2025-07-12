/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:03:49 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/12 19:03:49 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

// Constructor, initializes name and weapon
HumanA::HumanA(const std::string name, Weapon& weapon) : name(name), weapon(weapon) {}

void HumanA::attack() const {
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
};


