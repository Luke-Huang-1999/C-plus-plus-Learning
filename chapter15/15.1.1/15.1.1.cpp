#include<iostream>

using namespace std;

class CTime
{
private:
	int hour;
	int min;
	double sec;
public:
	CTime(int h, int m, double s) :hour(h), min(m), sec(s)
	{ }
	CTime()
	{ }
	void show_time()
	{
		cout << hour << " hr " << min << " min " << sec << " sec " << endl;
	}
	CTime operator+(const CTime& other)
	{
		int carry = 0;
		double s3 = this->sec + other.sec;
		if (s3 >= 60.0)
		{
			carry = s3 / 60;
			s3 = s3 - carry * 60;
		}
		int m3 = this->min + other.min + carry;
		carry = 0;
		if (m3 >= 60)
		{
			carry = m3 / 60;
			m3 = m3 - carry * 60;
		}
		int h3 = this->hour + other.hour + carry;
		
		return CTime(h3, m3, s3);
	}

	CTime operator-(const CTime& other)
	{
		double t1_total = this->hour * 3600 + this->min * 60 + this->sec;
		double t2_total = other.hour * 3600 + other.min * 60 + other.sec;
		double t3_total = t1_total - t2_total;
		int h3 = t3_total / 3600;
		int m3 = (t3_total - h3 * 3600) / 60;
		double s3 = t3_total - h3 * 3600 - m3 * 60;

		return CTime(h3, m3, s3);
	}

	CTime operator*(int nums)
	{
		double t1 = this->hour * 3600 + this->min * 60 + this->sec;
		double t_new = t1 * nums;
		int h_new = t_new / 3600;
		int m_new = (t_new - h_new * 3600) / 60;
		double s_new = t_new - h_new * 3600 - m_new * 60;

		return CTime(h_new, m_new, s_new);
	}

	CTime operator/(int nums)
	{
		double t1 = this->hour * 3600 + this->min * 60 + this->sec;
		double t = t1 / nums;
		int h_new = t / 3600;
		int m_new = (t - h_new * 3600) / 60;
		double s_new = t - h_new * 3600 - m_new * 60;

		return CTime(h_new, m_new, s_new);

	}

	bool operator<(const CTime& other);
};

bool CTime::operator<(const CTime& other)
{
	double t1 = this->hour * 3600 + this->min * 60 + this->sec;
	double t2 = other.hour * 3600 + other.min * 60 + other.sec;
	if (t1 < t2)
		return true;
	else
		return false;
}

int main()
{
	CTime t1(6, 35, 41.5);
	CTime t2(7, 45, 35.8);
	CTime t3;
	
	if (t1 < t2)
		t3 = t1;
	else
		t3 = t2;

	t3.show_time();
	return 0;
}