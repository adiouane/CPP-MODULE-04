/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:27:19 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/28 20:44:13 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Default (ANIMAL) Constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Default (ANIMAL) Destructor called" << std::endl;
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Copy (ANIMAL) constructur called" << std::endl;
	*this = obj;
}

Animal &Animal::operator=(const Animal &obj){
	std::cout <<  "Copy  (ANIMAL)assginemt operator " << std::endl;
	this->type = obj.type;
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