#include "stdafx.h"

void main33()
{

	std::vector<int> iVec(10, 2);

	int iArray[10];

	std::vector<int>::iterator it = iVec.begin();

	for (size_t ix = 0; ix != 10; ++ix){
		iArray[ix] = *(it + ix);
		std::cout << iArray[ix] << " ";
	}
}