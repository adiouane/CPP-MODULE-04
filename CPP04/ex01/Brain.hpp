/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiouane <adiouane@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 02:38:20 by adiouane          #+#    #+#             */
/*   Updated: 2022/12/28 20:47:07 by adiouane         ###   ########.fr       */
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
		Brain(const Brain &obj);
		Brain& operator=(const Brain &obj);
        void setIdea(int i, std::string idea);
        std::string getIdea(int i)const;
};

#endif
