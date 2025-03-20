/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: marvin <marvin@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/03 10:51:34 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/20 10:32:13 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iomanip"
#include "iostream"

#pragma once

class ClapTrap
{
	protected:
		std::string 	_name;
		unsigned int	_hit_points;
		unsigned int	_energy_points;
		unsigned int	_attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& claptrap);
		ClapTrap& operator=(const ClapTrap& claptrap);
		~ClapTrap();

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		bool energy();
		std::string get_name();
		unsigned int get_hit_points();
		unsigned int get_energy_points();
		unsigned int get_attack_damage();
		void		set_name(std::string n_name);
		void		set_hit_points(unsigned int n_hit_points);
		void		set_energy_points(unsigned int n_energy_points);
		void		set_attack_damage(unsigned int n_attack_damage);

};
