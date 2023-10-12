/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:10:48 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/12 16:33:33 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

#include "Contact.hpp"

class PhoneBook {
	private:
		unsigned int	i;
	public:
		PhoneBook(); //constructor
		~PhoneBook(); //destructor
		void addContact(Contact contact);
		void	searchContact(Contact contact);
		Contact _contact[8]; //_ convencion que indica que es de clase privada
};

#endif

