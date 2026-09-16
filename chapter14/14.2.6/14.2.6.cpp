#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Caaa
{
private:
	int a;
public:
	Caaa();
	~Caaa();
};

Caaa::Caaa()
{
	a = 10;
	cout << "constructor called.\n";
}

Caaa::~Caaa()
{
	cout << "destructor called.\n";
	
}

int main()
{
	Caaa* obj = new Caaa;

	delete obj;

	return 0;
}