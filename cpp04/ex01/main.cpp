/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joamiran <joamiran@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 16:30:25 by joamiran          #+#    #+#             */
/*   Updated: 2025/07/21 17:37:28 by joamiran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main(void)
{
	std::cout << "=== Right Way ===" << std::endl;
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;

	std::cout << "Type: " << i->getType() << std::endl;
	i->makeSound(); // Cat sound
	std::cout << "Type: " << j->getType() << std::endl;
	j->makeSound(); // Dog sound
	std::cout << "Type: " << meta->getType() << std::endl;
	meta->makeSound(); // Base Animal sound

	delete meta;
	delete j;
	delete i;

	const Animal kekw;
	std::cout << "Type: " << kekw.getType() << std::endl;
	kekw.makeSound(); // Base Animal sound

	const Dog fren;
	std::cout << "Type: " << fren.getType() << std::endl;
	fren.makeSound(); // Dog sound

	std::cout << "\n=== Wrong Way ===" << std::endl;
	const WrongAnimal *wrongMeta = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << std::endl;

	wrongMeta->makeSound(); // WrongAnimal sound
	wrongCat->makeSound();  // Still WrongAnimal sound

	delete wrongMeta;
	delete wrongCat;

	std::cout << "\n=== BRAIN PART ===" << std::endl;

	const int arraySize = 7;
	const Animal *animals[arraySize];

	for (int i = 0; i < arraySize; ++i)
	{
		if (i < arraySize / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << "\n=== Deleting animals ===\n";
	for (int i = 0; i < arraySize; ++i)
		delete animals[i];

	std::cout << "\n=== Deep copy test ===\n";
	Dog basic;
	basic.makeSound();

	{
		Dog copy = basic; // Should call copy constructor
		copy.makeSound();
	} // Copy destructor called here

	const Animal *x = new Dog();
	const Animal *y = new Cat();
	delete x; // should not create a leak
	delete y;


	return (0);
}