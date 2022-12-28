/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:27:19 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/28 03:59:30 by adiouane         ###   ########.fr       */
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

std::string Animal::getType(void)const{
	return (this->type);
}
void Animal::setType(std::string &type){
	this->type = type;
}