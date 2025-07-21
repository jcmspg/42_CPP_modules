/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:03:58 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/21 18:51:34 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"
#define BOLD    "\033[1m"

#include <iostream>
#include <string>

// Forward declaration to avoid circular dependency
class ICharacter;

class AMateria {
    protected:
        std::string type;

    public:
        AMateria(std::string const &type);
        AMateria(const AMateria &other);
        virtual ~AMateria();
        AMateria &operator=(const AMateria &other);

        std::string const &getType() const;
        virtual AMateria *clone() const = 0;
        virtual void use(ICharacter &target);
};

#endif // AMATERIA_HPP