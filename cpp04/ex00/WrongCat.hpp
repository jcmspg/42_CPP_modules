/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:39:17 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/21 17:11:54 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    
    public:
        WrongCat();
        WrongCat(const WrongCat &other);
        ~WrongCat();
        WrongCat &operator=(const WrongCat &other);
        
        void makeSound() const;
};

#endif // WRONGCAT_HPP