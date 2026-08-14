#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>

void sum(int& i, int& j);

int main()
{
	int a = 5;
	int b = 11;

	cout << "before\n";
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";

	sum(a, b);
	
	cout << "after\n";
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	return 0;
}

void sum(int& i, int& j)
{
	i = i + j;
}

