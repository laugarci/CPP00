/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:57:21 by laugarci          #+#    #+#             */
/*   Updated: 2023/11/09 14:08:31 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (int ac, char **av)
{
	size_t	i;
	int		j;

	j = 1;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (ac > 1)
	{
		while(av[j])
		{
			i = 0;
			while (i < std::strlen(av[j]))
			{
				std::cout << (char)toupper(av[j][i]);
				i++;
			}
			j++;
		}
		std::cout << std::endl;
	}
	return (0);
}
