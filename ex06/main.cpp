/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:27:06 by pschemit          #+#    #+#             */
/*   Updated: 2023/04/15 14:44:08 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	get_level(char *command)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
		if (levels[i] == command)
			return (i);
	return (-1);
}

void	HarlFilter(char *command, Harl & h)
{
	switch (get_level(command))
	{
		case 0:
			h.complain("DEBUG");
		case 1:
			h.complain("INFO");
		case 2:
			h.complain("WARNING");
		case 3:
			h.complain("ERROR");
			break ;
		default:
			std::cout << "Probably complaining about insignificant problems" << std::endl;
	}
}

int	main(int argc, char **argv)
{
	Harl h;

	if (argc != 2)
		std::cout << "Probably complaining about insignificant problems" << std::endl;
	else
		HarlFilter(argv[1], h);
	return (0);
}
