/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:10:26 by laugarci          #+#    #+#             */
/*   Updated: 2023/11/09 12:39:21 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::printSelect(Contact *contact)
{
	std::cout << std::endl << BOLD">> Contact information << "RESET << std::endl << std::endl;
	std::cout << BOLD"- First name: "RESET << contact->firstName << std::endl;
	std::cout << BOLD"- Last name: "RESET << contact->lastName << std::endl;
	std::cout << BOLD"- Nickname: "RESET << contact->nickname << std::endl;
	std::cout << BOLD"- Phone number: "RESET << contact->phoneNumber << std::endl;
	std::cout << BOLD"- Darkest secret: "RESET << contact->darkestSecret << std::endl << std::endl;
}

int	Contact::chooseIndex(unsigned int flag)
{
	std::string input;
	unsigned int num;
	unsigned int	j;

	num = 0;
	while (input.length() < 1)
	{
		input.erase();
		std::cout << BOLD"Which contact do you want to see? "RESET;
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
			if (num > flag || num < 1)
			{
				std::cout << "Enter a valid index" << std::endl;
				input.erase();
			}
		}
	}
	return (num);
}

void Contact::printContacts(Contact *contact, unsigned int index)
{
	std::cout << std::right << std::setw(9) << index + 1 << BOLD"|"RESET;
	if (contact->firstName.size() > 10)
		std::cout << std::right << std::setw(9) <<contact->firstName.substr(0, 9) << ". " << BOLD"|"RESET;
	else
		std::cout << std::right << std::setw(10) << contact->firstName << BOLD" |"RESET;
	if (contact->lastName.size() > 10)
		std::cout << std::right << std::setw(9) << contact->lastName.substr(0, 9) << ". " << BOLD"|"RESET;
	else
		std::cout << std::right << std::setw(10) << contact->lastName << BOLD" |"RESET;
	if (contact->nickname.size() > 10)
		std::cout << std::right << std::setw(9) << contact->nickname.substr(0, 9) << "." << std::endl << std::endl;
	else
		std::cout << std::right << std::setw(10) << contact->nickname << std::endl << std::endl;
}

std::string Contact::addInfo(const std::string str)
{
    std::string input;
	int i;

	i = 0;
    while (input.length() < 1)
	{
        input.erase();
        std::cout << BOLD << std::left << std::setw(20) << str;
        std::cout << RESET; 
		if (!std::getline(std::cin, input))
            break ;
		while (input[i])
		{
			if (!isalpha(input[i]))
			{
				std::cout << "Please. enter valid information" << std::endl;
				input.erase();
				break ;
			}
			i++;
		}
    }
    return (input);
}

std::string	Contact::getNumber(void)
{
	std::string	input;
	unsigned int j;


	while (input.length() < 1)
	{
		input.erase();
		std::cout << BOLD << std::left << std::setw(20) << "Phone number:";
		std::cout << RESET;
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

void	Contact::addNew(Contact *contact)
{
	contact->firstName = addInfo("First name:");
	contact->lastName = addInfo("Last Name:");
	contact->nickname = addInfo("Nickname:");
	contact->phoneNumber = getNumber();
	contact->darkestSecret = addInfo("Darkest Secret:");
}


