#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>

int max(int& i, int& j);

double max(double& i, double& j);


int main()
{
	int a = 5;
	int b = 7;
	
	double c = 2.2;
	double d = 3.7;

	cout << "max = " << max(a,b) << "\n";
	cout << "max = " << max(c,d) << "\n";


	return 0;
}

int max(int& i, int& j)
{
	int max = 0;

	if (i > j)
		max = i;
	else
		max = j;

	
	return max;
}

double max(double& i, double& j)
{
	double max = 0;

	if (i > j)
		max = i;
	else
		max = j;

	return max;
}