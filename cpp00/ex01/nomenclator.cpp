/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nomenclator.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 20:13:20 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/02 22:01:30 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memex.hpp"

Phonebook::Phonebook() : contactCount(0)
{
    // Initialize the phonebook with no contacts
}

// addContact method to add a new contact
void Phonebook::addContact()
{
    int index = contactCount % 8; // Wrap around if more than 8 contacts
    std::cout << ">> INITIATING CONTACT-RITE PROTOCOL. INSERT BIO-DATA FIELDS:" << std::endl;
    contacts[index].setContact();
    if (contactCount < 8)
        contactCount++;
    std::cout << ">> CONTACT-RITE COMPLETED. ENTRY STORED IN MEMEX SLOT #" << index << "." << std::endl;
}

bool isNumeric(const std::string &s)
{
    if (s.empty())
        return false;
    for (size_t i = 0; i < s.length(); ++i)
    {
        if (!std::isdigit(static_cast<unsigned char>(s[i])))
            return false;
    }
    return true;
}

// searchContact method to search and display contacts
void Phonebook::searchContact() const
{
    if (contactCount == 0)
    {
        std::cout << ">> NO ENTRIES IN THE DATA-VAULT. INITIATE ADD PROTOCOL FIRST." << std::endl;
        return;
    }

    std::cout << ">> DISPLAYING CONTACTS IN MEMEX:" << std::endl;

    std::cout << std::endl << "| INDEX |FIRSTNAME| LASTNAME| NICKNAME|" << std::endl;
    std::cout << "----------------------------------------" << std::endl;

    for (int i = 0; i < (contactCount < 8 ? contactCount : 8); ++i)
    {
        contacts[i].displayContact(i);
    }

    std::cout << std::endl << ">> SPECIFY INDEX TO RETRIEVE FULL DATA-SCROLL: ";
    std::string input;

    if (!std::getline(std::cin, input))
            exit(0);
    if (!isNumeric(input))
    {
        std::cout << ">> ACCESS ERROR: INVALID INPUT. PURGE REQUEST ABORTED." << std::endl;
        return;
    }
    int index = std::atoi(input.c_str());
    if (index >= 0 && index < 8 && index < contactCount)
        contacts[index].displayMemex();
    else
        std::cout << ">> ACCESS ERROR: INVALID INDEX. PURGE REQUEST ABORTED." << std::endl;
    return;
}