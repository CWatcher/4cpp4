#include "WrongAnimal.hpp"
#include <iostream>
#include <sstream>

WrongAnimal::WrongAnimal():
	_type( "WrongAnimal" )
{	std::cout << _type << ".WrongAnimal()" << std::endl;
}
WrongAnimal::WrongAnimal( WrongAnimal const & animal ):
	_type( animal._type )
{	std::cout << _type << ".WrongAnimal( WrongAnimal )" << std::endl;
}
WrongAnimal::~WrongAnimal()
{	std::cout << _type << ".~WrongAnimal()" << std::endl;
}
WrongAnimal const & 	WrongAnimal::operator=( WrongAnimal const & )
{
	std::cout << _type << ".WrongAnimal::operator=() " << std::endl;
	return *this;
}
std::string const &	WrongAnimal::getType() const
{	return _type;
}
void			WrongAnimal::makeSound() const
{	std::cout << "__" << std::endl;
}
