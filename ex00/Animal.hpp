#pragma once

#include <string>
#include <ostream>

class Animal
{
public:
	Animal();
	Animal( Animal const & );
	virtual	~Animal();
	Animal const & 	operator=( Animal const & );
	std::string	const &	getType() const;
	virtual void	makeSound() const;
protected:
	std::string	_type;
};
