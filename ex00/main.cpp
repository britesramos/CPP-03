/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/03 10:51:24 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/20 11:15:18 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(){
	ClapTrap A("Trap A");

	std::cout << A.get_name() << " energy points: " << A.get_energy_points() << std::endl;
	std::cout << A.get_name() << " hit points: " << A.get_hit_points() << std::endl;
	std::cout << A.get_name() << " attack damage: " << A.get_attack_damage() << std::endl;

	A.beRepaired(10);
	std::cout << A.get_name() << " energy points: " << A.get_energy_points() << std::endl;
	std::cout << A.get_name() << " hit points: " << A.get_hit_points() << std::endl;
	std::cout << A.get_name() << " attack damage: " << A.get_attack_damage() << std::endl;

	A.attack("Trap B");
	
	A.takeDamage(21);
	std::cout << A.get_name() << " energy points: " << A.get_energy_points() << std::endl;
	std::cout << A.get_name() << " hit points: " << A.get_hit_points() << std::endl;
	std::cout << A.get_name() << " attack damage: " << A.get_attack_damage() << std::endl;

	A.attack("Trap C");
}