#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << type << ".WrongCat()" << std::endl;
}
WrongCat::WrongCat( WrongCat const & )
{
	type = "WrongCat";
	std::cout << type << ".WrongCat( WrongCat )" << std::endl;
}
WrongCat::~WrongCat()
{	std::cout << type << ".~WrongCat()" << std::endl;
}

void			WrongCat::makeSound() const
{	std::cout << "meow-meow" << std::endl;
}
