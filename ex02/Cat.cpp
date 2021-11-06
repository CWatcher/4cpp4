#include "Cat.hpp"
#include <iostream>
#include <string>

Cat::Cat():
	_pBrain( new Brain )
{
	_type = "Cat";
	std::cout << _type << ".Cat() finished" << std::endl;
}
Cat::Cat( Cat const & cat):
	Animal( cat ),
	_pBrain( new Brain )
{
	_type = "Cat";
	*this = cat;
	std::cout << _type << ".Cat( Cat ) finished" << std::endl;
	std::cout << std::endl;
}
Cat::~Cat()
{
	std::cout << _type << ".~Cat()" << std::endl;
	delete _pBrain;
}

Cat const & 	Cat::operator=( Cat const & cat)
{
	std::cout << _type << ".Cat::operator=() " << std::endl;
	*_pBrain = *cat._pBrain;
	return *this;
}
void			Cat::makeSound() const
{	std::cout << "meow-meow" << std::endl;
}
void			Cat::grow()
{
	_pBrain->addIdea( "rest" );
	_pBrain->addIdea( "fish" );
}
void            Cat::showIdeas()
{
	const std::string* ideas = _pBrain->getIdeas();
	for ( size_t i = 0; i < _pBrain->capacity; i++ )
		if ( ideas[ i ].length() > 0 )
			std::cout << ideas[ i ] << std::endl;
}
