#include<iostream>
using namespace std;
#define WORD "This repository contains my C++ practice projects and related work.\\n"

int add(int, int);
double add(double, double);

int main()
{
	int a = 10;
	int b = 20;

	double x = 2.3;
	double y = 3.5;

	cout << WORD;

	return 0;
}

int add(int i, int j)
{
	return (i + j);
}
double add(double i, double j)
{
	return (i + j);
}
