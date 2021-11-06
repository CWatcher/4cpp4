#include "Animal.hpp"
#include <iostream>

Animal::Animal():
	type( "Animal" )
{	std::cout << type << ".Animal()" << std::endl;
}
Animal::Animal( Animal const & animal ):
	type( animal.type )
{	std::cout << type << ".Animal( Animal )" << std::endl;
}
Animal::~Animal()
{	std::cout << type << ".~Animal()" << std::endl;
}
Animal const & 	Animal::operator=( Animal const & )
{
	std::cout << type << ".Animal::operator=() " << std::endl;
	return *this;
}
std::string const &	Animal::getType() const
{	return type;
}
void			Animal::makeSound() const
{	std::cout << "__" << std::endl;
}
