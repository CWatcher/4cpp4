#include "WrongAnimal.hpp"
#include <iostream>
#include <sstream>

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal ()" << std::endl;
	_type = "WrongAnimal";
}
WrongAnimal::WrongAnimal( std::string const & name ):
	_name( name )
{
	std::cout << "WrongAnimal ( name = " << _name << " )" << std::endl;
	_type = "WrongAnimal";
}
WrongAnimal::WrongAnimal( WrongAnimal const & animal )
{	
	std::cout << "WrongAnimal( animal = " << animal._name << " )" << std::endl;
	std::cout << *this << std::endl;
}
WrongAnimal::~WrongAnimal()
{	std::cout << _name << ".WrongAnimal::~WrongAnimal()" << std::endl;
}
WrongAnimal const & 	WrongAnimal::operator=( WrongAnimal const & animal )
{
	std::cout << _name << " = " << animal._name << std::endl;
	return *this;
}
				WrongAnimal::operator std::string() const
{
	std::stringstream ss;
	ss << _type << "{ " << _name << " }";
	return ss.str();
}
std::string		WrongAnimal::getType() const
{	return _type;
}
void			WrongAnimal::makeSound() const
{	std::cout << "__" << std::endl;
}
void				WrongAnimal::setName( std::string const & name ) {
	_name = name;
}
std::ostream &operator<<(std::ostream &os, WrongAnimal const &animal) {
	return os << (std::string)animal;
}
