/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:38:53 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/28 20:48:26 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Brain.hpp"
# include "Animal.hpp"

#include <iostream>
class Dog : public Animal{
    private:
        Brain *brain;
	protected:
		std::string type;
	public:
		Dog();
		~Dog();
		Dog(const Dog &obj);
		Dog& operator=(const Dog &obj);
		void makeSound()const;
        Brain* getBrain()const;
};

#endif
