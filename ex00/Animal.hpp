#pragma once

#include <string>
#include <ostream>

class Animal
{
public:
	Animal();
	Animal( Animal const & );
	Animal( std::string const & name );
	~Animal();
	Animal const & 	operator=( Animal const & );
					operator std::string() const;
	std::string		getType() const;
	void			makeSound() const;
	void			setName( std::string const & );
protected:
	std::string	_type;
	std::string	_name;
private:

};

std::ostream&	operator<<( std::ostream &, Animal const & );
