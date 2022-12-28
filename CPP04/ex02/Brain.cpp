/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:38:15 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/27 21:10:16 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}

/*
  deep copy 
*/

Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain &other)
{
    std::cout << "Brain assignation operator called" << std::endl;
    // deep copy
    // Brain *br = new Brain();
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    // *br->ideas = *other.ideas;
    return *this;
}

void Brain::setIdea(int i, std::string idea)
{
    this->ideas[i] = idea;
}

std::string Brain::getIdea(int i)const
{
    return this->ideas[i];
}