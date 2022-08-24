/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:27:46 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 15:27:46 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria( const std::string &type ): _type(type)
{
	std::cout << "String constructor for AMateria called" << std::endl;
	return;
}

const std::string	&AMateria::getType( void ) const
{
	return this->_type;
}
