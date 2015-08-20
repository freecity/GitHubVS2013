#include "stdafx.h"
#include <cstring>
using std::string;
using std::cin;
using std::cout;
using std::endl;

//compare two strings
void main25()
{
	string s1, s2;
	cout << "Input two strings:";
	cin >> s1 >> s2;

	if (s1 > s2){
		cout << "string s1: " << s1 << " is larger than string s2: " << s2 << endl;
	}
	else if (s1 == s2){
		cout << "string s1: " << s1 << " is equal to string s2: " << s2 << endl;
	}
	else{
		cout << "string s1: " << s1 << " is smaller than string s2: " << s2 << endl;
	}

	// compare two c-style character strings
	size_t string_size = 20;
	char *cstring1 = new char[string_size];
	char *cstring2 = new char[string_size];
	//char *cstring2 = "astring"; //<----does not work in cin, why? 
	cout << cstring2;

	cout << "Input two strings:";
	cin >> cstring1 >> cstring2;

	if (strcmp(cstring1, cstring2) > 0)
		cout << "cstring 1 is larger than cstring 2" << endl;
	else if (strcmp(cstring1, cstring2) == 0 )
		cout << "cstring 1 is equal to cstring 2" << endl;
	else
		cout << "cstring 1 is smaller than cstring 2" << endl;

	delete[] cstring1;
	//delete[] cstring2;
}

