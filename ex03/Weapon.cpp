/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:27:53 by pschemit          #+#    #+#             */
/*   Updated: 2023/04/15 14:27:54 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type)
{
    this->setType(type);
}

Weapon::~Weapon()
{
}

const  std::string& Weapon::getType( void )
{
    return this->_type;
}

void	Weapon::setType( std::string newType )
{
    this->_type = newType;
}
