/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 17:49:24 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/13 17:49:24 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv) {
    
    {
        if (argc != 2) {
            std::cerr << "Usage: " << argv[0] << " <ACTION>" << std::endl;
            return 1;
        }

        std::string action = argv[1];
        if (action.empty()) {
            std::cerr << "No action found. Exiting." << std::endl;
            return 1;
        }
    }
    {
        Harl harl;
        std::string input = argv[1];
        int programLevel = -1;

        std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
        for (int i = 0; i < 4; ++i) {
            if (input == levels[i]) {
                programLevel = i;
                break;
            }
        }

        // std::cout << std::endl << "Harl Filter NO SWITCH" << std::endl;
        // if (programLevel >= 0 && programLevel <= 3) {
        //     for (int i = programLevel; i < 4; ++i) {
        //         std::cout << "[ " << levels[i] << " ]" << std::endl;
        //         harl.complain(levels[i]);
        //     }
        // } else {
        //     std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        // }
        // std::cout << std::endl << "--- --- ---" << std::endl << std::endl;

        switch (programLevel) {
            case 0:
                std::cout << "[ " << levels[0] << " ]" << std::endl;
                harl.complain("DEBUG");
                std::cout << std::endl;
                // fall through, no break to enable cascading complaints
                case 1:
                std::cout << "[ " << levels[1] << " ]" << std::endl;
                harl.complain("INFO");
                std::cout << std::endl;
                // fall through
                case 2:
                std::cout << "[ " << levels[2] << " ]" << std::endl;
                harl.complain("WARNING");
                std::cout << std::endl;
                // fall through
                case 3:
                std::cout << "[ " << levels[3] << " ]" << std::endl;
                harl.complain("ERROR");
                std::cout << std::endl;
                break;
                default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
                std::cout << std::endl;
        }
    }

    return 0;
}