#pragma once

#include "WrongAnimal.hpp"
#include <string>

class WrongCat: public WrongAnimal
{
public:
	WrongCat( std::string const & name = "cat" );
	WrongCat( WrongCat const & );
	~WrongCat();
	void			makeSound() const;

};
