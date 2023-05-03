/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:04:55 by tidigov           #+#    #+#             */
/*   Updated: 2023/05/03 16:59:46 by tidigov          ###   ########.fr       */
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
    std::cout<< _Name <<" Constructor: is destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap asked for high fives" << std::endl;
}