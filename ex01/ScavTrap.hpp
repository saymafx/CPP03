/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:56:40 by tidigov           #+#    #+#             */
/*   Updated: 2023/05/02 09:24:52 by tidigov          ###   ########.fr       */
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
    void guardGate();
};

std::ostream &	operator<<(std::ostream &o, ScavTrap const & rhs);

#endif