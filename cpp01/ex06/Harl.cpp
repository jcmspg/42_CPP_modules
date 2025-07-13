/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 20:02:16 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/12 20:02:16 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>
#include <map>

Harl::Harl() {}

void Harl::complain(const std::string level)
{
    const std::string actions[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*functions[])() = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    // avoiding the use of a map for simplicity
    // 
    const size_t numActions = sizeof(actions) / sizeof(actions[0]);
    for (size_t i = 0; i < numActions; ++i) {
        if (level == actions[i]) {
            (this->*functions[i])();
            return;
        }
    }

    // If the action is not recognized, cringe
    std::cout << "Harl: cringe" << std::endl;
}

void Harl::debug(void)
{
    std::cout << "Harl: I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "Harl: I cannot believe adding extra bacon costs more money. You don’t put enough! If you did, I would not have to ask for it!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "Harl: I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "Harl: This is unacceptable! I want to speak to the manager now." << std::endl;
}

