#include "WrongAnimal.hpp"
#include <iostream>
#include <sstream>

WrongAnimal::WrongAnimal():
	type( "WrongAnimal" )
{	std::cout << type << ".WrongAnimal()" << std::endl;
}
WrongAnimal::WrongAnimal( WrongAnimal const & animal ):
	type( animal.type )
{	std::cout << type << ".WrongAnimal( WrongAnimal )" << std::endl;
}
WrongAnimal::~WrongAnimal()
{	std::cout << type << ".~WrongAnimal()" << std::endl;
}
WrongAnimal const & 	WrongAnimal::operator=( WrongAnimal const & )
{
	std::cout << type << ".WrongAnimal::operator=() " << std::endl;
	return *this;
}
std::string const &	WrongAnimal::getType() const
{	return type;
}
void			WrongAnimal::makeSound() const
{	std::cout << "__" << std::endl;
}
