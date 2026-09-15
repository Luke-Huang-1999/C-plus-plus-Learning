#include<iostream>

using namespace std;

class Caaa
{
public:
	Caaa();
	~Caaa();
};
Caaa::Caaa()
{
	cout << "constructor called" << endl;
}
Caaa::~Caaa()
{
	cout << "destructor called" << endl;
}

int main()
{
	Caaa odj;
	
	cout << sizeof(odj) << endl;

	return 0;
}