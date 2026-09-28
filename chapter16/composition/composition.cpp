#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class test
{
	int x, y;
public:
	test(int m, int n) :x(m), y(n) {};

	int getx() const
	{
		
		return x;
	}
};

int main()
{
	test a(3, 4);
	cout << a.getx() << endl;

	return 0;
}