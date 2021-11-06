#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog():
	_pBrain( new Brain )
{
	_type = "Dog";
	std::cout << _type << ".Dog() finished" << std::endl;
}
Dog::Dog( Dog const & dog):
	Animal( dog ),
	_pBrain( new Brain )
{
	_type = "Dog";
	*this = dog;
	std::cout << _type << ".Dog( Dog ) finished" << std::endl;
	std::cout << std::endl;
}
Dog::~Dog()
{
	std::cout << _type << ".~Dog()" << std::endl;
	delete _pBrain;
}

Dog const & 	Dog::operator=( Dog const & dog)
{
	std::cout << _type << ".Dog::operator=() " << std::endl;
	*_pBrain = *dog._pBrain;
	return *this;
}
void			Dog::makeSound() const
{	std::cout << "meow-meow" << std::endl;
}
void			Dog::grow()
{
	_pBrain->addIdea( "play" );
	_pBrain->addIdea( "meat" );
}
void            Dog::showIdeas()
{
	const std::string* ideas = _pBrain->getIdeas();
	for ( size_t i = 0; i < _pBrain->capacity; i++ )
		if ( ideas[ i ].length() > 0 )
			std::cout << ideas[ i ] << std::endl;
}
