/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 18:50:51 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/12 18:50:51 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {

    public:
        Weapon(const std::string type);

        const std::string& getType() const;
        void setType(const std::string newType);

    private:
        std::string type;
};

#endif // WEAPON_HPP