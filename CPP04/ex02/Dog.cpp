/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:27:30 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/27 20:02:58 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog constructor called" << std::endl;
    this->brain = new Brain();
    this->type = "Dog";
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

/*
  deep copy 
*/

Dog::Dog(const Dog &other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}


Dog& Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->brain = new Brain();
    this->type = other.type;
    *this->brain = *other.brain;
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

Dog::Dog(Brain *brain){
    this->brain = brain;
}

Dog &Dog::operator=(const Brain &other){
    this->brain = new Brain();
    *this->brain = other;
    return *this;
}