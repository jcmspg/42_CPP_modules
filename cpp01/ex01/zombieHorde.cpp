/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 17:47:07 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/11 17:47:07 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombieHorde.hpp"

Zombie *zombieHorde(int N, std::string name) {
    if (N <= 0) {
        std::cerr << "Error: Number of zombies must be greater than 0." << std::endl;
        return NULL;
    }

    Zombie *horde = new Zombie[N];

    for (int i = 0; i < N; ++i) {
        horde[i].addName(name);
    }

    return horde;
}