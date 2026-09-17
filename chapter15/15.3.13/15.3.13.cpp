#include<iostream>

using namespace std;

class Coodin
{
private:
	int x;
	int y;
public:
	Coodin(int i = 0, int j = 0) :x(i), y(j)
	{
	}

	Coodin& operator=(const Coodin& other)
	{
		this->x = other.x;
		this->y = other.y;
		return *this;
	}
	int getX() const
	{
		return x;
	}
	int getY() const
	{
		return y;
	}

	void show()
	{
		cout << "(" << x << ", " << y << ")\n";
	}

	//friend Coodin operator+(const Coodin& p1, const Coodin& p2);
	friend Coodin operator-(const Coodin& p1, const Coodin& p2);
};

Coodin operator+(const Coodin& p1, const Coodin& p2)
{
	return Coodin(p1.getX() + p2.getX(), p1.getY() + p2.getY());
}

Coodin operator-(const Coodin& p1, const Coodin& p2)
{
	return Coodin(p1.x - p2.x, p1.y - p2.y);
}

int main()
{
	Coodin c0(0, 1);
	Coodin c1(2, 2);
	Coodin c2, c3;
	c2 = c0 + c1;

	c2.show();


	return 0;
}