/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:28:54 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/12 19:28:54 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv) {
    
    if (argc != 4) {
        std::cerr << "Usage: " << argv[0] << " <file to read> <string to replace> <string to replace with>" << std::endl;
        return 1;
    }

    std::string fileName = argv[1];
    std::string toReplace = argv[2];
    std::string replaceWith = argv[3];

    // Check if the file exists and is readable
    if (fileName.empty() || toReplace.empty() || replaceWith.empty()) {
        std::cerr << "Error: Invalid arguments. Please provide a valid file name and non-empty strings." << std::endl;
        return 1;
    }

    // Open the file
    std::ifstream inputFile(fileName.c_str());
    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open file " << fileName << std::endl;
        return 1;
    }

    // Read the file content
    // Using std::istreambuf_iterator to read the entire file content into a string
    std::string fileContent((std::istreambuf_iterator<char>(inputFile)),
                            std::istreambuf_iterator<char>());
    inputFile.close();

    // Replace occurrences of the string
    std::string result;
    size_t pos = 0;
    while (true)
    {
        size_t found = fileContent.find(toReplace, pos);
        if (found == std::string::npos) { // No more occurrences found, npos is a constant representing "not found"
            result.append(fileContent.substr(pos));
            break; // No more occurrences found
        }
        result.append(fileContent.substr(pos, found - pos)); // Append the part before the found string
        result.append(replaceWith); // Append the replacement string
        pos = found + toReplace.length(); // Move past the found string
        // Continue searching for the next occurrence
    }

    std::string outputFileName = fileName + ".replace";
    // Write the modified content back to the file
    std::ofstream outputFile(outputFileName.c_str());
    if (!outputFile.is_open()) {
        std::cerr << "Error: Could not open file " << outputFileName << std::endl;
        return 1;
    }
    outputFile << result;
    outputFile.close();

    std::cout << "Replacement complete. Modified content written to " << outputFileName << std::endl;
    std::cout << "Original file: " << fileName << std::endl;
    std::cout << "String to replace: " << toReplace << std::endl;
    std::cout << "String replaced with: " << replaceWith << std::endl;

    return 0;
}