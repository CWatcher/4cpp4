#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << _type << ".WrongCat()" << std::endl;
}
WrongCat::WrongCat( WrongCat const & )
{
	_type = "WrongCat";
	std::cout << _type << ".WrongCat( WrongCat )" << std::endl;
}
WrongCat::~WrongCat()
{	std::cout << _type << ".~WrongCat()" << std::endl;
}

void			WrongCat::makeSound() const
{	std::cout << "meow-meow" << std::endl;
}
