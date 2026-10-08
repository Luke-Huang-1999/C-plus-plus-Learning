#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

template<typename T1>
T1 add(T1 a, T1 b)
{
	T1 sum = a + b;
	return sum;
}

int main()
{
	cout << "add(3, 4) = " << add<int>(3, 4) << endl;
	cout << "add(3.2, 4.6) = " << add<double>(3.2, 4.6) << endl;

	return 0;
}