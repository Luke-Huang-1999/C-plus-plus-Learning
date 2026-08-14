#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#define WORD "Rome was not bulit in a day."
#define SUM(X,Y) X+Y
#define MAX(X,Y) ((X>Y)?X:Y)
#define PI 3.1415926
#define VOLUMN(R) ((4/3)*PI*R*R*R) 

#include<iostream>

int main()
{
	cout << WORD << "\n";
	cout << "SUM(10,5) = " << SUM(10, 5) << "\n";
	cout << "SUM(4.6, 3.8) = " << SUM(4.6, 3.8) << "\n";
	cout << "MAX(12, 6) = " << MAX(12, 6) << "\n";

	int i = 1;
	for (i = 1; i <= 200; i++)
	{
		cout << "radius = " << i << " area = " << VOLUMN(i) << "\n";
	}

	return 0;
}