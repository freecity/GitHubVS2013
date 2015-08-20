#include "stdafx.h"

void main29()
{
	const char *pc = "a very long literal string";
	const size_t len = strlen(pc + 1);
	std::cout << len;

	for (size_t ix = 0; ix != 1000000; ++ix){
		char *pc2 = new char[len + 1];
		//strcpy(pc2, pc);						//strcpy() introduces an error
		
		delete[] pc2;
	}
}