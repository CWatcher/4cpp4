#pragma once

#include "WrongAnimal.hpp"
#include <string>

class WrongCat: public WrongAnimal
{
public:
	WrongCat();
	WrongCat( WrongCat const & );
	~WrongCat();
	void makeSound() const;

};
