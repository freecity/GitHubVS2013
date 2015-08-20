#include "stdafx.h"

using std::vector;
using std::string;

void main()
{
	vector<string> strVec;
	string inStr;

	while (std::cin >> inStr){
		strVec.push_back(inStr);							// ctrl + z to stop
	}

	char ** cpArray = new char *[strVec.size()];

	size_t ix = 0;
	for (vector<string>::iterator iter = strVec.begin(); iter != strVec.end(); ++iter, ++ix){
		
		char *cArray = new char[ (*iter).size() + 1 ];
		strcpy_s(cArray, (*iter).size() + 1, (*iter).c_str() );
		cpArray[ix] = cArray;
		//delete[] cArray;		//cannot do it here, otherwise lose the content
	}

	//C4_35 print vector and char pointer array
	std::cout << "output array:" << std::endl;

	ix = 0;
	for (vector<string>::iterator iter = strVec.begin(); iter != strVec.end(); ++iter, ++ix){
		
		std::cout << cpArray[ix] << std::endl;
		/*
		for (size_t i = 0; i < (*iter).size(); ++i){		//not necessary
			std::cout << *(cpArray[ix] + i) << " ";
		}
		std::cout << std::endl;
		*/

		delete[] cpArray[ix];
	}
	delete cpArray;
}