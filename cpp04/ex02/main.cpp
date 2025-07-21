/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:30:25 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/21 17:56:41 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

// ANSI Color codes
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BOLD    "\033[1m"
#define DIM     "\033[2m"

int	main(void)
{
	std::cout << BOLD << CYAN << "=== CPP04 EX02 TESTS - ABSTRACT ANIMALS ===" << RESET << std::endl;
	std::cout << std::endl;

	// Test 1: Cannot instantiate abstract class AAnimal directly
	std::cout << BOLD << YELLOW << "--- Test 1: Abstract Class Test ---" << RESET << std::endl;
	std::cout << MAGENTA << "NOTE: Cannot create AAnimal directly - it's abstract!" << RESET << std::endl;
	// AAnimal* abstract = new AAnimal(); // This would cause compilation error
	std::cout << std::endl;

	// Test 2: Basic polymorphism with abstract base class
	std::cout << BOLD << YELLOW << "--- Test 2: Basic Polymorphism ---" << RESET << std::endl;
	const AAnimal* dog = new Dog();
	const AAnimal* cat = new Cat();

	std::cout << BLUE << "Dog type: " << GREEN << dog->getType() << RESET << std::endl;
	std::cout << BLUE << "Cat type: " << GREEN << cat->getType() << RESET << std::endl;

	std::cout << BLUE << "Dog sound: " << RESET;
	dog->makeSound();
	std::cout << BLUE << "Cat sound: " << RESET;
	cat->makeSound();

	delete dog;
	delete cat;
	std::cout << std::endl;

	// Test 3: Array of AAnimal pointers
	std::cout << BOLD << YELLOW << "--- Test 3: Array of Animals ---" << RESET << std::endl;
	const int arraySize = 6;
	AAnimal* animals[arraySize];

	// Fill half with dogs, half with cats
	std::cout << CYAN << "Creating array of animals:" << RESET << std::endl;
	for (int i = 0; i < arraySize; i++) {
		if (i < arraySize / 2) {
			animals[i] = new Dog();
			std::cout << GREEN << "Created Dog " << i << RESET << std::endl;
		} else {
			animals[i] = new Cat();
			std::cout << GREEN << "Created Cat " << i << RESET << std::endl;
		}
	}

	std::cout << CYAN << "\nMaking sounds:" << RESET << std::endl;
	for (int i = 0; i < arraySize; i++) {
		std::cout << BLUE << animals[i]->getType() << " says: " << RESET;
		animals[i]->makeSound();
	}

	std::cout << RED << "\nDeleting animals:" << RESET << std::endl;
	for (int i = 0; i < arraySize; i++) {
		delete animals[i];
	}
	std::cout << std::endl;

	// Test 4: Deep copy testing
	std::cout << BOLD << YELLOW << "--- Test 4: Deep Copy Test ---" << RESET << std::endl;
	Dog originalDog;
	std::cout << CYAN << "\nCreating copy of dog:" << RESET << std::endl;
	Dog copyDog = originalDog; // Copy constructor

	std::cout << CYAN << "\nCreating another dog and using assignment:" << RESET << std::endl;
	Dog assignedDog;
	assignedDog = originalDog; // Assignment operator

	std::cout << CYAN << "\nTesting with cats:" << RESET << std::endl;
	Cat originalCat;
	std::cout << CYAN << "\nCreating copy of cat:" << RESET << std::endl;
	Cat copyCat = originalCat;
	std::cout << std::endl;

	// Test 5: Additional Polymorphism Tests
	std::cout << BOLD << YELLOW << "--- Test 5: Additional Polymorphism Tests ---" << RESET << std::endl;
	std::cout << MAGENTA << "Testing virtual function calls through different pointer types:" << RESET << std::endl;
	
	Dog* dogPtr = new Dog();
	Cat* catPtr = new Cat();
	AAnimal* animalDogPtr = dogPtr;
	AAnimal* animalCatPtr = catPtr;

	std::cout << BLUE << "Direct dog call: " << RESET;
	dogPtr->makeSound();
	std::cout << BLUE << "Dog through AAnimal*: " << RESET;
	animalDogPtr->makeSound();

	std::cout << BLUE << "Direct cat call: " << RESET;
	catPtr->makeSound();
	std::cout << BLUE << "Cat through AAnimal*: " << RESET;
	animalCatPtr->makeSound();

	delete dogPtr;
	delete catPtr;
	std::cout << std::endl;

	// Test 6: Stack vs Heap objects
	std::cout << BOLD << YELLOW << "--- Test 6: Stack vs Heap Objects ---" << RESET << std::endl;
	std::cout << CYAN << "Stack objects:" << RESET << std::endl;
	{
		Dog stackDog;
		Cat stackCat;
		std::cout << BLUE << "Stack dog sound: " << RESET;
		stackDog.makeSound();
		std::cout << BLUE << "Stack cat sound: " << RESET;
		stackCat.makeSound();
		std::cout << DIM << "Leaving scope - destructors will be called automatically" << RESET << std::endl;
	}

	std::cout << CYAN << "\nHeap objects:" << RESET << std::endl;
	AAnimal* heapDog = new Dog();
	AAnimal* heapCat = new Cat();
	std::cout << BLUE << "Heap dog sound: " << RESET;
	heapDog->makeSound();
	std::cout << BLUE << "Heap cat sound: " << RESET;
	heapCat->makeSound();
	std::cout << RED << "Manually deleting heap objects:" << RESET << std::endl;
	delete heapDog;
	delete heapCat;
	std::cout << std::endl;

	std::cout << BOLD << GREEN << "=== ALL TESTS COMPLETED ===" << RESET << std::endl;
	return 0;
}
