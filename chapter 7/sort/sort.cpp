#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>

void sort(int& i, int& j);

int main()
{
	int a = 6;
	int b = 11;

	cout << "before\n";
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";

	sort(a, b);

	cout << "after\n";
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";

	return 0;
}

void sort(int& i, int& j)
{
	int tmp = 0;
	if (i < j)
	{
		tmp = i;
		i = j;
		j = tmp;
	}

}