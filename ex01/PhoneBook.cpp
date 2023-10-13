/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:39:04 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/13 11:01:11 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <iostream>
#include  <bits/stdc++.h>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::searchContact(Contact contact)
{
	unsigned int j;

	if (i < 1)
	{
		std::cout << "\e[1;31m >>> No contacts yet <<<" <<std::endl;
		std::cout << "\x1B[0m";
	}
	else
	{
		j = 0;
		while (j < i)
		{
			contact.printContacts(&_contact[j], j);
			j++;
		}
		contact.chooseIndex(i);
	}
}


void	PhoneBook::addContact(Contact contact)
{
	contact.add_new(&_contact[i]);
	if (i + 1 > 7)
		i = 0;
	else
		i++;
}
