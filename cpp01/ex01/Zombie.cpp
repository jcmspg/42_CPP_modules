/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 17:02:51 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/11 17:02:51 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
    // Default constructor initializes a Zombie with no name
}

Zombie::~Zombie() {
    std::cout << this->name << " has been destroyed." << std::endl;
}

Zombie::Zombie(std::string name) {
    this->name = name;
}

void Zombie::announce() const {
    std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::addName(std::string name) {
    this->name = name;
    // Optionally, you could announce the zombie here
    // this->announce();

}