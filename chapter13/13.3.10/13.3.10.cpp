#include<iostream>
#include<string>
using namespace std;

class Car
{
private:
	string id;
	int quantity;
	int price;
	int sale;
public:
	void show()
	{
		cout << "車款：" << id << ", 銷售數量" << quantity << "台, 單價 = " << price << "萬元, 銷售額 = " << sale << "萬元\n";
	}

	friend void set_data(Car data[2]);
};

void set_data(Car data[2]);

int main()
{
	Car data[2];
	set_data(data);

	int i;
	for (i = 0; i < 2; i++)
	{
		data[i].show();
	}

	return 0;
}

void set_data(Car data[2])
{
	data[0].id = "ix M60";
	data[0].quantity = 3;
	data[0].price = 638;
	data[0].sale = data[0].quantity * data[0].price;
	data[1].id = "x5 M Sport";
	data[1].quantity = 5;
	data[1].price = 392;
	data[1].sale = data[1].quantity * data[1].price;
}