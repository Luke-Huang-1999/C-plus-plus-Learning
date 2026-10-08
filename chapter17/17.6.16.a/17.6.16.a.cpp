#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;
template<typename T>
T times(T a, T b)
{
	T result = a * b;
	return result;
}



int main()
{
	cout << "times(3, 4) = " << times<int>(3, 4) << endl;
	cout << "times(3.6, 4.6) = " << times<double>(3.6, 4.6) << endl;
	cout << "times(3.1154, 3.1169) = " << times<float>(3.1154, 3.1169) << endl;
	cout << "times(3.3, 4.4) = " << times<double>(3.3, 4.4) << endl;


	return 0;
}