#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Caaa
{
	int num1, num2;
public:
	Caaa(int a, int b) :num1(a), num2(b) {};
	Caaa()
	{
		num1 = 1;
		num2 = 1;
	}
	void show()
	{
		cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
	}
};

class Cbbb :public Caaa
{
public:
	Cbbb(int a, int b) :Caaa(a, b) {};
};

int main()
{
	Cbbb obj(10,25);
	obj.show();

	return 0;
}