#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class CMath
{
public:
	virtual int compute() = 0;
	void show()
	{
		cout << "ans = " << compute() << endl;
	}
};
class Cadd :public CMath
{
public:
	int num1, num2;
	Cadd(int m, int n) :num1(m), num2(n) {};
	virtual int compute()
	{
		return num1 + num2;
	}
	void show()
	{
		cout << "add(" << num1 << ", " << num2 << ") = " << compute() << endl;
	}
};

int main()
{
	Cadd a1(2, 3);
	a1.show();


	return 0;
}