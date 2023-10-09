/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:39:04 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/09 13:05:27 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <iostream>
#include  <bits/stdc++.h>
#include "PhoneBook.hpp"

int main()
{
	Contact newContact;
    std::cout << "First Name: ";
    std::getline(std::cin, newContact.firstName);
	std::cout << "Last Name: ";
	std::getline(std::cin, newContact.lastName);
	std::cout << "Nickname: ";
	std::getline(std::cin, newContact.nickname);
	std::cout << "Phone number: ";
	std::cin >> newContact.phoneNumber;
    std::cout << "Name: " << newContact.firstName << "\nLast Name: " <<newContact.lastName << "\nNickname: " << newContact.nickname << "\nPhone number: " << newContact.phoneNumber;
}
