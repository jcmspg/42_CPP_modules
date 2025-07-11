/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 17:28:54 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/11 17:28:54 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "newZombie.hpp"
#include "randomChump.hpp"


int main() {

    // Create two zombies in the heap and announce them

    std::cout << "Creating heap zombies..." << std::endl << std::endl;
    Zombie* zombie1 = newZombie("Jason Bright");
    zombie1->announce();
    
    Zombie* zombie2 = newZombie("Charon");
    zombie2->announce();
    std::cout << std::endl;
    
    
    // Create zombies on the stack and announce them
    std::cout << "Creating stack zombies..." << std::endl << std::endl;
    randomChump("Mojave Express Courier");
    randomChump("Grognak the Barbarian");
    randomChump("Joshua Graham");
    randomChump("Moira Brown");
    std::cout << std::endl;


    // create stack zombies and announce them
    Zombie stackZombie1("Hancock");
    stackZombie1.announce();

    Zombie stackZombie2("Raul Tejada");
    stackZombie2.announce();
    
    // Clean up the heap-allocated zombies
    std::cout << std::endl << "Cleaning up heap zombies..." << std::endl << std::endl;
    delete zombie1;
    delete zombie2;
    std::cout << std::endl << "Heap zombies cleaned up." << std::endl << std::endl;

    
    return 0;
}