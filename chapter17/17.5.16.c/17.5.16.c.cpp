#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

template<typename T1, typename T2>
double times(T1 a, T2 b)
{
	double result = a * b;

	return result;
}
int main()
{
	cout << "times(3.7,4) = " << times(3.7, 4) << endl;
	cout << "times(3,4.2) = " << times(3, 4.2) << endl;
	cout << "times(3,4) = " << times(3, 4) << endl;
	return 0;
}