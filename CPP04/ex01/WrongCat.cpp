/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:34:03 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/28 20:49:16 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "Default (WrongCat) Constructor called" << std::endl;
}

WrongCat::~WrongCat(){
	std::cout << "Default (WrongCat) Destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj)
{
	std::cout << "Copy (WrongCat) constructur called" << std::endl;
	*this = obj;
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{
	std::cout <<  "Copy (WrongCat) assginemt operator " << std::endl;
	this->type = obj.type;
	return (*this);
}

void WrongCat::makeSound(void)const{
	std::cout << "WrongCat make sound meeew (🐈)" << std::endl;
}