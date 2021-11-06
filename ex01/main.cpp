#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main( int, char** )
{
	size_t const	n = 4;
	Animal*			animals[n];
	size_t 			i = 0;

	while ( i < n / 2)
		animals[i++] = new Dog;
	while ( i < n    )
		animals[i++] = new Cat;
	while ( i > 0    )
		delete animals[--i];
}
