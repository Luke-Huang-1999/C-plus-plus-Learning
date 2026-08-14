#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>

void gcd(int& a, int& b, int& g);

int main()
{
	int a = 21;
	int b = 49;
	int g = 0;
	gcd(a, b, g);
	return 0;
}

void gcd(int& a, int& b, int& g)
{
	int tmp;
	if (a < b) //b需要小於等於a
	{
		tmp = a;
		a = b;
		b = tmp;
	} 
	
	int i = 1;
	g = 1;
	while (1)
	{
		if (i > b)
			break;
		
		else if ((b % i) == 0)
		{
			if ((a % i) == 0)
				g = g * i;
		}
		i++;
	}

	cout << "g = " << g << "\n";
}