#pragma once

#include <string>
#include <ostream>

class Brain
{
public:
	static const size_t capacity = 100;

	Brain();
	Brain( Brain const & );
	~Brain();
	Brain		const &	operator=( Brain const & );
	std::string	const * getIdeas() const;
	void		addIdea( std::string idea );
private:
	std::string	ideas[capacity];
	size_t		iNextIdea;
};
