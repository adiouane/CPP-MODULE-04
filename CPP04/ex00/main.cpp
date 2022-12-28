/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:27:35 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/25 19:19:56 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	std::cout << "-----------WRONG ANIMAL/CAT-----------------" << std::endl;
	const WrongAnimal *test_animal = new WrongAnimal();
	const WrongAnimal *test_cat = new WrongCat();
	std::cout << test_animal->getType() << " " << std::endl;
	std::cout << test_cat->getType() << " " << std::endl;
	test_animal->makeSound(); //will output the cat sound!
	test_cat->makeSound();
	delete test_animal;
	delete test_cat;
	std::cout << "--------------------------------------------" << std::endl;
	return 0;
}
