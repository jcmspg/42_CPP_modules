/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 20:38:04 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/11 17:18:33 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

    public:
        Zombie(std::string name);
        
        void announce() const;
        
        ~ Zombie();

    private:
        std::string name;    
};

#endif // ZOMBIE_HPP
