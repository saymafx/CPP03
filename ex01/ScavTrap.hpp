/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:56:40 by tidigov           #+#    #+#             */
/*   Updated: 2023/04/19 16:21:11 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    
private:

public:
    ScavTrap();
    ScavTrap( ScavTrap const & src);
    ScavTrap(std::string name);
    
    ~ScavTrap();

    ScavTrap & operator=(const ScavTrap& rhs);

    void    attack(const std::string& target);
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

#endif