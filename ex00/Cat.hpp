#pragma once

#include "Animal.hpp"
#include <string>

class Cat: public Animal
{
public:
	Cat();
	Cat( Cat const & );
	~Cat();
	void makeSound() const;

};
