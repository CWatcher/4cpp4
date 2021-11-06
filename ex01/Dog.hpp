#pragma once

#include "Animal.hpp"
#include <string>

class Dog: public Animal
{
public:
	Dog();
	Dog( Dog const & );
	~Dog();
	void makeSound() const;

};
