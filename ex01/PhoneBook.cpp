/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:39:04 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/11 11:54:38 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <iostream>
#include  <bits/stdc++.h>
#include "PhoneBook.hpp"

void	PhoneBook::addcontact()
{
	Contact newContact;
	int i;

	i = 0;
	while(true)
	{
		std::cout << "First Name: ";
		std::getline(std::cin, newContact.firstName);
		std::cout << "Last Name: ";
		std::getline(std::cin, newContact.lastName);
		std::cout << "Nickname: ";
		std::getline(std::cin, newContact.nickname);
		std::cout << "Phone number: ";
		std::cin >> newContact.phoneNumber;
		break ;
	}
		std::cout << "Name: " << newContact.firstName << "\nLast Name: " <<newContact.lastName << "\nNickname: " << newContact.nickname << "\nPhone number: " << newContact.phoneNumber;
}
