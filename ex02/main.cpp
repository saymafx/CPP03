/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:55:30 by tidigov           #+#    #+#             */
/*   Updated: 2023/05/03 16:47:47 by tidigov          ###   ########.fr       */
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

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main()
{
    ClapTrap	tim("Tim");
	ClapTrap	sayma("Sayma");
	
	tim.attack("sayma");
	sayma.takeDamage(sayma.getAttack());
	sayma.beRepaired(10);
	std::cout << std::endl;


	ScavTrap	malik("Malik");
	ScavTrap	test(malik);
	ScavTrap	say("Say");
	ScavTrap	ted;
	std::cout << std::endl;
	
	ted = malik;
	malik.attack("Say");
	say.guardGate();
	say.attack("Malik");
	malik.takeDamage(malik.getAttack());
	malik.beRepaired(10);
	std::cout << std::endl;
	
	
	FragTrap	test1;
	test1.highFivesGuys();
	std::cout << std::endl;

	return 0;
}