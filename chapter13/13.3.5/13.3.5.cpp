#include<iostream>

using namespace std;

class CBodyfit
{
private:
	char id;
	double height;
	double weight;
	double bmi;
public:
	CBodyfit(char i, double h, double w) :id(i), height(h), weight(w)
	{	}
	CBodyfit()
	{
	}
	void show()
	{
		bmi = weight / ((height / 100) * (height / 100));
		cout << "學生 " << id << ": 身高 = " << height << "公分, 體重 = " << weight << "公斤, BMI = " << bmi << endl;
	}
	CBodyfit compare(CBodyfit body)
	{
		if (this->bmi > body.bmi)//呼叫者較大
		{
			cout << "學生" << this->id << "的BMI較大" << "\n";
			return *this;
		}
		else
		{
			cout << "學生" << body.id << "的BMI較大" << "\n";
			return body;
		}
	}
};



int main()
{
	CBodyfit stu1('A', 160.5, 45.5);
	CBodyfit stu2('B', 180.3, 78.2);
	CBodyfit result;

	stu1.show();
	stu2.show();
	result = stu1.compare(stu2);

	return 0;
}

