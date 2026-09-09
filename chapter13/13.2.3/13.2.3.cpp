#include<iostream>

using namespace std;

class CRectangle
{
private:
	int width;
	int height;
public:
	CRectangle(int w, int h) :width(w), height(h)
	{ }
	CRectangle() :width(10), height(10)
	{ }
	void show()
	{
		cout << "width = " << width << ", height = " << height << endl;
	}
};


int main()
{
	CRectangle cr1(3, 5);
	cr1.show();
	CRectangle cr2;
	cr2.show();


	return 0;
}