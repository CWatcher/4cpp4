#include "Cat.hpp"
#include <iostream>
void runAnimal(Animal const & a)
{
	std::cout << a.getType() << ": ";
	a.makeSound();
}
int main( void )
{
	const Animal* pAnimalToAnimal = new Animal( "*pAnimalToAnimal" );
	std::cout << std::endl;

	const Animal* pAnimalToCat = new Cat( "*pAnimalToCat");
	std::cout << std::endl;

	std::cout << pAnimalToAnimal->getType() << ": ";
	pAnimalToAnimal->makeSound();
	std::cout << pAnimalToCat->getType() << ": ";
	pAnimalToCat->makeSound();
	std::cout << std::endl;

	delete pAnimalToCat;
	delete pAnimalToAnimal;
	std::cout << std::endl;

	Animal	a1( "a1" );
	std::cout << std::endl;

	Cat		c1( "c1" );
	std::cout << std::endl;

	runAnimal( a1 );
	runAnimal( c1 );
	std::cout << std::endl;
}
