#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	type = "Cat";
	std::cout << type << ".Cat()" << std::endl;
}
Cat::Cat( Cat const & )
{
	type = "Cat";
	std::cout << type << ".Cat( Cat )" << std::endl;
}
Cat::~Cat()
{	std::cout << type << ".~Cat()" << std::endl;
}

void			Cat::makeSound() const
{	std::cout << "meow-meow" << std::endl;
}
