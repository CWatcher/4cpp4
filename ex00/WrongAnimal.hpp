#pragma once

#include <string>
#include <ostream>

class WrongAnimal
{
public:
	WrongAnimal();
	WrongAnimal( WrongAnimal const & );
	WrongAnimal( std::string const & name );
	~WrongAnimal();
	WrongAnimal const & 	operator=( WrongAnimal const & );
					operator std::string() const;
	std::string		getType() const;
	void			makeSound() const;
	void			setName( std::string const & );
protected:
	std::string	_type;
	std::string	_name;
private:

};

std::ostream&	operator<<( std::ostream &, WrongAnimal const & );
