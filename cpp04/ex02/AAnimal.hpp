/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:31:16 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/21 17:45:08 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
    
    protected:
        std::string type;

    public:
        AAnimal();
        AAnimal(const AAnimal &other);
        AAnimal &operator=(const AAnimal &other);
        virtual ~AAnimal();
        
        //IMPORTANT !!! in C++, the only way to make a class abstract is by declaring at least one pure virtual function using = 0
        virtual void makeSound() const = 0; // Pure virtual function
        std::string getType() const;

};

#endif // AANIMAL_HPP

