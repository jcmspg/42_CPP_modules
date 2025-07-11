/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 18:15:15 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/11 18:15:15 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>


int main() {

    // Create a string and initialize it
    std::string test = "HI THIS IS BRAIN";

    // Create a pointer to the string
    std::string* stringPTR = &test;
    
    // Create a reference to the string
    std::string& stringREF = test;

    // print the addresses
    std::cout << "mem address of string variable: " << &test << std::endl;
    std::cout << "mem address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "mem address held by stringREF: " << &stringREF << std::endl;

    // print the values
    std::cout << "value of string variable: " << test << std::endl;
    std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF: " << stringREF << std::endl;


    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    // Modify the string using the pointer
    *stringPTR = "New Value via Pointer";
    std::cout << "After modifying via pointer:" << std::endl;
    std::cout << "value of string variable: " << test << std::endl;

      std::cout << std::endl;
    std::cout << std::endl;
    // Modify the string using the reference
    stringREF = "New Value via Reference";
    std::cout << "After modifying via reference:" << std::endl;
    std::cout << "value of string variable: " << test << std::endl;

    return 0;
}