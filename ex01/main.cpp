/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/03 10:51:24 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/13 18:21:28 by sramos        ########   odam.nl         */
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

	// 	std::cout << "-----------------------------------------------------" << std::endl;
	// 	A.beRepaired(10);
	// 	std::cout << "-----------------------------------------------------" << std::endl;

	// 	std::cout << A.get_name() << " energy points: " << A.get_energy_points() << std::endl;
	// 	std::cout << A.get_name() << " hit points: " << A.get_hit_points() << std::endl;
	// 	std::cout << A.get_name() << " attack damage: " << A.get_attack_damage() << std::endl;

	// 	std::cout << "-----------------------------------------------------" << std::endl;
	// 	A.attack("Trap B");
	// 	std::cout << "-----------------------------------------------------" << std::endl;
	// 	A.takeDamage(20);
	// 	std::cout << "-----------------------------------------------------" << std::endl;

	// 	std::cout << A.get_name() << " energy points: " << A.get_energy_points() << std::endl;
	// 	std::cout << A.get_name() << " hit points: " << A.get_hit_points() << std::endl;
	// 	std::cout << A.get_name() << " attack damage: " << A.get_attack_damage() << std::endl;

	// 	std::cout << "-----------------------------------------------------" << std::endl;
	// 	A.attack("Trap C");
	// }
	// std::cout << "\n_______________________________________________________\n" << std::endl;
	{
		ScavTrap B ("Bob");

		std::cout << B.get_name() << " energy points: " << B.get_energy_points() << std::endl;
		std::cout << B.get_name() << " hit points: " << B.get_hit_points() << std::endl;
		std::cout << B.get_name() << " attack damage: " << B.get_attack_damage() << std::endl;

		std::cout << "-----------------------------------------------------" << std::endl;
		B.beRepaired(10);
		std::cout << "-----------------------------------------------------" << std::endl;

		std::cout << B.get_name() << " energy points: " << B.get_energy_points() << std::endl;
		std::cout << B.get_name() << " hit points: " << B.get_hit_points() << std::endl;
		std::cout << B.get_name() << " attack damage: " << B.get_attack_damage() << std::endl;

		std::cout << "-----------------------------------------------------" << std::endl;
		B.attack("Maria");
		std::cout << "-----------------------------------------------------" << std::endl;
		B.guardGate();
		std::cout << "-----------------------------------------------------" << std::endl;
		B.takeDamage(110);
		std::cout << "-----------------------------------------------------" << std::endl;

		std::cout << B.get_name() << " energy points: " << B.get_energy_points() << std::endl;
		std::cout << B.get_name() << " hit points: " << B.get_hit_points() << std::endl;
		std::cout << B.get_name() << " attack damage: " << B.get_attack_damage() << std::endl;

		std::cout << "-----------------------------------------------------" << std::endl;
		B.attack("Trap C");
	}
}