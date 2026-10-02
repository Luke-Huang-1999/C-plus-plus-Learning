#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class DistConverter
{
protected:
	double dist;

	virtual double convert()
	{
		return dist;
	}
	virtual void show() = 0;
};

class KToMConverter :public DistConverter
{
public:
	KToMConverter(double k = 1)
	{
		dist = k;
	}
	virtual double convert()
	{
		return (dist * 0.6214);
	}
	virtual void show()
	{
		cout << dist << "公里 = " << convert() << "英哩\n";
	}
};

class MToKConverter:public DistConverter
{
public:
	MToKConverter(double m = 1)
	{
		dist = m;
	}
	virtual double convert()
	{
		return (dist * 1.6093);
	}
	virtual void show()
	{
		cout << dist << "英哩 = " << convert() << "公里\n";
	}
};

int main()
{
	KToMConverter k1(10);
	MToKConverter m1(6.214);

	k1.show();
	m1.show();

	return 0;
}