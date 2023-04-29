/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:57:18 by tidigov           #+#    #+#             */
/*   Updated: 2023/04/29 16:20:49 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string.h>

class ClapTrap {
    
protected:

    int _Attack;
    int _Energy;
    int _Hit;
    std::string  _Name;
////////////////////////////////////////////////////////////////////////////////
public:
    ClapTrap();
    ClapTrap( ClapTrap const & src);
    ClapTrap(std::string name);
    
    ~ClapTrap();

    ClapTrap & operator=(const ClapTrap& rhs);

    void    attack(const std::string& target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
////////////////////////////////////////////////////////////////////////////////
    int	getAttack(void);
    void	setAttack(int i);
////////////////////////////////////////////////////////////////////////////////
    int	getEnergy(void);
    void	setEnergy(int i);
////////////////////////////////////////////////////////////////////////////////
    int	getHit(void);
    void	setHit(int i);
};

std::ostream &	operator<<(std::ostream &o, ClapTrap const & rhs);

#endif