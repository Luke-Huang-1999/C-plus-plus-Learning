#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

template <typename T>
class CWin
{
protected:
	T width, height;
public:
	CWin(T w, T h) :width(w), height(h) {};
	void show()
	{
		cout << "width = " << width << endl;
		cout << "height = " << height << endl;
	}
};

int main()
{
	CWin<int>win1(50, 60);
	CWin<double>win2(50.25, 60.74);

	win1.show();
	win2.show();
	return 0;
}