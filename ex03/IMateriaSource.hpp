/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:26:03 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 15:26:04 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{

public:

	virtual ~IMateriaSource() {}
	virtual void		learnMateria(AMateria *materia_to_learn) = 0;
	virtual AMateria	*createMateria(std::string const & type) = 0;

};

#endif
