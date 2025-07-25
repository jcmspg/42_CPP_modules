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

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name << " has been destroyed." << std::endl;
}

void Zombie::announce() const {
    std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}