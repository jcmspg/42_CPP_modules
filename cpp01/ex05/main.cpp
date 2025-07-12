/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 21:02:10 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/12 21:02:10 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main()
{
    Harl harl;
    std::string input;

    std::cout << "Enter a complaint level (DEBUG, INFO, WARNING, ERROR): ";
    while(true) {
        std::getline(std::cin, input);
        if (input.empty()) {
            std::cout << "No input provided. Exiting." << std::endl;
            break;
        }
        harl.complain(input);
        std::cout << "Enter another complaint level (DEBUG, INFO, WARNING, ERROR): ";
    }
    return 0;
}