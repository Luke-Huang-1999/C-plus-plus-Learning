#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>
#include<string>

void swap(int* x, int* y);
int* max(int* x, int* y);
int square(int a);
double triangle(double base, double height);
double rectangle(double height, double width);
void showarea(double x, double y, double (*pf)(double, double));


int main()
{
	int a[3] = { 1,2,5 };
	int i;
	int sum = 0;
	int* ptr = a;

	for (i = 0; i < 3; i++)
	{
		//sum = sum + *(a + i);
		//sum = sum + a[i];
		sum += *(ptr++);
	}

	cout << "sum = " << sum << "\n";


	return 0;
}

void showarea(double x, double y, double (*pf)(double, double))
{
	cout << (*pf)(x, y) << "\n";
}
double rectangle(double height, double width)
{
	return (height * width);
}
double triangle(double base, double height)
{
	return (base * height) / 2;
}

int square(int a)
{
	return (a * a);
}

void swap(int* x, int* y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;

}

int* max(int* x, int* y)
{
	if (*x > *y)
		return x;
	else
		return y;
}