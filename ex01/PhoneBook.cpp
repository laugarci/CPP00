/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:39:04 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/13 15:18:42 by laugarci         ###   ########.fr       */
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

void	PhoneBook::printHeader(void)
{
	std::cout << BOLD"	>> CHOOSE CONTACT << " << std::endl << std::endl;
	std::cout << std::left << std::setw(10) << "| Index" << "|";
	std::cout << std::left << std::setw(10) << " First Name" << "|";
	std::cout << std::left << std::setw(10) << " Last Name " << "|";
	std::cout << std::left << std::setw(10) << " Nickname"RESET  << std::endl;
}

void	PhoneBook::searchContact(Contact contact)
{
	unsigned int j;
	unsigned int index;
	std::string input;

	if (i < 1 && flag == 0)
	{
		std::cout << "\e[1;31m >>> No contacts yet <<<" <<std::endl;
		std::cout << "\x1B[0m";
		return ;
	}
	else
	{
		j = 0;
		while (j < i)
		{
			if (j == 0)
				printHeader();
			contact.printContacts(&_contact[j], j);
			j++;
		}	
		index = contact.chooseIndex(i);
		contact.printSelect(&_contact[index - 1]);
	}
}


void	PhoneBook::addContact(Contact contact)
{
	contact.add_new(&_contact[i]);
	if (i + 1 >= 8)
	{
		i = 0;
		flag = 1;
	}
	else
		i++;
}
