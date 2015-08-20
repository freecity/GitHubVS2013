#include "stdafx.h"
using std::cout;
using std::endl;

void main14()
{
	int i = 10;
	int *p = &i;

	cout << i << endl;

	*p = 20;
	cout << i << endl;

	int j = 2;
	p = &j;

}