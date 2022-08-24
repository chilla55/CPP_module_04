/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:28:06 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 17:31:44 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character( void ): _name("")
{
	for (int i = 0; i < Character::_inventory_size; i++)
		this->_inventory[i] = NULL;
	std::cout << "Default constructor for Character called" << std::endl;
	return;
}

Character::Character( const std::string &name )
{
	for (int i = 0; i < Character::_inventory_size; i++)
		this->_inventory[i] = NULL;
	this->_name = name;
	std::cout << "Name constructor for Character called" << std::endl;
	return;
}

Character::Character( Character const & src )
{
	std::cout << "Copy constructor for Character called" << std::endl;
	*this = src;
	return;
}

Character::~Character( void )
{
	std::cout << "Destructor for Character called" << std::endl;
	for (int i = 0; i < Character::_inventory_size; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	return;
}

Character &	Character::operator=( Character const & rhs )
{
	for (int i = 0; i < Character::_inventory_size; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = rhs._inventory[i];
	}
	this->_name = rhs.getName();
	std::cout << "Assignement operator for Character called" << std::endl;
	return *this;
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < Character::_inventory_size; i++)
	{
		if (!this->_inventory[i])
		{
			this->_inventory[i] = m;
			std::cout << "Equipped a " << m->getType() << " on Slot " << i << std::endl;
			return;
		}
	}
	std::cout << "Couldn't equip a " << m->getType() << ", no more space"
			<< std::endl;
	delete m;
}

void	Character::unequip(int idx)
{
	delete this->_inventory[idx];
	this->_inventory[idx] = 0x0;
}

void	Character::use(int idx, ICharacter& target)
{
	this->_inventory[idx]->use(target);
	this->unequip(idx);
}

void	Character::printInventory( void ) const
{
	for (int i = 0; i < Character::_inventory_size; i++)
	{
		if (this->_inventory[i])
			std::cout << i << ": " << this->_inventory[i] << std::endl;
		else
			std::cout << i << ": Empty" << std::endl;
	}
}
