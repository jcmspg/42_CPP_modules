/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 20:00:14 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/23 17:32:43 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// megaphone.cpp

#include <iostream>
#include <string>

// Function to convert a string to uppercase and print it
void megaphone(const std::string &message) {
    for (std::size_t i = 0; i < message.length(); ++i) {
        std::cout << static_cast<char>(std::toupper(message[i]));
    }
    std::cout << std::endl;
}

// Main function to handle command line arguments
int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 1;
    }
    else
    {
        for (int i = 1; i < argc; ++i)
        {
            megaphone(argv[i]);
        }
    }
    return 0;
}
