/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:52:31 by pschemit          #+#    #+#             */
/*   Updated: 2023/04/15 13:58:27 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"


Zombie::Zombie()
{
    std::cout << "ONE ZOMBIE IS BORN" << std::endl;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " IS DEAD" << std::endl;
    return ;
}

void  Zombie::get_name(std::string string)
{
    this->_name = string;
}


void Zombie::announce( void )
{
    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* newZombie( )
{
    return(new Zombie());
}