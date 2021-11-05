#!/bin/sh

make > /dev/null		\
	&& echo make ok! 	\
	|| exit 1

aa > Cat.out
aa --Wrong > WrongCat.out 

sed "s/Wrong//g" WrongCat.out | diff Cat.out -

rm Cat.out WrongCat.out
