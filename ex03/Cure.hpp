/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:25:15 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 15:27:13 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{

public:

	Cure( void );
	Cure( const Cure &src );
	~Cure( void );

	Cure	&operator=( const Cure &other );

	virtual AMateria	*clone( void ) const ;
	virtual void		use(ICharacter& target);

private:

};

#endif
