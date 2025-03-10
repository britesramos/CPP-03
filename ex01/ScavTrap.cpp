/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: marvin <marvin@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/03 18:13:06 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/10 10:53:44 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout << "ScavTrap constructor called." << std::endl;
	set_hit_points(100);
	set_energy_points(50);
	set_attack_damage(20);
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap): ClapTrap(scavtrap){
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = scavtrap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap){
	std::cout << "ScavTrap copy assignment operator called." << std::endl;
	if (this != &scavtrap){
		//not sure how this works as it inherited it from ClapTrap.
	}
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called." << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now on Gate keeper mode." << std::endl;
}
