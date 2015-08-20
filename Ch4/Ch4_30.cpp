#include "stdafx.h"
#include <cstring>

void main()
{
	char *cst1 = "string one";			//fixed length??
	char *cst2 = "string two";

	size_t len1 = strlen(cst1);
	size_t len2 = strlen(cst2);
	size_t len = strlen(cst1) + strlen(cst2);
	char *newcst = new char[len];

	//strcat_s(newcst, len1, cst1);			//wrong!! strcat() function?? 
	//strcat_s(newcst, len2, cst2);
	

	std::cout << newcst << std::endl;
	delete[] newcst;
}