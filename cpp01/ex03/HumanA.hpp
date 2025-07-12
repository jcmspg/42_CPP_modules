/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:02:46 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/12 19:02:46 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class HumanA {

    public:
        HumanA(const std::string name, Weapon& weapon);

        void attack() const;

    private:
        std::string name;
        Weapon& weapon; // Reference to ensure weapon is always valid and cannot be null
};

#endif // HUMANA_HPP