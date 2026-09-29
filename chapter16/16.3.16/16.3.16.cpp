#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Caaa
{
public:
	int num1, num2;
	Caaa(int a = 0, int b = 0) :num1(a), num2(b) {};
	void display()
	{
		cout << "printed from Caaa class." << endl;
	}
};

class Cbbb :public Caaa
{
public:
	Cbbb(int a = 0, int b = 0) :Caaa(a, b) {};
	void set_num(int a, int b)
	{
		num1 = a;
		num2 = b;
	}
	void show()
	{
		cout << "num1 = " << num1 << endl;
		cout << "num2 = " << num2 << endl;
	}
	void display()
	{
		cout << "printed from Cbbb class." << endl;
	}
};

int main()
{
	Caaa obj1;
	Cbbb obj2;
	obj1.display();
	obj2.display();
	
	return 0;
}