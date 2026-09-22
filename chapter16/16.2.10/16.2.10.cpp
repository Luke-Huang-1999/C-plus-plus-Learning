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

	void show()
	{
		cout << "num = " << num << endl;
	}
};
class Cbbb :protected Caaa
{
//public:
//	Cbbb():
};

class Cccc :public Cbbb
{

};

int main()
{
	Cccc c;
	c.show();


	return 0;
}