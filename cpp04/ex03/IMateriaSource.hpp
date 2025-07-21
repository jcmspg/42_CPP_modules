/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:15:00 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/21 18:15:33 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class IMateriaSource {
    public:
        virtual ~IMateriaSource() {}

        // Learn a new materia type
        virtual void learnMateria(AMateria *m) = 0;

        // Create a new materia of the learned type
        virtual AMateria *createMateria(const std::string &type) = 0;
};

#endif // IMATERIASOURCE_HPP