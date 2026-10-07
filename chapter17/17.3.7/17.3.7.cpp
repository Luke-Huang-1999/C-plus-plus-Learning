#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

class AbstractBMI
{
protected:
	double height;//單位:公分/英吋
	double weight;//單位:公斤/英鎊
public:
	AbstractBMI(double h, double w) :height(h), weight(w) {};
	virtual double calculateBMI() = 0;
	virtual void show() = 0;
};

class KiloBMI :public AbstractBMI
{
public:
	KiloBMI(double h, double w) :AbstractBMI(h, w) {};
	virtual double calculateBMI()
	{
		return weight / ((height / 100)* (height / 100));
	}
	virtual void show()
	{
		cout << "身高 " << height << "公分, 體重 " << weight << "公斤, BMI = " << calculateBMI() << endl;
	}
};

class LbBMI :public AbstractBMI
{
public:
	LbBMI(double h, double w) :AbstractBMI(h, w) {};
	virtual double calculateBMI()
	{
		return (703 * weight) / (height * height);
	}
	virtual void show()
	{
		cout << "身高 " << height << "英吋, 體重 " << weight << "英鎊, BMI = " << calculateBMI() << endl;
	}

};

int main()
{
	KiloBMI KBMI(170, 65);
	LbBMI LBMI(70, 150);

	KBMI.show();
	LBMI.show();


	return 0;
}