#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>

struct temp
{
	double degree_of_f;
	double degree_of_c;
};

int main()
{
	temp data = { 0.0,0.0 };
	int mode = 0;
	cout << "(1)華氏->攝氏\n(2)攝氏->華氏\n";
	cout << "請選擇(1)或(2)：";
	cin >> mode;
	if (mode == 1)					//(1)華氏->攝氏
	{
		cout << "請輸入華氏溫度：";
		cin >> data.degree_of_f;
		data.degree_of_c = data.degree_of_f * (5.0 / 9) - 160.0 / 9;

		cout << "\n**** 輸出 ****\n";
		cout << "華氏 " << data.degree_of_f << "度 = 攝氏溫度 " << data.degree_of_c << " 度\n";
	}
	else if (mode == 2)				//(2)攝氏->華氏
	{
		cout << "請輸入攝氏溫度：";
		cin >> data.degree_of_c;
		data.degree_of_f = data.degree_of_c * (9.0 / 5) + 32;

		cout << "\n**** 輸出 ****\n";
		cout << "攝氏 " << data.degree_of_c << "度 = 攝氏溫度 " << data.degree_of_f << " 度\n";
	}



	return 0;
}