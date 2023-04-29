/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:55:30 by tidigov           #+#    #+#             */
/*   Updated: 2023/04/19 15:54:05 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    Attack("Sayma");
    ClapTrap    Defender("Tim");

    Attack.attack("Tim");
    Defender.takeDamage(10);
    Defender.beRepaired(5);
    // std::cout << Attack.getAttack() << " " << Attack.getEnergy() << " " << Attack.getHit() << std::endl;
    // std::cout << Defender.getAttack() << " " << Defender.getEnergy() << " " << Defender.getHit() << std::endl;
}