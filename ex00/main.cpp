/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pschemit <pschemit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 11:39:57 by pschemit          #+#    #+#             */
/*   Updated: 2023/04/15 14:30:33 by pschemit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"


int main(void)
{
    Zombie *zombie = newZombie("Monkey");
    delete zombie;

    randomChump("Monkey");
    return (0);
}
