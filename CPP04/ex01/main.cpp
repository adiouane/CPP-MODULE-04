/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:38:11 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/28 22:06:14 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int main(){
    // const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// delete meta;
	// delete i;
	// delete j;
	// std::cout << "-----------WRONG ANIMAL/CAT-----------------" << std::endl;
	// const WrongAnimal *test_animal = new WrongAnimal();
	// const WrongAnimal *test_cat = new WrongCat();
	// std::cout << test_animal->getType() << " " << std::endl;
	// std::cout << test_cat->getType() << " " << std::endl;
	// test_animal->makeSound(); //will output the cat sound!
	// test_cat->makeSound();
	// delete test_animal;
	// delete test_cat;
	// std::cout << "--------------------DEEP COPY------------------------" << std::endl;

    // Dog dog1;
    // dog1.getBrain()->setIdea(0, "idea");
    // Dog dog2(dog1);

    //  Dog dog1;
    //  Dog dog2;
    //     // dog1.getBrain()->setIdea(0, "idea");
    //     // std::cout << "Dog1: " << dog1.getBrain()->getIdea(0) << std::endl;
    //     {
    //         std::cout << "--------------------------------------------" << std::endl;
    //         Dog dog2=dog1;
    //     }

    // Dog dog1;
    // // dog1.getBrain()->setIdea(0, "idea");
    // Dog dog2;

    // dog2 = dog1;
    // dog2 = dog1;
    // std::cout << "--------------------------------------------" << std::endl;
    // dog1.getBrain()->setIdea(0, "idea has been changed");
    // std::cout << "Dog1: " << dog1.getBrain()->getIdea(0) << std::endl;
    // std::cout << "--------------------------------------------" << std::endl;
    // std::cout << "Dog2: " << dog2.getBrain()->getIdea(0) << std::endl;
    // std::cout << "--------------------------------------------" << std::endl;

	// std::cout << "--------------------ANIMAL TEST------------------------" << std::endl;
//     const Animal* animals[10];
//     for (int i = 0; i < 5; i++)
//         animals[i] = new Dog();
//     for (int i = 5; i < 10; i++)
//         animals[i] = new Cat();
//     for (int i = 0; i < 10; i++)
//         delete animals[i];
    system("leaks a.out");
    return 0;
}






