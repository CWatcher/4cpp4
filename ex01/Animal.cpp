#include "Animal.hpp"
#include <iostream>

Animal::Animal():
	_type( "Animal" )
{	std::cout << _type << ".Animal()" << std::endl;
}
Animal::Animal( Animal const & animal ):
	_type( animal._type )
{	std::cout << _type << ".Animal( Animal )" << std::endl;
}
Animal::~Animal()
{	std::cout << _type << ".~Animal()" << std::endl;
}
Animal const & 	Animal::operator=( Animal const & )
{
	std::cout << _type << ".Animal::operator=() " << std::endl;
	return *this;
}
std::string const &	Animal::getType() const
{	return _type;
}
void			Animal::makeSound() const
{	std::cout << "__" << std::endl;
}
