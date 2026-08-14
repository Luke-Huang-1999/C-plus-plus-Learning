#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>

void setvalue(int& i, int& j);

int main()
{
	int a = 5;
	int b = 7;
	setvalue(a, b);

	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";

	return 0;
}

void setvalue(int& i, int& j)
{
	if (i < j)
		i = 100;
	else
		j = 100;

}