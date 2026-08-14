#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>

void preverb(void);
void preverb(int k);

int power(int x, int n);
double power(double x, int n);

int main()
{
	int a = 2;
	double b = 2.2;
	int n = 2;

	cout << a << "to the " << n << " power = " << power(a, n) << "\n";
	cout << b << "to the " << n << " power = " << power(b, n) << "\n";


	return 0;
}

void preverb(void)
{
	cout << "Two heads are better than one.\n";
}
void preverb(int k)
{
	int i;

	for (i = 0; i < k; i++)
	{
		preverb();
	}
}

int power(int x, int n)
{
	int sum = 1;
	int i;
	for (i = 0; i < n; i++)
	{
		sum = sum * x;
	}
	return sum;
}

double power(double x, int n)
{
	double sum = 1;
	int i;
	for (i = 0; i < n; i++)
	{
		sum = sum * x;
	}
	return sum;
}
