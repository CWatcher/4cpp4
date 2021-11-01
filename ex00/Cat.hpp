#pragma once

#include "Animal.hpp"
#include <string>

class Cat: public Animal
{
public:
	Cat( std::string const & name = "cat" );
	Cat( Cat const & );
	~Cat();
};
