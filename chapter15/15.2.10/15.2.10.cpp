#include<iostream>

using namespace std;

class CTime
{
private:
	int hour;
	int min;
	double sec;
public:
	CTime(int h, int m,double s):hour(h),min(m),sec(s)
	{ }
	CTime()
	{ }
	bool operator>(CTime& other)
	{
		double t1 = this->hour * 3600 + this->min * 60 + this->sec;
		double t2 = other.hour * 3600 + other.min * 60 + other.sec;
		if (t1 > t2)
			return true;
		else
			return false;
	}
	bool operator<(CTime& other)
	{
		double t1 = this->hour * 3600 + this->min * 60 + this->sec;
		double t2 = other.hour * 3600 + other.min * 60 + other.sec;
		if (t1 < t2)
			return true;
		else
			return false;
	}
	void show()
	{
		cout << "time = " << hour << " hour " << min << " min " << sec << " sec " << endl;
	}
};

int main()
{
	CTime t1(4, 23, 56.7);
	CTime t2(5, 45, 30.3);

	if (t1 > t2)
		cout << "T1 is larger than T2.\n";
	else
		cout << "T2 is larger than T1.\n";


	if (t1 < t2)
		cout << "T1 is smaller than T2.\n";
	else
		cout << "T2 is smaller than T1.\n";

	return 0;
}