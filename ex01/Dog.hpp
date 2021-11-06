#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog: public Animal
{
public:
	Dog();
	Dog( Dog const & );
	~Dog();
	Dog const & operator=( Dog const & );
	void        makeSound() const;
	void        grow();
	void        showIdeas();
private:
	Brain*	_pBrain;
};
