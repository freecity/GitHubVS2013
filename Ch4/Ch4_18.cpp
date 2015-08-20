// Ch4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main18()
{
	const size_t array_size = 10;

	int array1[array_size] = {};
	int *ap = array1;

	for (size_t ix = 0; ix != array_size; ++ix){
		*ap = 0;
		std::cout << *ap << " ";
		++ap;
	}

	return 0;
}

