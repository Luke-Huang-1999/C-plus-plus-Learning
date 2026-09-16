#include<iostream>
using namespace std;

class CWin
{
private:
	char id;
	int width, height;

public:
	CWin(char i, int w, int h) :id(i), width(w), height(h)
	{
	}

	int area()
	{
		return width * height;
	}

	friend bool operator<(CWin & win1, CWin& win2);
	friend bool operator<(CWin& win1, const int num);
	friend bool operator<(const int num, CWin& win1);
};

bool operator<(CWin& win1, CWin& win2)
{
	return (win1.area() < win2.area());
}

bool operator<(CWin& win1, const int num)
{
	return (win1.area() < num);
}

bool operator<(const int num, CWin& win1)
{
	return (num < win1.area());
}

int main()
{
	CWin win1('A', 70, 80);
	CWin win2('B', 60, 90);
	if (win1 < win2)
		cout << "win2 is larger than win1." << endl;
	else
		cout << "win1 is larger than win2." << endl;

	if (win1 < 7000)
		cout << "win1 is smaller than 7000." << endl;
	else
		cout << "win1 is larger than 7000." << endl;

	if (4500 < win2)
		cout << "win2 is larger than 4500." << endl;
	else
		cout << "win2 is smaller than 4500." << endl;


	return 0;
}