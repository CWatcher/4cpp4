#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( std::string const & name ):
	WrongAnimal( name )
{
	std::cout << "WrongCat( name = " << name << " )" << std::endl;
	_type = "WrongCat";
}
WrongCat::WrongCat( WrongCat const & cat )
{
	std::cout << "WrongCat( cat = " << cat._name << " )" << std::endl;
	_type = "WrongCat";
}
WrongCat::~WrongCat()
{	std::cout << _name << ".WrongCat::~WrongCat()" << std::endl;
}

void			WrongCat::makeSound() const
{	std::cout << "meow-meow" << std::endl;
}
