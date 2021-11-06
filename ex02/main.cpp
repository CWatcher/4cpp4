#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main( int, char** )
{
	size_t const	n = 4;
	Animal*			pAnimals[ n ];
//	Animal			animal;
	Dog				dog;
	Cat				cat;
	size_t 			i = 0;

	std::cout << std::endl;
	dog.grow();
	cat.grow();
	while ( i < n / 2 )
		pAnimals[ i++ ] = new Dog( dog );
	while ( i < n     )
		pAnimals[ i++ ] = new Cat( cat );

	Cat* pLastCat = ( Cat* )pAnimals[ n - 1 ];
	std::cout << "Copied cat brain:\n";
	pLastCat->showIdeas();

	std::cout << std::endl;
	while ( i > 0    )
		delete pAnimals[--i];

	std::cout << std::endl;
}
