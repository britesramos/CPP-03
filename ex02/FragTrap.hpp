/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 18:01:55 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/10 18:12:12 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#pragma once

class FragTrap: public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string _name);
		FragTrap(const FragTrap& fragtrap);
		FragTrap& operator=(const FragTrap& fragtrap);
		~FragTrap();
		void highFiveGuys(void);
};