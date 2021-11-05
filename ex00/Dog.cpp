#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	type = "Dog";
	std::cout << type << ".Dog()" << std::endl;
}
Dog::Dog( Dog const & )
{
	type = "Dog";
	std::cout << type << ".Dog( Dog )" << std::endl;
}
Dog::~Dog()
{	std::cout << type << ".~Dog()" << std::endl;
}

void			Dog::makeSound() const
{	std::cout << "woof-woof" << std::endl;
}
