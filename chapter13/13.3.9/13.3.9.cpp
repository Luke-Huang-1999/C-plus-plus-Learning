#include<iostream>
#define NUMS 5
using namespace std;


class CSale
{
private:
	char id;
	int quantity;
	int price;
	int incomes = quantity * price;
public:
	CSale(char i, int q, int p):id(i),quantity(q),price(p)
	{ }
	CSale()
	{ }
	void show()
	{
		cout << "產品編號：" << id << ", 銷售數量 = " << quantity << ", 單價 = " << price << ", 銷售額 = " << incomes << endl;
	}

	friend int compare(CSale goods[NUMS]);
	CSale& few(CSale goods[NUMS])
	{
		int i;
		int min_index = 0;
		for (i = 1; i < NUMS; i++)
		{
			if (goods[min_index].incomes > goods[i].incomes)
				min_index = i;
		}
		return  goods[min_index];
	}
	char few_show()
	{
		return id;
	}
};

int compare(CSale goods[NUMS]);

int main()
{
	CSale goods[NUMS] =
	{
		CSale('A', 20, 2),
		CSale('B', 10, 100),
		CSale('C', 15, 200),
		CSale('D', 12, 10),
		CSale('E', 6, 30)
	};
	int i;
	CSale lowest = goods[0].few(goods);

	for (i = 0; i < NUMS; i++)
	{
		goods[i].show();
	}

	compare(goods);

	cout << "銷售額最少的是 = " << lowest.few_show();
	

	return 0;
}

int compare(CSale goods[NUMS])
{
	int i;
	int max_index = 0;
	for (i = 1; i < NUMS; i++)
	{
		if (goods[max_index].incomes < goods[i].incomes)
			max_index = i;
	}

	cout << "銷售額最高的商品 = " << goods[max_index].id << endl;

	return  max_index;
}