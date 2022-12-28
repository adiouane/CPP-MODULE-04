/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 00:27:27 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/28 20:46:40 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
#include "Animal.hpp"

class Cat : public Animal {
	protected:
		std::string type;
	public:
		Cat();
		~Cat();
		Cat(const Cat &obj);
		Cat &operator=(const Cat &obj);
		void makeSound()const;
};

#endif
