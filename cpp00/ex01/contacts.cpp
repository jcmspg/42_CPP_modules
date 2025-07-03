/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 21:32:26 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/02 21:59:15 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memex.hpp"

static std::string truncate(const std::string& str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + '.';
    return str;
}

void Contact::displayContact(int index) const
{
    std::cout << "|"
              << std::setw(6) << index << "|"
              << std::setw(10) << truncate(firstName) << "|"
              << std::setw(10) << truncate(lastName) << "|"
              << std::setw(10) << truncate(nickname) << "|"
              << std::endl;
}

void Contact::displayMemex() const {
    std::cout << ">> DESIGNATION        : " << "[" << firstName << "]" << std::endl;
    std::cout << ">> LINEAGE IDENTIFIER : " << "[" << lastName << "]" << std::endl;
    std::cout << ">> ASSIGNED MONIKER   : " << "[" << nickname << "]" << std::endl;
    std::cout << ">> VOX-FREQUENCY      : " << "[" << phoneNumber << "]" << std::endl;
    std::cout << ">> HIDDEN SIN ARCHIVE : " << "[" << darkestSecret << "]" << std::endl;
}

// Contact class methods
void Contact::setContact()
{
    do {
        std::cout << ">> Designation (cannot be empty): ";
        if (!std::getline(std::cin, firstName))
            exit(0);
    } while (firstName.empty());

    do {
        std::cout << ">> Lineage Identifier (cannot be empty): ";
        if (!std::getline(std::cin, lastName))
            exit(0);
    } while (lastName.empty());

    do {
        std::cout << ">> Assigned Moniker (cannot be empty): ";
        if (!std::getline(std::cin, nickname))
            exit(0);
    } while (nickname.empty());

    do {
        std::cout << ">> Vox-Frequency (cannot be empty): ";
        if (!std::getline(std::cin, phoneNumber))
            exit(0);
    } while (phoneNumber.empty());

    do {
        std::cout << ">> Hidden Sin Archive (cannot be empty): ";
        if (!std::getline(std::cin, darkestSecret))
            exit(0);
    } while (darkestSecret.empty());
}