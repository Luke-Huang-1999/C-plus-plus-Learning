#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>

int* min(int* x, int* y);
int& min_ref(int& x, int& y);
int* min_ptr(int* x, int* y);

int main()
{
	int a = 32;
	int b = 59;
	


	cout << "a = " << a << ", b = " << b << "\n";

	//min_ref(a, b);				//參照版本呼叫
	//*min_ptr(&a, &b) = 100;		//指標版本呼叫

	cout << "a = " << a << ", b = " << b << "\n";
	return 0;
}

int* min(int* x, int* y)
{
	if (x > y)
		return y;
	else
		return x;
}

int& min_ref(int& x, int& y)
{
	if (x > y)
		return y;
	else
		return x;
}

int* min_ptr(int* x, int* y)
{
	if (*x > *y)
		return y;
	else
		return x;
}
