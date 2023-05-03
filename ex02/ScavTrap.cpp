/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:56:32 by tidigov           #+#    #+#             */
/*   Updated: 2023/05/03 16:47:06 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():   ClapTrap()
{
    std::cout<<"ScavTrap Parametrical Constructor called" << std::endl;
    _Attack = 20;
    _Energy = 50;
    _Hit = 100;
}

ScavTrap::ScavTrap( ScavTrap const & src)
{
    std::cout<<"ScavTrap Copy Constructor called" << std::endl;
    _Attack = src._Attack;
    _Energy = src._Energy;
    _Hit = src._Hit;
    _Name = src._Name;
    
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    std::cout<<"ScavTrap Parametrical Constructor called" << std::endl;
    _Attack = 20;
    _Energy = 50;
    _Hit = 100;
}
    
ScavTrap::~ScavTrap()
{
    std::cout<<_Name<<" Constructor: is destroyed" << std::endl;
}

ScavTrap &	ScavTrap::operator=(const ScavTrap& rhs)
{
	this->_Attack = rhs.getAttack();
	this->_Energy = rhs.getEnergy();
	this->_Hit = rhs.getHit();
	this->_Name = rhs.getName();
	return *this;
}

std::ostream &	operator<<(std::ostream &o, ScavTrap const & rhs){
	return o << rhs.getName();
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
        std::cout << this->_Name << " ScavTrap as caused " << target << " to lose " << _Attack << " life points " << std::endl;
        return ;
    }
}

void ScavTrap::guardGate()
{
    std::cout << _Name << " is now in Gate keeper mode" << std::endl;
}