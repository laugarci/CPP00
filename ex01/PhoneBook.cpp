/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:39:04 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/12 11:33:59 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <iostream>
#include  <bits/stdc++.h>
#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() {
}

PhoneBook::~PhoneBook()
{
}



void	PhoneBook::addContact(Contact contact)
{
	contact.add_new(&_contact[i]);
	
	if (i + 1 > 7)
		i = 0;
	else
		i++;
}
