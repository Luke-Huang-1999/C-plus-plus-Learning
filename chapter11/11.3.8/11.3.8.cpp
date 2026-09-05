using namespace std;
#include<iostream>

union Data
{
	int num1;
	float num2;
};

void recieve_data(Data square);

int main()
{

	Data square = { 0 };

	recieve_data(square);

	return 0;
}

void recieve_data(Data square)
{
	int mode = 0;
	cout << "(1)以整數計算平方值\n";
	cout << "(2)以浮點數計算平方值\n";
	cout << "請輸入(1)或(2)：";
	cin >> mode;

	if (mode == 1)
	{
		cout << "輸入整數：";
		cin >> square.num1;
		cout << "\n**** Output ****\n";
		cout << "Result = " << square.num1 * square.num1;
	}
	else if (mode == 2)
	{
		cout << "輸入浮點數：";
		cin >> square.num2;
		cout << "\n**** Output ****\n";
		cout << "Result = " << square.num2 * square.num2;
	}
	else
	{
		cout << "輸入錯誤。\n";
	}

}