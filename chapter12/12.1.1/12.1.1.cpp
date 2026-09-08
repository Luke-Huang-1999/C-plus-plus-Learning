using namespace std;
#include<iostream>

class Caaa
{
	public:
		int a;
		int b;
		int c;
};


int main()
{
	Caaa obj = { 1,3 };
	obj.c = obj.a + obj.b;


	cout << "a = " << obj.a << "\nb = " << obj.b << "\nc = " << obj.c;

	return 0;
}