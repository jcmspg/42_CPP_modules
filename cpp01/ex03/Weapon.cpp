/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:01:27 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/12 19:01:27 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string type) : type(type) {}

const std::string& Weapon::getType() const {
    return this->type;
}

void Weapon::setType(const std::string newType) {
    this->type = newType;
}


