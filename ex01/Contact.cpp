/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:10:26 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/12 12:55:02 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

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
    return input;
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
				std::cout << "Please, enter a valid phone number" << std::endl;
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
