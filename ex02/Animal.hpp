/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 10:59:46 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 15:16:13 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal
{

public:

	//Animal( void );
	//Animal( const Animal &src );
	virtual ~Animal( void );

	virtual Animal		&operator=( const Animal &other );

	virtual void		makeSound( void ) const ;
	
	const std::string	&getType( void ) const ;

	virtual Brain		*getBrain( void ) const = 0;

protected:

	std::string type;

private:

};

std::ostream	&operator<<( std::ostream &ostream, const Animal &instance );

#endif
