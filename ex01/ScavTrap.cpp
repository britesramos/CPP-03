/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: marvin <marvin@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/03 18:13:06 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/13 18:27:12 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap(){
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name){
	std::cout << "ScavTrap constructor called." << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap): ClapTrap(scavtrap){
	std::cout << "ScavTrap copy constructor called." << std::endl;
	*this = scavtrap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scavtrap){
	std::cout << "ScavTrap copy assignment operator called." << std::endl;
	if (this != &scavtrap){
		ClapTrap::operator=(scavtrap);
	}
	//If what we are trying to copy is already the same memory address just return the same value.
	return (*this);
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called." << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if(!energy()){
		std::cout << "No energy left to attack: " << target << std::endl;
		return ;
	}
	this->_energy_points--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now on Gate keeper mode." << std::endl;
}
