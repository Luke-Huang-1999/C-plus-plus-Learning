#include<iostream>

using namespace std;

class Coodin
{
private:
	int x;
	int y;
public:
	Coodin(int i = 0, int j = 0):x(i),y(j)
	{ }

	Coodin operator+(const Coodin& other)
	{
		return Coodin(this->x + other.x, this->y + other.y);
	}

	Coodin operator-(const Coodin& other)
	{
		return Coodin(this->x - other.x, this->y - other.y);
	}

	Coodin& operator=(const Coodin& other)
	{
		this->x = other.x;
		this->y = other.y;
		return *this;
	}

	void show()
	{
		cout << "(" << x << ", " << y << ")\n";
	}

};

int main()
{
	Coodin c0(1, 1);
	Coodin c1(2, 2);
	Coodin c3, c4, c5;

	c3 = c0 + c1;
	c4 = c0 - c1;
	c5 = c1;
	
	c5.show();


	return 0;
}


/*
show()
c0(1,1) c1(2,2) c2 c3
c2 = c0+c1 c3 = c0-c1
預設座標(0,0)
多載+ - =

c0=(1, 1)
c1 = (2,2)
c0 + c1 = (3,3)
c0-c1=(-1,-1) 
*/