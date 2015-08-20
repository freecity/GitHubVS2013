//#include "stdafx.h"
#include <iostream>

void main17()
{


	int i = 1, j = 2;
	const int k = i;

	std::cout << i << " ";

	i += j - i;

	std::cout << j << " " << i << " " << std::endl;
}