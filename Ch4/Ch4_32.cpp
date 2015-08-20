//initialize vector using int array

#include "stdafx.h"

using std::vector;

void main32()
{
	int iArray[6] = {1, 2, 3, 4, 5, 6};
	
	/*
	vector<int> iVec;

	for (size_t ix = 0; ix != 6; ++ix){
		iVec.push_back(iArray[ix]);					//how to cite an element in vector<>?   iteractor or this way
	}
	*/

	vector<int> iVec (iArray, iArray + 6 );

}