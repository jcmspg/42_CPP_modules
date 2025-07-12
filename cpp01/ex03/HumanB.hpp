/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:05:22 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/12 19:05:22 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB{

    public:
        HumanB(const std::string name);

        void attack() const;
        void setWeapon(Weapon& weapon);

    private:
        std::string name;
        Weapon* weapon; // Pointer to allow for null weapon

};

#endif // HUMANB_HPP