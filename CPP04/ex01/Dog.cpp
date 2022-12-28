/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:27:30 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/28 22:10:35 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

/*
  deep copy 
*/

Dog::Dog(const Dog &obj)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = obj; // call assignation operator 
}


Dog& Dog::operator=(const Dog &obj)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this->brain)
        delete this->brain;
    this->brain = new Brain();// case of if you use copy constructor Dog a = b; or Dog a(b); if not sigfault
    this->type = obj.type;
    *this->brain = *obj.brain;
    return *this;
}

void Dog::makeSound()const
{
    std::cout << "Woo" << std::endl;
}

Brain* Dog::getBrain(void)const
{
    return this->brain;
}
//  Dog dog1;
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