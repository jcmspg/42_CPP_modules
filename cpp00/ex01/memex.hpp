/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memex.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 20:09:16 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/02 21:43:21 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMEX_HPP
#define MEMEX_HPP

#include <iostream>
#include <string>
#include <iomanip> // for std::setw and std::setfill
#include <sstream>
#include <cctype> // for std::isdigit
#include <cstdlib> // for std::atoi

// classes

// contact class to represent a contact
class Contact
{
    public:
    void setContact();
    void displayContact(int index) const;
    void displayMemex() const;
    
    private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
};

// Phonebook class to manage contacts
// has an array of contacts 
class Phonebook
{
    public:
        Phonebook();
        void addContact();
        void searchContact() const;
    
    private:
        Contact contacts[8]; // array of 8 contacts
        int contactCount; // current number of contacts
};




#endif