/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:10:48 by laugarci          #+#    #+#             */
/*   Updated: 2023/11/08 15:47:33 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <bits/stdc++.h>

#include "Contact.hpp"

class PhoneBook {
	private:
		unsigned int	i;
		unsigned int	flag;
	public:
		PhoneBook();
		~PhoneBook();
		void 			addContact(Contact contact);
		void			searchContact(Contact contact);
		void			printHeader(void);
		Contact			 _contact[8];
};

#endif

