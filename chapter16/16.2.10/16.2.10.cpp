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


};
class Cbbb :protected Caaa
{
public:
	void show()
	{
		cout << "num = " << num << endl;
	}
	//num:protected
	//Caaa():protected
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