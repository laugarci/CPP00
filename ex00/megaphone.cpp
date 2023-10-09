/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:57:21 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/09 11:50:02 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac, char **av)
{
	size_t	i;

	i = 0;
	if (ac == 2)
	{
		while (i < std::strlen(av[1]))
		{
			std::cout << (char)toupper(av[1][i]);
			i++;
		}
	}
	return (0);
}
