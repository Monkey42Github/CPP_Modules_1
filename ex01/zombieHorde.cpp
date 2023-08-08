/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:52:29 by pschemit          #+#    #+#             */
/*   Updated: 2023/04/15 13:55:24 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"


Zombie* zombieHorde( int N, std::string name )
{

	if (N > 0)
	{
		Zombie* zombie = new Zombie[N];
		for (int i = 0; i < N; i++)
		{
			zombie[i].get_name(name);
			zombie->announce();
		}

		delete [] zombie;
		return(zombie);
	}
	else
	{
		Zombie* zombie = new Zombie[0];
		return(zombie);
	}
		
}
