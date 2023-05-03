/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tidigov <tidigov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:07:01 by tidigov           #+#    #+#             */
/*   Updated: 2023/05/03 15:06:21 by tidigov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    
private:

public:
    FragTrap();
    FragTrap( FragTrap const & src);
    FragTrap(std::string name);
    
    ~FragTrap();

    void highFivesGuys(void);
};

std::ostream &	operator<<(std::ostream &o, FragTrap const & rhs);

#endif