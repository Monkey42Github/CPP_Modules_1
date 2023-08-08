/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:46:45 by pschemit          #+#    #+#             */
/*   Updated: 2023/04/01 11:48:15 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

void randomChump( std::string name )
{
    Zombie *zombie = newZombie(name);
    zombie->announce();
    delete zombie;
    return;
}
