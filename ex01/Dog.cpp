#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	_type = "Dog";
	std::cout << _type << ".Dog()" << std::endl;
}
Dog::Dog( Dog const & dog ):
	Animal( dog )
{
	_type = "Dog";
	std::cout << _type << ".Dog( Dog )" << std::endl;
}
Dog::~Dog()
{	std::cout << _type << ".~Dog()" << std::endl;
}

void			Dog::makeSound() const
{	std::cout << "woof-woof" << std::endl;
}
