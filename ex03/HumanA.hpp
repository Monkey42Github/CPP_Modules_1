/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:27:43 by pschemit          #+#    #+#             */
/*   Updated: 2023/04/15 14:27:43 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon&     _weapon;
		HumanA();

	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA();

		void    attack( void );
};