/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: marvin <marvin@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/03 10:51:54 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/03 21:49:28 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name(""), _hit_points(0), _energy_points(0), _attack_damage(0){
	std::cout << "ClapTrap default constructor." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name){
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap){
	*this = claptrap;
	std::cout << "ClapTrap copy constructor called." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap){
	std::cout << "ClapTrap copy assignment operator called." << std::endl;
	if (this != &claptrap){
		this->_name = claptrap._name;
		this->_hit_points = claptrap._hit_points;
		this->_energy_points = claptrap._energy_points;
		this->_attack_damage = claptrap._attack_damage;
	}
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap destructor called." << std::endl;
}

bool	ClapTrap::energy(){
	if (this->_hit_points == 0 || this->_energy_points == 0){
		return (false);
	}
	else
		return (true);
}

void ClapTrap::attack(const std::string& target){
	if (!energy()){
		std::cout << "No energy left to attack: " << target << std::endl;
		return ;
	}
	this->_energy_points--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (!energy())
		return ;
	this->_energy_points--;
	this->_hit_points = this->_hit_points - amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (!energy())
		return ;
	this->_energy_points--;
	this->_hit_points = this->_hit_points + amount;
	std::cout << "ClapTrap " << this->_name << " has been repaired with: " << amount << " points." << std::endl;
}

std::string ClapTrap::get_name(){
	return(this->_name);
}

unsigned int ClapTrap::get_hit_points(){
	return (this->_hit_points);
}

unsigned int ClapTrap::get_energy_points(){
	return (this->_energy_points);
}

unsigned int ClapTrap::get_attack_damage(){
	return (this->_attack_damage);
}

void	ClapTrap::set_name(std::string n_name){
	this->_name = n_name;
}

void	ClapTrap::set_hit_points(unsigned int n_hit_points){
	this->_hit_points = n_hit_points;
}

void	ClapTrap::set_energy_points(unsigned int n_energy_points){
	this->_energy_points = n_energy_points;
}

void	ClapTrap::set_attack_damage(unsigned int n_attack_damage){
	this->_attack_damage = n_attack_damage;
}
