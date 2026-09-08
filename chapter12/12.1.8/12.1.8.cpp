#include<iostream>

using namespace std;

class Calculator
{
public:
	int a;
	int b;
	void add()
	{
		cout << "a + b = " << a + b << "\n";
	}
	void sub()
	{
		cout << "a - b = " << a - b << "\n";
	}
	void mul()
	{
		cout << "a * b = " << a * b << "\n";
	}
	void div()
	{
		cout << "a / b = " << 1.0 * a / b << "\n";
	}
};

int main()
{
	Calculator cal;
	cal.a = 3;
	cal.b = 6;
	cal.add();
	cal.sub();
	cal.mul();
	cal.div();
	return 0;
}