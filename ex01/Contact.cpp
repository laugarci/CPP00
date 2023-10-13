/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:10:26 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/13 11:26:19 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	Contact::chooseIndex(unsigned int i)
{
	std::string input;
	unsigned int num;
	unsigned int	j;

	num = 0;
	while (input.length() < 1)
	{
		input.erase();
		std::cout << "\x1B[1mWhich contact do you want to see? \x1B[0m";
		if (!std::getline(std::cin, input))
			break ;
		j = 0;
		while (j < input.length())
		{
			if (input[j] < '0' || input[j] > '9')
			{
				std::cout << "Enter a valid index" << std::endl;
				input.erase();
			}
			j++;
		}
		if (input.length() > 0)
		{
			num = stoi(input);
			if (num > i)
			{
				std::cout << "Enter a valid index" << std::endl;
				input.erase();
			}
		}
	}
}

void Contact::printContacts(Contact *contact, unsigned int j)
{
	if (j == 0)
		std::cout << "\x1B[1m		>> CHOOSE CONTACT << \x1B[0m" << std::endl << std::endl;
	if (contact->firstName.length() < 1)
		return ;
	std::cout << "\x1B[1m|\x1B[0m      ";
	std::cout << std::left << std::setw(8) << std::left << (j + 1) << "\x1B[1m| \x1B[0m";
	if (contact->firstName.size() > 10)
		std::cout << std::left << std::setw(9) << contact->firstName.substr(0, 9) << ". " << "\x1B[1m| \x1B[0m";
	else
		std::cout << std::left << std::setw(10) << contact->firstName << "\x1B[1m| \x1B[0m";
	if (contact->lastName.size() > 10)
		std::cout << std::left << std::setw(9) << contact->lastName.substr(0, 9) << ". " << "\x1B[1m|\x1B[0m";
	else
		std::cout << std::left << std::setw(10) << contact->lastName << "\x1B[1m| \x1B[0m";
	if (contact->nickname.size() > 10)
		std::cout << std::left << std::setw(9) << contact->nickname.substr(0, 9) << ". " << "\x1B[1m| \x1B[0m" << std::endl << std::endl;
	else
		std::cout << std::left << std::setw(10) << contact->nickname << "\x1B[1m|\x1B[0m" << std::endl << std::endl;
}

std::string Contact::add_info(const std::string str)
{
    std::string input;

    while (input.length() < 1)
	{
        input.erase();
        std::cout << "\x1B[1m" << std::left << std::setw(20) << str;
        std::cout << "\x1B[0m"; 
		if (!std::getline(std::cin, input))
            break;
    }
    return (input);
}


std::string	Contact::get_number(void)
{
	std::string	input;
	unsigned int j;


	while (input.length() < 1)
	{
		input.erase();
		std::cout << "\x1B[1m" << std::left << std::setw(20) << "Phone number:";
		std::cout << "\x1B[0m";
		if (!std::getline(std::cin, input))
			break ;
		j = 0;
		while (j < input.length())
		{
			if (input[j] < '0' || input[j] > '9')
			{
				std::cout << "Enter a valid phone number" << std::endl;
				input.erase();
			}
			j++;
		}
	}
	return (input);
}

void	Contact::add_new(Contact *contact)
{
	contact->firstName = add_info("FirstName:");
	contact->lastName = add_info("Last Name:");
	contact->nickname = add_info("Nickname:");
	contact->phoneNumber = get_number();
	contact->darkestSecret = add_info("Darkest Secret:");
}
