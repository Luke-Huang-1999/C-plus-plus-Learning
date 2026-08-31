#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>

void sort(int& num1, int& num2, int& num3);

int main()
{
	int a = 3;
	int b = 5;
	int c = 2;

	int& num1 = a;
	int& num2 = b;
	int& num3 = c;
	
	sort(num1, num2, num3);


	return 0;
}

void sort(int& num1, int& num2, int& num3)//大到小
{
	if (num1 < num2)
		swap(num1, num2);

	if (num2 < num3)
		swap(num2, num3);

	if (num1 < num2)
		swap(num1, num2);


}