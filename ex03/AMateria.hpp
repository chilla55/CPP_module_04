/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:22:35 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 15:27:27 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{

protected:

	std::string	_type;

public:

	AMateria( const std::string &type );
	virtual	~AMateria(){}

	const std::string	&getType( void ) const ;
	virtual AMateria	*clone( void ) const = 0;
	virtual void		use( ICharacter& target ) = 0;

};

#endif
