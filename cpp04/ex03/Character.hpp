/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:30:18 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/21 18:54:44 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
    private:
        std::string name;
        AMateria *inventory[4]; // Array to hold up to 4 AMateria objects
        int materiaCount; // Current number of materias in the inventory

    public:
        Character(const std::string &name);
        Character(const Character &other);
        ~Character();
        Character &operator=(const Character &other);

        std::string const &getName() const;

        void equip(AMateria *m);
        void unequip(int idx);
        void use(int idx, ICharacter &target);
};

#endif // CHARACTER_HPP