#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class TwoD
{
protected:
	int x;
	int y;
public:
	TwoD(int m, int n) :x(m), y(n) {};

	void showxy()
	{
		cout << "平面座標：p(" << x << ", " << y << ")\n";
	}
};
class ThreeD:public TwoD
{
protected:
	int z;
public:
	ThreeD(int m, int n, int o):TwoD(m, n)
	{
		z = o;
	}
	void showxyz()
	{
		cout << "空間座標：s(" << x << ", " << y << ", " << z << ")\n";
	}
};

int main()
{
	TwoD p(3, 4);
	ThreeD s(3, 4, 5);

	p.showxy();
	s.showxyz();

	return 0;
}