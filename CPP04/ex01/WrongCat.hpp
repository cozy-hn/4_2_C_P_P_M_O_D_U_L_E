#pragma once
#ifndef WrongCat_HPP
# define WrongCat_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& obj);
		~WrongCat();
		WrongCat&	operator=(const WrongCat& obj);
		void makeSound() const;
};

#endif

