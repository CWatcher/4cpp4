#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

template< class TAnimal, class TCat > void testAnimalPointers()
{
	const TAnimal* pAnimalToAnimal = new TAnimal();
	const TAnimal* pAnimalToCat = new TCat();
	std::cout << std::endl;

	std::cout << pAnimalToAnimal->getType() << ": ";
	pAnimalToAnimal->makeSound();
	std::cout << pAnimalToCat->getType() << ": ";
	pAnimalToCat->makeSound();
	std::cout << std::endl;

	delete pAnimalToCat;
	delete pAnimalToAnimal;
}
template< class TAnimal > void runAnimal(TAnimal const & a)
{
	std::cout << a.getType() << ": ";
	a.makeSound();
}
template< class TAnimal, class TCat > void testAnimalReferences()
{
	std::cout << std::endl;
	Animal	a1;
	TCat		c1;
	std::cout << std::endl;

	runAnimal( a1 );
	runAnimal( c1 );
	std::cout << std::endl;
}
int main( int argc, char** )
{
	if ( argc == 1) {
		testAnimalPointers< Animal, Cat >();
		testAnimalReferences< Animal, Cat >();
	}
	else {
		testAnimalPointers< WrongAnimal, WrongCat >();
		testAnimalReferences< WrongAnimal, WrongCat >();
	}
}
