/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:54:12 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/19 15:27:46 by laugarci         ###   ########.fr       */
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

	std::cout << "\x1B[1mTry: 'ADD', 'SEARCH', 'EXIT'." << std::endl;
	std::cout << "\x1B[0m";
	while (true)
	{
		std::cout << "~ ";
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

bool esStringDeCaracteres(const std::string &cadena) {
    for (size_t i = 0; i < cadena.length(); i++) {
        if (!isalpha(cadena[i])) {
            return false;
        }
    }
    return true;
}

