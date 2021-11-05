#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include <iostream>

template< class TAnimal, class TCat > void testAnimalPointers()
{
	std::cout << "========== Pointers to objects of a base class =========\n\n";
	const TAnimal*	pAnimalToAnimal = new TAnimal();
	const TAnimal*	pAnimalToCat = new TCat();
	const TCat*		pCatToCat = new TCat;
	const  Animal*	pAnimalToDog = new  Dog();
	std::cout << std::endl;

	std::cout << pAnimalToAnimal->getType() << ": ";
	pAnimalToAnimal->makeSound();
	std::cout << pAnimalToCat->getType() << ": ";
	pAnimalToCat->makeSound();
	std::cout << pCatToCat->getType() << ": ";
	pCatToCat->makeSound();
	std::cout << pAnimalToDog->getType() << ": ";
	pAnimalToDog->makeSound();
	std::cout << std::endl;

	delete pAnimalToDog;
	delete pCatToCat;
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
	std::cout << "========== References to objects of a base class =======\n\n";
	TAnimal	a1;
	TCat	c1;
	std::cout << std::endl;

	runAnimal< TAnimal >( a1 );
	runAnimal< TAnimal >( c1 );
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
