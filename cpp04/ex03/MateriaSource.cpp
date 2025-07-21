/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:44:17 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/21 18:56:06 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : materiaCount(0) {
    for (int i = 0; i < 4; ++i) {
        materias[i] = NULL;
    }
    std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other) : materiaCount(other.materiaCount) {
    std::cout << "MateriaSource copy constructor called" << std::endl;
    for (int i = 0; i < 4; ++i) {
        if (other.materias[i]) {
            materias[i] = other.materias[i]->clone();
        } else {
            materias[i] = NULL;
        }
    }
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < materiaCount; ++i) {
        delete materias[i];
    }
    std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
    std::cout << "MateriaSource assignment operator called" << std::endl;
    if (this != &other) {
        for (int i = 0; i < materiaCount; ++i) {
            delete materias[i]; // Clean up existing materias
        }
        materiaCount = other.materiaCount;
        for (int i = 0; i < 4; ++i) {
            if (other.materias[i]) {
                materias[i] = other.materias[i]->clone();
            } else {
                materias[i] = NULL;
            }
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m) {
    if (!m) {
        std::cout << "Cannot learn a null materia" << std::endl;
        return;
    }
    for (int i = 0; i < 4; ++i) {
        if (!materias[i]) {
            materias[i] = m;
            materiaCount++;
            std::cout << "Learned materia: " << m->getType() << std::endl;
            return;
        }
    }
    std::cout << "MateriaSource is full, cannot learn more materias" << std::endl;
    delete m; // Clean up the materia if not stored
}

AMateria *MateriaSource::createMateria(const std::string &type) {
    for (int i = 0; i < materiaCount; ++i) {
        if (materias[i] && materias[i]->getType() == type) {
            std::cout << "Creating materia of type: " << type << std::endl;
            return materias[i]->clone();
        }
    }
    std::cout << "Materia of type " << type << " not found in MateriaSource" << std::endl;
    return NULL; // Return NULL if the type is not found
}