/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:47:08 by pschemit          #+#    #+#             */
/*   Updated: 2023/04/01 11:47:33 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

Zombie::Zombie(std::string name)
{
    get_name(name);
    std::cout << this->_name << " IS BORN" << std::endl;
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
