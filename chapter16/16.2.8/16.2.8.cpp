#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Caaa
{
protected:
	int num;
public:
	Caaa()
	{
		num = 5;
	}
	int get_num()
	{
		return num;
	}
};

class Cbbb :public Caaa
{
public:
	void show()
	{
		cout << "num = " << get_num() << endl;
	}
};

int main()
{
	Cbbb b;
	b.show();

	return 0;
}