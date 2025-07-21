/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:16:42 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/21 18:24:01 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

class Ice : public AMateria {
    public:
        Ice();
        Ice(const Ice &other);
        ~Ice();
        Ice &operator=(const Ice &other);

        AMateria *clone() const; // Returns a new instance of Ice
        void use(ICharacter &target); // Uses the Ice materia on the target character
};

#endif // ICE_HPP