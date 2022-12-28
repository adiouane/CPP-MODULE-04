/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:27:19 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/26 16:51:52 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "(ANIMAL) Constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout << "(ANIMAL) Destructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Copy (ANIMAL) constructur called" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other){
	std::cout <<  "Copy  (ANIMAL)assginemt operator " << std::endl;
	this->type = other.type;
	return (*this);
}

void	Animal::makeSound(void)const{
	std::cout << "Animal make sound (^^)" << std::endl;
}

std::string Animal::getType(void)const{
	return (this->type);
}
void Animal::setType(std::string &type){
	this->type = type;
}