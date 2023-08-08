/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 13:22:44 by pschemit          #+#    #+#             */
/*   Updated: 2023/04/15 14:37:05 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<iostream>
#include<sstream>
#include<cctype>

int main(void)
{
	std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;
    std::cout << "Pointeur string    : " <<&string << std::endl;
    std::cout << "Pointeur stringPTR : " <<stringPTR << std::endl;
    std::cout << "Pointeur stringREF : " <<&stringREF << std::endl;
    std::cout << "Valeur string    : " <<string << std::endl;
    std::cout << "Valeur stringPTR : " <<*stringPTR << std::endl;
    std::cout << "Valeur stringREF : " <<stringREF << std::endl;
}
