/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:18:09 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/21 18:26:11 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class Cure : public AMateria {
    public:
        Cure();
        Cure(const Cure &other);
        ~Cure();
        Cure &operator=(const Cure &other);

        AMateria *clone() const; // Returns a new instance of Cure
        void use(ICharacter &target); // Uses the Cure materia on the target character
};

#endif // CURE_HPP
