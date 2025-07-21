/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 18:41:53 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/21 18:48:38 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
    private:
        AMateria *materias[4]; // Array to hold up to 4 materias
        int materiaCount; // Current number of materias in the source

    public:
        MateriaSource();
        MateriaSource(const MateriaSource &other);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &other);

        void learnMateria(AMateria *m);
        AMateria *createMateria(const std::string &type);
};

#endif // MATERIASOURCE_HPP