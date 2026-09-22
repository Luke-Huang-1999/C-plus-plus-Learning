#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class Caaa
{
private:
	int num;
public:
	Caaa(int n = 5) :num(n) {};

	void show()
	{
		cout << "num = " << num << endl;
	}

	void set_num(int a)
	{
		num = a;
	}
};

class Cbbb:public Caaa
{
public:
	void change(int c)
	{
		set_num(c);
	}
};

int main()
{
	Cbbb b;
	b.change(10);
	b.show();


	return 0;
}