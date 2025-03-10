/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/03 10:51:24 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/10 10:56:21 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
	// {
	// 	ClapTrap A("Clap Trap A");

	// 	std::cout << A.get_name() << " energy points: " << A.get_energy_points() << std::endl;
	// 	std::cout << A.get_name() << " hit points: " << A.get_hit_points() << std::endl;
	// 	std::cout << A.get_name() << " attack damage: " << A.get_attack_damage() << std::endl;

	// 	A.beRepaired(10);
	// 	std::cout << A.get_name() << " energy points: " << A.get_energy_points() << std::endl;
	// 	std::cout << A.get_name() << " hit points: " << A.get_hit_points() << std::endl;
	// 	std::cout << A.get_name() << " attack damage: " << A.get_attack_damage() << std::endl;

	// 	A.attack("Trap B");
		
	// 	A.takeDamage(20);
	// 	std::cout << A.get_name() << " energy points: " << A.get_energy_points() << std::endl;
	// 	std::cout << A.get_name() << " hit points: " << A.get_hit_points() << std::endl;
	// 	std::cout << A.get_name() << " attack damage: " << A.get_attack_damage() << std::endl;

	// 	A.attack("Trap C");
	// }
	{
		ScavTrap B ("Scav Trap B");

		std::cout << B.get_name() << " energy points: " << B.get_energy_points() << std::endl;
		std::cout << B.get_name() << " hit points: " << B.get_hit_points() << std::endl;
		std::cout << B.get_name() << " attack damage: " << B.get_attack_damage() << std::endl;

		B.beRepaired(10);
		std::cout << B.get_name() << " energy points: " << B.get_energy_points() << std::endl;
		std::cout << B.get_name() << " hit points: " << B.get_hit_points() << std::endl;
		std::cout << B.get_name() << " attack damage: " << B.get_attack_damage() << std::endl;

		B.attack("Trap B");
		
		B.takeDamage(110);
		std::cout << B.get_name() << " energy points: " << B.get_energy_points() << std::endl;
		std::cout << B.get_name() << " hit points: " << B.get_hit_points() << std::endl;
		std::cout << B.get_name() << " attack damage: " << B.get_attack_damage() << std::endl;

		B.attack("Trap C");
	}
}