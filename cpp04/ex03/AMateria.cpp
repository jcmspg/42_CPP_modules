/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:21:17 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/21 18:23:30 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type) {
    std::cout << "AMateria constructor called for type: " << type << std::endl;
}

AMateria::AMateria(const AMateria &other) : type(other.type) {
    std::cout << "AMateria copy constructor called for type: " << type << std::endl;
}

AMateria::~AMateria() {
    std::cout << "AMateria destructor called for type: " << type << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other) {
    std::cout << "AMateria assignment operator called for type: " << type << std::endl;
    if (this != &other) {
        type = other.type;
    }
    return *this;
}

std::string const &AMateria::getType() const {
    return type;
}

void AMateria::use(ICharacter &target) {
    (void)target; // Suppress unused parameter warning
}