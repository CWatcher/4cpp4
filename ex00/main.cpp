#include "Cat.hpp"
#include <iostream>
void runAnimal(Animal const & a)
{
	a.makeSound();
}
int main( void )
{
	const Animal* pAnimalToAnimal = new Animal( "*pAnimalToAnimal" );
	std::cout << std::endl;

	const Animal* pAnimalToCat = new Cat( "*pAnimalToCat");
	std::cout << std::endl;

	pAnimalToAnimal->makeSound();
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
