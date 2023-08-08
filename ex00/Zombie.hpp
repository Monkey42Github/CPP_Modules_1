/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:44:39 by pschemit          #+#    #+#             */
/*   Updated: 2023/04/15 14:28:21 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include<stdio.h>
#include<iostream>
#include<sstream>
#include<cctype>


class Zombie
{
    public:
        Zombie(std::string name);
        ~Zombie(void);
        void announce( void );
        void get_name(std::string string);

    private :
        std::string _name;

};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

#endif

