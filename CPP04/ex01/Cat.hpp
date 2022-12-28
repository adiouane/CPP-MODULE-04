/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:38:25 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/28 20:47:15 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Brain.hpp"
# include "Animal.hpp"

#include <iostream>
class Cat : public Animal{
    private:
        Brain *brain;
	protected:
		std::string type;
	public:
		Cat();
		~Cat();
		Cat(const Cat &obj);
		Cat& operator=(const Cat &obj);
		void makeSound()const;
        Brain* getBrain()const;
};

#endif
