/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: marvin <marvin@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/03 18:13:06 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/03 22:10:06 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout << "ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap){
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
