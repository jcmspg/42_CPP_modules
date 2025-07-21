/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:21:15 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/21 17:49:12 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "AAnimal.hpp"

class Brain {
    private:
        std::string ideas[100];

    public:
        Brain();
        Brain(const Brain &other);
        ~Brain();
        Brain &operator=(const Brain &other);

        void haveAnIdea(int index, const std::string &idea);
        std::string getIdea(int index) const;
};

#endif // BRAIN_HPP