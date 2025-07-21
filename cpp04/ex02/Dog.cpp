/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:09:27 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/21 17:50:15 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : brain(new Brain()) {
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other) {
    brain = new Brain(*other.brain); // Deep copy of Brain
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
    if (brain) {
        delete brain; // Free the Brain object
    }
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &other) {
        AAnimal::operator=(other);
        if (brain) {
            delete brain; // Free existing Brain
        }
        brain = new Brain(*other.brain); // Deep copy of Brain
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << "Woof! Woof!" << std::endl;
}