/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:27:24 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/28 20:44:06 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Default (CAT) Constructor called" << std::endl;
}

Cat::~Cat(){
	std::cout << "Default (CAT) Destructor called" << std::endl;
}

Cat::Cat(const Cat &obj)
{
	std::cout << "Copy (CAT) constructur called" << std::endl;
	*this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout <<  "Copy (CAT) assginemt operator " << std::endl;
	this->type = obj.type;
	return (*this);
}

void Cat::makeSound(void)const{
	std::cout << "Cat make sound meeew (🐈)" << std::endl;
}
