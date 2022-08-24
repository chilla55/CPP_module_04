/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:07:13 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 15:07:34 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{

private:

	static const int	numberOfIdeas = 100;

public:

	Brain( void );
	Brain( const Brain &src );
	~Brain( void );

	Brain	&operator=( const Brain &other );

	std::string		ideas[Brain::numberOfIdeas];

};

#endif
