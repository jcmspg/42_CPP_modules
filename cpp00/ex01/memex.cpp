/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memex.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 20:08:59 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/02 21:50:05 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memex.hpp"

int main()
{
    Phonebook nomenclator;
    std::string command;

    while (1)
    {
        std::cout << ">> AWAITING INSTRUCTION FROM MAGOS-USER UNIT (ADD | SEARCH | EXIT): ";
        if (!std::getline(std::cin, command))
            break;

        if (command == "ADD")
            nomenclator.addContact();
        else if (command == "SEARCH")
            nomenclator.searchContact();
        else if (command == "EXIT")
            break;
        // else
        // std::cout << ">> INSTRUCTION UNRECOGNIZED. ONLY SANCTIONED RITES ALLOWED." << std::endl;
    }
    std::cout << ">> TERMINATING CONTACT-RITE PROTOCOL. SYSTEM PURGE INITIATED." << std::endl;
    return 0;
}