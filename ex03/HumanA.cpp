/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:27:40 by pschemit          #+#    #+#             */
/*   Updated: 2023/04/15 14:27:41 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon) {}

HumanA::~HumanA()
{
}

void    HumanA::attack( void ) 
{
    if (this->_weapon.getType() != "")
        std::cout << _name << " attacks with their " << this->_weapon.getType() << std::endl;
    else
        std::cout << _name << " doesn't have a weapon to attack." << std::endl;
}
