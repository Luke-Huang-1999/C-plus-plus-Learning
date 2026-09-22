#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Caaa
{
private:
	int num1, num2;
public:
	void s_num1(int a)
	{
		num1 = a;
	}

	void s_num2(int b)
	{
		num2 = b;
	}

	int get_num1()
	{
		return num1;
	}
	int get_num2()
	{
		return num2;
	}
};

class Cbbb:public Caaa
{
private:
public:
	void set_num(int a, int b)
	{
		s_num1(a);
		s_num2(b);
	}

	void show()
	{
		cout << "num1 = " << get_num1() << ", num2 = " << get_num2() << endl;
	}
};

int main()
{
	Cbbb obj;
	
	obj.set_num(10, 20);

	obj.show();

	
	return 0;
}