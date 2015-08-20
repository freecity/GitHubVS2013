#include "stdafx.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

void main31()
{
	string inStr;
	cout << "Input a string:" << endl;
	cin >> inStr;

	string::size_type strLen = inStr.size();				//what is the data type? string::size_type
	char * strToChar = new char[strLen];

	//strcpy(strToChar, inStr.c_str());						//unsafe?

	//const char * strToChar = new const char[strLen];
	//strToChar = inStr.c_str();								//runtime error???

	
	char * cp = strToChar;

	for (string::size_type ix = 0; ix != strLen; ++ix) {	//easier way?
		*cp = inStr[ix];
		cout << *cp;
		++cp;	
	}
	cout << endl;
	
	delete[] strToChar;
}