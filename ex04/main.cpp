/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:27:30 by pschemit          #+#    #+#             */
/*   Updated: 2023/04/16 16:07:26 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

std::string ft_replace(std::string line ,std::string s1 ,std::string s2)
{
	std::size_t pos;

	pos = line.find(s1, 0);
	while (pos != std::string::npos)
	{
		line.erase(pos, s1.length());
		line.insert(pos, s2);
		pos = line.find(s1, pos);
	}
    return(line);
}


int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "nb argument incorrect" << std::endl;
        return(0);
    }
    std::string     str = "";
    std::string     line;
    std::string     output_file = (std::string)av[1] + ".replace";
    char c;

    std::ifstream input_fs(av[1]);
    std::ofstream output_fs(output_file);

    while (input_fs.good() && output_fs.good())
    {
        std::getline(input_fs, line);
        output_fs << ft_replace(line , (std::string)av[2], (std::string)av[3]);
        if (input_fs.eof())
			break;
        output_fs << std::endl;
    }
    return (0);
}