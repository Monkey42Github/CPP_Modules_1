/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:27:45 by pschemit          #+#    #+#             */
/*   Updated: 2023/04/15 14:27:45 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name)
{
    this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void    HumanB::setWeapon( Weapon& weapon ) {
    this->_weapon = &weapon;
}

void    HumanB::attack( void )
{
    if (this->_weapon != NULL && this->_weapon->getType() != "")
        std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
	else
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
}