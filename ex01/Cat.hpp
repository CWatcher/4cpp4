#pragma once

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat: public Animal
{
public:
	Cat();
	Cat( Cat const & );
	~Cat();
	Cat const & operator=( Cat const & );
	void        makeSound() const;
	void        grow();
	void        showIdeas();
private:
	Brain*	_pBrain;
};
