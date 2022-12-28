/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:38:11 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/28 17:22:39 by adiouane         ###   ########.fr       */
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

    // Dog d1;
    // Dog d2;
    // // Cat c2;
    // // Dog d2 = d1; // call copy constructor of Dog

    // for (int i = 0; i < 5; i++)
    //     d1.getBrain()->setIdea(i, "Dog idea1 D1  ");
    // for (int i = 0; i < 5; i++)
    //     d2.getBrain()->setIdea(i, "Dog idea2 D2 ");
    // std::cout << "-----------------NTHING CHANGE---------------------------" << std::endl;

    // //print ideas of d1
    // for (int i = 0; i < 5; i++)
    //     std::cout << d1.getBrain()->getIdea(i) << std::endl;
    // std::cout << "----------------------------------------------------------" << std::endl;

    // //print ideas of d2
    // for (int i = 0; i < 5; i++)
    //     std::cout << d2.getBrain()->getIdea(i) << std::endl;
    // std::cout << "------------------TEST DEEP COPY--------------------------" << std::endl;


    // d2 = d1; // call operator= of Dog
    // //change value of d1
    // for (int i = 0; i < 5; i++)
    //     d1.getBrain()->setIdea(i, "*******    ");

    // std::cout << "----------------------------------------------------------" << std::endl;

    // //print ideas of d1 to see if it changed because of deep copy of d2 and it should not change
    // for (int i = 0; i < 5; i++)
    //     std::cout << "deep copy d2 : " << d2.getBrain()->getIdea(i) << std::endl;

    // std::cout << "----------------------------------------------------------" << std::endl;
    // for (int i = 0; i < 5; i++)
    //     std::cout << "deep copy d1 : " << d1.getBrain()->getIdea(i) << std::endl;
    // system("leaks a.out");


	// std::cout << "--------------------ANIMAL TEST------------------------" << std::endl;
//     const Animal* animals[10];
//     for (int i = 0; i < 5; i++)
//         animals[i] = new Dog();
//     for (int i = 5; i < 10; i++)
//         animals[i] = new Cat();
//     for (int i = 0; i < 10; i++)
//         delete animals[i];
//     // system("leaks a.out");

    // std::cout << "--------------------TEST FOR EX02-----------------------" << std::endl;
    // Animal test;
    //todo ask  error: allocating an object of abstract class type 'Brain'
    // this->brain = new Brain();
    return 0;
}







