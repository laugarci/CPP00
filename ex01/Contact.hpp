/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:01:02 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/13 13:54:50 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <iomanip>
#define BOLD "\x1B[1m"
#define RESET "\x1B[0m"

class Contact {
	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		std::string		phoneNumber;
		std::string		darkestSecret;
	public:
		Contact();
		~Contact();
		void			add_new(Contact *contact);
		std::string		add_info(std::string str);
		std::string 	get_number(void);
		void  			printContacts(Contact *contact, unsigned int index);
		int 			chooseIndex(unsigned int i);
		void			printSelect(Contact *contact);
};

#endif
