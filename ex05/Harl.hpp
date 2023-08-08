/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 14:27:23 by pschemit          #+#    #+#             */
/*   Updated: 2023/04/15 14:27:23 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>

class	Harl
{
	public:
		Harl(void);
		~Harl(void);
		void complain( std::string level );
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif