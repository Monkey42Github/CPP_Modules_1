/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:44:37 by pschemit          #+#    #+#             */
/*   Updated: 2023/04/01 13:14:15 by pschemit         ###   ########.fr       */
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
        Zombie();
        ~Zombie(void);
        void announce( void );
        void get_name(std::string string);

    private :
        std::string _name;

};

Zombie* newZombie();
Zombie* zombieHorde( int N, std::string name );


#endif