/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:54:12 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/12 11:15:35 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{

	std::string	input;
	PhoneBook	phonebook;
	Contact		contact;
	int i;

	std::cout << "Try: 'ADD', 'SEARCH', 'EXIT'." << std::endl;
	while (true)
	{
		std::cout << "~";
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
		else if (input == "EXIT")
			return (0);
	}
}
