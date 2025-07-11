/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 20:38:04 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/11 18:05:16 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {

    public:
        // Default constructor for creating a Zombie with no name
        Zombie();
        Zombie(std::string name);
        ~ Zombie();

        void announce() const;

        // Method to set the name of the Zombie
        void addName(std::string name);
        

    private:
        std::string name;    
};

#endif // ZOMBIE_HPP
