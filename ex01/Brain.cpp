#include "Brain.hpp"
#include <iostream>

Brain::Brain():
	iNextIdea(0)
{	std::cout << "Brain()" << std::endl;
}
Brain::Brain( Brain const & brain )
{
	std::cout << "Brain( Brain )" << std::endl;
	*this = brain;
}
Brain::~Brain()
{	std::cout << "~Brain()" << std::endl;
}
Brain const & 	Brain::operator=( Brain const & brain)
{
	std::cout << ".Brain::operator=() " << std::endl;
	for (size_t i = 0; i < capacity; i++)
		ideas[i] = brain.ideas[i];
	iNextIdea = brain.iNextIdea;
	return *this;
}
std::string const * Brain::getIdeas() const
{	return ideas;
}
void			Brain::addIdea( std::string idea )
{	ideas[ iNextIdea ] = idea;
	iNextIdea++;
	iNextIdea %= capacity;
}
