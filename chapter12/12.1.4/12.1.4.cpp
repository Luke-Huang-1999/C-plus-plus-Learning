#include<iostream>
#include<string>
using namespace std;

class CWin
{
public:
	string title;
	char id;
	int width;
	int height;
	int area()
	{
		return width * height;
	}
	void set_title()
	{
		title = "**** Title ****";
	}
	void display()
	{
		cout << title << "\n";
	}
};

int main()
{
	CWin a;
	a.set_title();
	a.display();

	return 0;
}