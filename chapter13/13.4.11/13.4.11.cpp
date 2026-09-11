#include<iostream>
#define NUMS 5
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
	{
	}
	CBodyfit()
	{
	}

	void show()
	{
		cout << "學生 " << id << ": 身高 = " << height << "公分, 體重 = " << weight << "公斤, BMI = " << bmi << endl;
	}

	static int compare(CBodyfit body[NUMS]);
	static void average(CBodyfit body[NUMS], int size);
};

int main()
{
	CBodyfit body[NUMS] =
	{
		CBodyfit('A', 160.9,50.8),
		CBodyfit('B', 180.3,78.2),
		CBodyfit('C', 160.5,45.5),
		CBodyfit('D', 152.7,65.6),
		CBodyfit('E', 192.7,95.1)
	};
	int i;
	for (i = 0; i < NUMS; i++)
	{
		body[i].show();
	}

	CBodyfit::compare(body);
	CBodyfit::average(body, NUMS);

	return 0;
}

int CBodyfit::compare(CBodyfit body[NUMS])
{
	int min_index = 0;
	int i;
	for (i = 1; i < NUMS; i++)
	{
		if (body[min_index].bmi > body[i].bmi)
		{
			min_index = i;
		}
	}

	cout << "學生" << body[min_index].id << "的BMI最小" << "\n";
	return min_index;
}

void CBodyfit::average(CBodyfit body[NUMS], int size)
{
	double avg = 0.0;
	double total = 0.0;
	int i;
	for (i = 0; i < NUMS; i++)
	{
		total += body[i].bmi;
	}
	avg = total / NUMS;

	cout << "平均BMI = " << avg << endl;
}