#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>

void multiply();

int main()
{

	multiply();

	return 0;
}

void multiply()
{
	int* a = new int[2];


	cout << "Input number1:";
	cin >> *(a + 0);
	cout << "Input number2:";
	cin >> *(a + 1);

	cout << "a[0] = " << a[0] << "  a[1] = " << a[1] << "\n";
	cout << *(a + 0) << " * " << *(a + 1) << " = " << (*(a + 0)) * (*(a + 1));

	delete []a;
	a = nullptr;
}