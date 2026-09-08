#include<iostream>
using namespace std;

class CBox
{
public:
	int length;//長
	int width;//寬
	int height;//高
	void volume()
	{
		int vol = length * width * height;
		cout << "體積 = " << vol << "\n";
	}
	void surfaceArea()
	{
		int sur = 2 * (length * width + width * height + length * height);
		cout << "表面積 = " << sur << "\n";
	}
};

int main()
{
	CBox box;
	box.length = 5;
	box.width = 4;
	box.height = 3;
	box.volume();
	box.surfaceArea();
	return 0;
}