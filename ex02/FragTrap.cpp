/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sramos <sramos@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/03/10 18:03:52 by sramos        #+#    #+#                 */
/*   Updated: 2025/03/10 18:13:10 by sramos        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap(){
	std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string _name): ClapTrap(_name){
	std::cout << "FragTrap constructor called." << std::endl;
	set_hit_points(100);
	set_energy_points(100);
	set_attack_damage(30);
}

FragTrap::FragTrap(const FragTrap& fragtrap): ClapTrap(fragtrap){
	std::cout << "FragTrap copy constructor called." << std::endl;
	*this = fragtrap;
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap){
	std::cout << "FragTrap copy assignment operator called." << std::endl;
	if (this != &fragtrap){
		//not sure how this works as it inherited it from ClapTrap.
	}
	return (*this);
}

FragTrap::~FragTrap(){
	std::cout << "Fragtrap destructor called." << std::endl;
}

void FragTrap::highFiveGuys(void){
	std::cout << "Positive high five request!" << std::endl;
}