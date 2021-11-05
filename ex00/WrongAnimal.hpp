#pragma once

#include <string>
#include <ostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal( WrongAnimal const & );
	~WrongAnimal();
	WrongAnimal const & 	operator=( WrongAnimal const & );
	std::string	const &	getType() const;
	void	makeSound() const;
protected:
	std::string	_type;
};
