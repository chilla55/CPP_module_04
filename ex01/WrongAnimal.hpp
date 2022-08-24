/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 11:02:14 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 11:48:17 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{

public:

	WrongAnimal( void );
	WrongAnimal( const WrongAnimal &src );
	virtual ~WrongAnimal( void );

	WrongAnimal	&operator=( const WrongAnimal &other );

	void	makeSound( void ) const ;
	
	const std::string	&getType( void ) const ;

protected:

	std::string type;

private:

};

std::ostream	&operator<<( std::ostream &ostream, const WrongAnimal &instance );

#endif
