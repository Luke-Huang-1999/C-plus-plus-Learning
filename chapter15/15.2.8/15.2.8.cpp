#include<iostream>
using namespace std;

class CWin
{
private:
	char id;
	int width, height;
public:
	CWin(char i, int w,int h):id(i),width(w),height(h)
	{ }

	int area()
	{
		return width * height;
	}

	bool operator<(CWin& other)
	{
		return (this->area() < other.area());
	}

	bool operator<(const int num)
	{
		return (this->area() < num);
	}

};

bool operator<(int num, CWin &other)
{
	return (num < other.area());
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