/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:26:38 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 15:26:39 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource: public IMateriaSource
{

public:

	MateriaSource( void );
	MateriaSource( const MateriaSource &src );
	~MateriaSource( void );

	MateriaSource	&operator=( const MateriaSource &other );

	virtual void		learnMateria(AMateria *materia_to_learn);
	virtual AMateria	*createMateria(std::string const & type);

	void			printMaterias( void ) const ;

private:

	const static int	_materias_size = 4;

	AMateria		*_materias[MateriaSource::_materias_size];
	int			_number_learned;

};

#endif
