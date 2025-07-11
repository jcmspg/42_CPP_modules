/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 18:00:53 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/11 18:00:53 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "zombieHorde.hpp"
#include <iostream>
#include <cstdlib> // for std::atoi

int main(int argc, char **argv) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <number_of_zombies> <zombie_name>" << std::endl;
        return 1;
    }

    int N = std::atoi(argv[1]);
    std::string name = argv[2];

    Zombie *horde = zombieHorde(N, name);
    if (!horde) {
        return 1; // Error in creating the horde
    }

    // or comment and change the setName method to announce the zombies
    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }

    delete[] horde; // Free the allocated memory
    return 0;
}