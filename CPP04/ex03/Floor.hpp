#pragma once
#ifndef FLOOR_HPP
# define FLOOR_HPP

#include "AMateria.hpp"

class Floor
{
	public:
		Floor();
		Floor(const Floor& obj);
		~Floor();
		Floor&	operator=(const Floor& obj);
		void	dropMateria(AMateria* m);

	private:
		AMateria*	_inventory[30];
		int			_count;

};

#endif
