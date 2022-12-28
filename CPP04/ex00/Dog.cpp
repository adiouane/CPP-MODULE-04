/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:27:30 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/28 20:44:26 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Default (DOG) Constructor called" << std::endl;
}

Dog::~Dog(){
	std::cout << "Default (DOG) Destructor called" << std::endl;
}

Dog::Dog(const Dog &obj)
{
	std::cout << "Copy (DOG) constructur called" << std::endl;
	*this = obj;
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout <<  "Copy (DOG) assginemt operator " << std::endl;
	this->type = obj.type;
	return (*this);
}

void	Dog::makeSound(void)const{ 
	std::cout << "Dog make sound  hoow (🐕) " << std::endl;
}
