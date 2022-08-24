/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:26:18 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 15:26:19 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{

public:

	Ice( void );
	Ice( const Ice &src );
	~Ice( void );

	Ice		&operator=( const Ice &other );

	virtual AMateria	*clone( void ) const ;
	virtual void		use(ICharacter& target);

private:

};

#endif
