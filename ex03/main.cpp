/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrotzsc <agrotzsc@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:30:35 by agrotzsc          #+#    #+#             */
/*   Updated: 2022/08/24 17:40:49 by agrotzsc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	me->printInventory();
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->printInventory();
	ICharacter* bob = new Character("bob");
	me->printInventory();
	me->use(0, *bob);
	me->printInventory();
	tmp = src->createMateria("ice");
	me->equip(tmp);
	me->printInventory();
	me->use(1, *bob);
	me->printInventory();

	delete bob;
	delete me;
	delete src;
	return 0;
}
