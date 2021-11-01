#include "Animal.hpp"
#include <iostream>
#include <sstream>

Animal::Animal()
{
	std::cout << "Animal ()" << std::endl;
	_type = "Animal";
}
Animal::Animal( std::string const & name ):
	_name( name )
{
	std::cout << "Animal ( name = " << _name << " )" << std::endl;
	_type = "Animal";
}
Animal::Animal( Animal const & animal )
{	
	std::cout << "Animal( animal = " << animal._name << " )" << std::endl;
	std::cout << *this << std::endl;
}
Animal::~Animal()
{	std::cout << _name << ".Animal::~Animal()" << std::endl;
}
Animal const & 	Animal::operator=( Animal const & animal )
{
	std::cout << _name << " = " << animal._name << std::endl;
	return *this;
}
				Animal::operator std::string() const
{
	std::stringstream ss;
	ss << _type << "{ " << _name << " }";
	return ss.str();
}
std::string		Animal::getType() const
{	return _type;
}
void			Animal::makeSound() const
{	std::cout << _name << ".Animal::makeSound()" << std::endl;
}
void				Animal::setName( std::string const & name ) {
	_name = name;
}
std::ostream &operator<<(std::ostream &os, Animal const &animal) {
	return os << (std::string)animal;
}
