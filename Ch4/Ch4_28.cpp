#include "stdafx.h"
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::vector;

void main28()
{
	cout << "Input a few integers separated by space (end input by ctrl + D):";
	//cin a vector<int>
	vector<int> ivec;
	int itmp = 0;
	while (cin >> itmp)
		ivec.push_back(itmp);

	// create a dynamic array and copy the vector<int?
	vector<int>::size_type size_vec = ivec.size();				//type of vector<int> size is: vector<int>::size_type
	int *parray = new int[size_vec];

	int *pa = parray;											//make a pointer copy, so not move the new pointer
	for (size_t ix = 0; ix != size_vec; ++ix){
		*pa = ivec[ix];
		cout << *pa << " ";
		++pa;
	}
	
	delete [] parray;											//<-- cannot delete after moving!!

}