/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:55:30 by tidigov           #+#    #+#             */
/*   Updated: 2023/05/02 09:56:26 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

// int main(void)
// {
//     ClapTrap    Attack("Sayma");
//     ClapTrap    Defender("Tim");

//     ScavTrap    Attackk("Malik");
//     ScavTrap    Defenderr("Zak");

//     Attack.attack("Tim");
//     Defender.takeDamage(10);
//     Defender.beRepaired(5);

//     Attack.attack("Tim");
//     Defender.takeDamage(10);
//     Defender.beRepaired(5);

    
//     std::cout << Attack.getAttack() << " " << Attack.getEnergy() << " " << Attack.getHit() << std::endl;
//     std::cout << Defender.getAttack() << " " << Defender.getEnergy() << " " << Defender.getHit() << std::endl;

//     std::cout << Attackk.getAttack() << " " << Attackk.getEnergy() << " " << Attackk.getHit() << std::endl;
//     std::cout << Defenderr.getAttack() << " " << Defenderr.getEnergy() << " " << Defenderr.getHit() << std::endl;
// }

int main()
{
    ClapTrap        sayma("tim");
	ClapTrap        tod(sayma);
	sayma.attack("a skinhead named tod");
	tod.takeDamage(5);
	tod.beRepaired(10);
	std::cout << std::endl;

	ScavTrap        malik("malik");
	ScavTrap        tim("tim");
	ScavTrap		ted;
	ted = malik;
	malik.attack("an Arch Guardian");
	tim.guardGate();
	malik.takeDamage(5);
	malik.beRepaired(10);

	for(int i = 0;i<5;i++){
		ted.attack("tim");
		tim.takeDamage(20);
	}
	std::cout << std::endl;

	return 0;
}