/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:10:48 by laugarci          #+#    #+#             */
/*   Updated: 2023/11/09 14:26:17 by laugarci         ###   ########.fr       */
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
		Contact			_contact[8];
	public:
		PhoneBook();
		~PhoneBook();
		void 			addContact(Contact contact);
		void			searchContact(Contact contact);
		void			printHeader(void);
};

#endif

