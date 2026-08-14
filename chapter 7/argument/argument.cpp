#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>

int max(int a, int b = 10);

int power(int x = 1, int n = 1);

double avg(int a, int b = 5, int c = 7);

double triangle(int base = 2, int height = 1);

int main()
{
	int a = 7;

	//max(a);
	/*cout << "power() = " << power() << "\n";
	cout << "power(5) = " << power(5) << "\n";
	cout << "power(3,2) = " << power(3,2) << "\n";*/

	/*cout << "avg() = " << avg(13) << "\n";
	cout << "avg(9,16) = " << avg(9,16) << "\n";
	cout << "avg(8,17,3) = " << avg(8,17,3) << "\n";*/

	cout << "triangle() = " << triangle() << "\n";
	cout << "triangle(10) = " << triangle(10) << "\n";
	cout << "triangle(12,3) = " << triangle(12,3) << "\n";

	return 0;
}

int max(int a, int b)
{
	int max;
	if (a > b)
		max = a;
	else
		max = b;

	cout << "max = " << max << "\n";
	return max;
}

int power(int x, int n)
{
	int i;
	int sum = 1;
	for (i = 0; i < n; i++)
	{
		sum = sum * x;
	}
	return sum;
}

double avg(int a, int b, int c)		//int a, int b = 5, int c = 7
{
	return ((a + b + c) / 3.0);
}

double triangle(int base, int height)
{
	return ((base * height) / 2.0);
}