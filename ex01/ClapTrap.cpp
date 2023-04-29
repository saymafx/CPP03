/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:56:51 by tidigov           #+#    #+#             */
/*   Updated: 2023/04/29 20:05:50 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout<<"Parametrical Constructor called" << std::endl;
    _Attack = 10;
    _Energy = 10;
    _Hit = 30;
}

ClapTrap::ClapTrap(std::string name): _Name(name)
{
    std::cout<<"Parametrical Constructor called" << std::endl;
    _Attack = 10;
    _Energy = 10;
    _Hit = 30;
}

ClapTrap::ClapTrap( ClapTrap const & src)
{
    std::cout<<"Copy Constructor called" << std::endl;
    _Attack = src._Attack;
    _Energy = src._Energy;
    _Hit = src._Hit;
    _Name = src._Name;
}
    
ClapTrap::~ClapTrap()
{
    std::cout<<_Name<<" : is destroyed" << std::endl;
}
////////////////////////////////////////////////////////////////////////////////
int	ClapTrap::getAttack(void) {
	return this->_Attack;
}

void	ClapTrap::setAttack(int i) {
	ClapTrap::_Attack = i;
}
////////////////////////////////////////////////////////////////////////////////
int	ClapTrap::getEnergy(void) {
	return this->_Energy;
}

void	ClapTrap::setEnergy(int i) {
	ClapTrap::_Energy = i;
}
////////////////////////////////////////////////////////////////////////////////
int	ClapTrap::getHit(void) {
	return this->_Hit;
}

void	ClapTrap::setHit(int i) {
	ClapTrap::_Hit = i;
}
////////////////////////////////////////////////////////////////////////////////
void    ClapTrap::attack(const std::string& target)
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
        std::cout << _Name << " as caused " << target << " to lose " << _Attack << " life points " << std::endl;
        return ;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << _Name << " took " << amount << " damage " << std::endl;
    setHit(getHit() - amount);
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << _Name << " healed himself " << amount << " life point " << std::endl;
    setEnergy(getEnergy() - 1);
    setHit(getHit() + amount);
}
