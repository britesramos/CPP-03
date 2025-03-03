/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/03 10:51:34 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/03 17:53:52 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iomanip"
#include "iostream"

class ClapTrap
{
	private:
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
};
