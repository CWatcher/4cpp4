#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	_type = "Cat";
	std::cout << _type << ".Cat()" << std::endl;
}
Cat::Cat( Cat const & cat):
	Animal ( cat )
{
	_type = "Cat";
	std::cout << _type << ".Cat( Cat )" << std::endl;
}
Cat::~Cat()
{	std::cout << _type << ".~Cat()" << std::endl;
}

void			Cat::makeSound() const
{	std::cout << "meow-meow" << std::endl;
}
