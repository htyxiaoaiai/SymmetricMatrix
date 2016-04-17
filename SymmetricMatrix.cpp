#include<iostream>
#include"SymmetricMatrix.h"
using namespace std;

void TestSymmetricMatrix()
{
	int array[4][4] = { {0,1,2,3}, {1,0,1,2}, {2,1,0,1},{3,2,1,0} };
	SymmetricMatrix<int> sm((int*)array, 4);
	sm.Display();
	cout << sm.Acess(1, 4) << endl;
}
int main()
{
	TestSymmetricMatrix();
	getchar();
	return 0;
}
