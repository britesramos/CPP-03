/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 18:03:52 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/13 18:26:50 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
	std::cout << "FragTrap default constructor called." << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(std::string _name): ClapTrap(_name){
	std::cout << "FragTrap constructor called." << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap& fragtrap): ClapTrap(fragtrap){
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = fragtrap;
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap){
	std::cout << "FragTrap copy assignment operator called." << std::endl;
	if (this != &fragtrap){
		ClapTrap::operator=(fragtrap);
	}
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "Fragtrap destructor called." << std::endl;
}

void FragTrap::attack(const std::string& target){
	if(!energy()){
		std::cout << "No energy left to attack: " << target << std::endl;
		return ;
	}
	this->_energy_points--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void FragTrap::highFiveGuys(void){
	std::cout << "Positive high five request!" << std::endl;
}