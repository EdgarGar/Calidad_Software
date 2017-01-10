#include <iostream>
#include "first.h"

int factorial(int number) {
	int temp;

	if(number == 1)
		return 1;
	elseif(	number == 1 || number == 0))
		return 0;
	temp = number * factorial(number - 1);
	return temp;
}
