/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:54:12 by laugarci          #+#    #+#             */
/*   Updated: 2023/11/09 14:26:15 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(void)
{

	std::string	input;
	PhoneBook	phonebook;
	Contact		contact;
	int i;

	std::cout << BOLD"Choose: 'ADD', 'SEARCH', 'EXIT'."RESET << std::endl;
	while (true)
	{
		std::cout << BOLD"~ "RESET;
		if (!std::getline(std::cin, input))
			return (1);
		i = 0;
		while (input[i])
		{	
			input[i] = std::toupper(input[i]);
			i++;
		}
		if (input == "ADD")
			phonebook.addContact(contact);
		else if (input == "SEARCH")
			phonebook.searchContact(contact);
		else if (input == "EXIT")
			return (0);
	}
}
