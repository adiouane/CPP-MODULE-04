/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:38:20 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/27 19:17:31 by adiouane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include "Animal.hpp"

#include <iostream>
class Brain : public Animal{
	private:
		std::string ideas[100];
	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain &other);
		Brain& operator=(const Brain &other);
        void setIdea(int i, std::string idea);
        std::string getIdea(int i)const;
};

#endif
