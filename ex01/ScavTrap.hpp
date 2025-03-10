/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: marvin <marvin@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/03 18:13:08 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/10 18:52:08 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#pragma once

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& scavtrap);
		ScavTrap& operator=(const ScavTrap& scavtrap);
		~ScavTrap();

		void guardGate();
		void attack(const std::string& target)override;
};