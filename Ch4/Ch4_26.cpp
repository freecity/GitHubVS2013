#include "stdafx.h"
using std::cin;
using std::cout;
using std::endl;

void main26()
{
	cout << "Input a string:";

	std::string s1;
	cin >> s1;
	cout << s1 << endl;

	// input a c-style character string
	cout << "Input a string:";
	const size_t cstring_size = 10;
	char *cs1 = new char[cstring_size];  //dynamc array, cstring_size does not need to be constant
	cin >> cs1;
	cout << cs1 << endl;
	delete[] cs1;
}