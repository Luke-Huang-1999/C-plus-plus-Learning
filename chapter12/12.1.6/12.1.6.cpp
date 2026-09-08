#include<iostream>

using namespace std;

class CTemp
{
public:
	double c;
	double f;
	void CtoF(double c)
	{
		f = c / 0.37;
	}
};
int main()
{
	CTemp temp;
	temp.c = 37.2;
	temp.CtoF(temp.c);
	cout << "攝氏" << temp.c << "度 = 華氏" << temp.f << "度\n";
	return 0;
}