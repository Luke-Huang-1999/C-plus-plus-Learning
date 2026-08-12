#include<iostream>
using namespace std;

int add10(int& i, int& j);
int& max(int& i, int& j);

int main()
{

	int a = 5;
	int b = 2;

	max(a, b) = 1000;

	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
	return 0;
}

int add10(int& i, int& j)
{
	i = i + 10;
	j = j + 10;

	return 0;
}

int& max(int& i, int& j)
{
	if (i > j)
		return i;
	else
		return j;

}