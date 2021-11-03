#include "Cat.hpp"
#include <iostream>

Cat::Cat( std::string const & name ):
	Animal( name )
{
	std::cout << "Cat( name = " << name << " )" << std::endl;
	_type = "Cat";
}
Cat::Cat( Cat const & cat )
{
	std::cout << "Cat( cat = " << cat._name << " )" << std::endl;
	_type = "Cat";
}
Cat::~Cat()
{	std::cout << _name << ".Cat::~Cat()" << std::endl;
}

void			Cat::makeSound() const
{	std::cout << "meow-meow" << std::endl;
}
