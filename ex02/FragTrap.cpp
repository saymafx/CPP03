/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:04:55 by tidigov           #+#    #+#             */
/*   Updated: 2023/05/02 11:14:44 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():   ClapTrap()
{
    std::cout<<"FragTrap: Parametrical Constructor called" << std::endl;
    _Attack = 30;
    _Energy = 100;
    _Hit = 100;
}

FragTrap::FragTrap( FragTrap const & src)
{
    std::cout<<"Copy Constructor called" << std::endl;
    _Attack = src._Attack;
    _Energy = src._Energy;
    _Hit = src._Hit;
    _Name = src._Name;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    std::cout<<"FragTrap: Parametrical Constructor called" << std::endl;
    _Attack = 30;
    _Energy = 100;
    _Hit = 100;
}
    
FragTrap::~FragTrap()
{
    std::cout<<_Name<<" : is destroyed" << std::endl;
}

FragTrap &	FragTrap::operator=(const FragTrap& rhs)
{
	this->_Attack = rhs.getAttack();
	this->_Energy = rhs.getEnergy();
	this->_Hit = rhs.getHit();
	this->_Name = rhs.getName();
	return *this;
}

std::ostream &	operator<<(std::ostream &o, FragTrap const & rhs){
	return o << rhs.getName();
}

void    FragTrap::attack(const std::string& target)
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

void FragTrap::highFivesGuys(void)
{
    
}