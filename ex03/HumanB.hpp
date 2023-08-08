/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:27:47 by pschemit          #+#    #+#             */
/*   Updated: 2023/04/15 14:27:48 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon		*_weapon;

	public:
		HumanB( std::string name );
		~HumanB();

		void    attack( void );
		void    setWeapon( Weapon& weapon );
};