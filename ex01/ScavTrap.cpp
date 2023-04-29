/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:56:32 by tidigov           #+#    #+#             */
/*   Updated: 2023/04/29 17:11:18 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout<<"ScavTrap Parametrical Constructor called" << std::endl;
    _Attack = 20;
    _Energy = 50;
    _Hit = 100;
}

ScavTrap::ScavTrap( ScavTrap const & src)
{
    std::cout<<"Copy Constructor called" << std::endl;
    _Attack = src._Attack;
    _Energy = src._Energy;
    _Hit = src._Hit;
    _Name = src._Name;
}

ScavTrap::ScavTrap(std::string name): _Name(name)
{
    std::cout<<"Parametrical Constructor called" << std::endl;
    _Attack = 10;
    _Energy = 10;
    _Hit = 30;
}
    
ScavTrap::~ScavTrap()
{
    std::cout<<_Name<<" : is destroyed" << std::endl;
}

void    ScavTrap::attack(const std::string& target)
{
    if (getEnergy() < 1)
    {
        std::cout << "Out of energy !" << std::endl;
        return ;
    }
    else if (getHit() < 1)
    {
        std::cout << "No hp left !" << std::endl;
        return ;
    }
    else
    {
        setEnergy(getEnergy() - 1);
        std::cout << this->_Name << "ScavTrap as caused " << target << " to lose " << _Attack << " life points " << std::endl;
        return ;
    }
}