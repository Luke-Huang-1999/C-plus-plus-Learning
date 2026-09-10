#include<iostream>

using namespace std;

class CBodyfit
{
private:
	char id;
	double height;
	double weight;
	double bmi = weight / ((height / 100) * (height / 100));
public:
	CBodyfit(char i, double h, double w) :id(i), height(h), weight(w)
	{	}
	CBodyfit()
	{	}
	//void cal_bmi()
	//{
	//	bmi = weight / ((height / 100) * (height / 100));
	//}
	void show()
	{
		cout << "學生 " << id << ": 身高 = " << height << "公分, 體重 = " << weight << "公斤, BMI = " << bmi << endl;
	}

	friend int compare(CBodyfit body[5]);
};

int compare(CBodyfit body[5]);

int main()
{
	CBodyfit body[5] =
	{
		CBodyfit('A', 160.9,50.8),
		CBodyfit('B', 180.3,78.2),
		CBodyfit('C', 160.5,45.5),
		CBodyfit('D', 152.7,65.6),
		CBodyfit('E', 192.7,95.1)
	};
	int i;
	for (i = 0; i < 5; i++)
	{
		body[i].show();
	}
	
	compare(body);



	return 0;
}

int compare(CBodyfit body[5])
{
	int min_index = 0;
	int i;
	for (i = 1; i < 5; i++)
	{
		if (body[min_index].bmi > body[i].bmi)
		{
			min_index = i;
		}
	}

	cout << "學生" << body[min_index].id << "的BMI最小" << "\n";
	return min_index;
}