/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:27:15 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/28 20:49:04 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "Default (WrongAnimal) Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Default (WrongAnimal) Destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	std::cout << "Copy (WrongAnimal) constructur called" << std::endl;
	*this = obj;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj){
	std::cout <<  "Copy  (WrongAnimal)assginemt operator " << std::endl;
	this->type = obj.type;
	return (*this);
}

void	WrongAnimal::makeSound(void)const{
	std::cout << "WrongAnimal make sound (^^)" << std::endl;
}

std::string WrongAnimal::getType(void)const{
	return (this->type);
}
void WrongAnimal::setType(std::string &type){
	this->type = type;
}