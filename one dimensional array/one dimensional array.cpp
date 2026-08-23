#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>
#include<string>
#define MAX 5
#define STUDENT_NUMS 100
#define ROW 3
#define COL 5

void merge(int data1[MAX], int data2[MAX], int data3[MAX]);
void average(double data[MAX]);
void average_stu(int score[STUDENT_NUMS]);
void sellmans_total_sales(int goods_cnt[ROW][COL], int price[COL]);
int sellmans_total_sales_data[ROW] = { 0 };

void goods_total_sales(int goods_cnt[ROW][COL], int price[COL]);
int goods_total_sales_data[COL] = { 0 };

void find_best_salesman(int sellmans_total_sales_data[ROW]);
void find_best_goods(int goods_total_sales_data[COL]);

void find_min(int A[2][3]);
void print_data_3d(int A[2][2][2]);

void matrix_multiplication(int a[3][3], int b[3][2], int c[3][2]);

int main()
{
	//int price[COL] = { 12,16,10,14,15 };
	//int goods_cnt[ROW][COL] = {
	//	{33,32,56,45,33},
	//	{77,33,68,45,23},
	//	{43,55,43,67,65} };
	/*int a[3][3] = { {3,2,1},{5,6,7},{2,4,6} };
	int b[3][2] = { {2,3},{3,4},{6,2} };
	int c[3][2] = { 0 };

	matrix_multiplication(a, b, c);*/

	//sellmans_total_sales(goods_cnt, price);
	//goods_total_sales(goods_cnt, price);
	//find_best_salesman(sellmans_total_sales_data);
	//find_best_goods(goods_total_sales_data);


	return 0;
}

void merge(int data1[MAX], int data2[MAX], int data3[MAX])
{
	int tmp;
	int i = 0;//控制data1
	int j = 0;//控制data2
	int k = 0;//控制data3
	//data1 sort
	for (i = 0; i < (MAX - 1); i++)
	{
		for (j = 0; j < (MAX - 1 - i); j++)
		{
			if (data1[j] < data1[j + 1])
			{
				tmp = data1[j];
				data1[j] = data1[j + 1];
				data1[j + 1] = tmp;
			}
		}
	}

	//data2 sort
	for (i = 0; i < (MAX - 1); i++)
	{
		for (j = 0; j < (MAX - 1 - i); j++)
		{
			if (data2[j] < data2[j + 1])
			{
				tmp = data2[j];
				data2[j] = data2[j + 1];
				data2[j + 1] = tmp;
			}
		}
	}

	//data3 merge
	i = 0;
	j = 0;
	while (i < 5 && j < 5)
	{
		if (data1[i] > data2[j])
			data3[k++] = data1[i++];

		if (data1[i] < data2[j])
			data3[k++] = data2[j++];
	}
	while (k < 10)
	{
		if (i == 5)
			data3[k++] = data2[j++];
		if (j == 5)
			data3[k++] = data1[i++];
	}


	for (i = 0; i < 10; i++)
	{
		cout << data3[i] << " ";
	}
}

void average(double data[MAX])
{
	int i;
	double total = 0.0;
	cout << "請輸入5個浮點數：" << "\n";
	for (i = 0; i < MAX; i++)
	{
		cout << "Input number #" << i + 1 << ":";
		cin >> data[i];
	}

	for (i = 0; i < MAX; i++)
	{
		total = total + data[i];
	}

	cout << "Average of all is " << (total / MAX) << "\n";
}

void average_stu(int score[STUDENT_NUMS])
{
	cout << "Enter -1 stopping input!!" << "\n";
	int i = 0;
	while (i < STUDENT_NUMS)
	{
		cout << "Input score : ";
		cin >> score[i];
		if (score[i] == -1)
			break;
		i++;
	}
	int nums = i - 1;
	double total = 0.0;
	while (nums >= 0)
	{
		total = total + score[nums--];
	}

	cout << "Average of all is " << (total / i) << "\n";
}

void sellmans_total_sales(int goods_cnt[ROW][COL], int price[COL])
{
	int i, j, tmp;
	for (i = 0; i < ROW; i++)
	{
		int total = 0;
		for (j = 0; j < COL; j++)
		{
			tmp = price[j] * goods_cnt[i][j];
			total = total + tmp;
		}
		cout << "salesman" << "[" << i + 1 << "]" << "==>" << total << "\n";
		sellmans_total_sales_data[i] = total;
	}

}

void goods_total_sales(int goods_cnt[ROW][COL], int price[COL])
{
	int i, j, tmp, total = 0;
	for (i = 0; i < COL; i++)
	{
		total = 0;
		for (j = 0; j < ROW; j++)
		{
			tmp = price[i] * goods_cnt[j][i];
			total = total + tmp;
		}
		goods_total_sales_data[i] = total;
		cout << "goods" << "[" << i + 1 << "]" << "==> " << total << "\n";
	}


}

void find_best_salesman(int sellmans_total_sales_data[ROW])
{
	int max = sellmans_total_sales_data[0];
	int max_index = 0;
	int i;
	for (i = 1; i < ROW; i++)
	{
		if (max < sellmans_total_sales_data[i])
		{
			max = sellmans_total_sales_data[i];
			max_index = i;
		}
	}
	cout << "Best salesman is " << max_index + 1 << "\n";
}

void find_best_goods(int goods_total_sales_data[COL])
{
	int i;
	int max = goods_total_sales_data[0];
	int max_index = 0;
	for (i = 1; i < COL; i++)
	{
		if (max < goods_total_sales_data[i])
		{
			max = goods_total_sales_data[i];
			max_index = i;
		}

	}
	cout << "Best goods is " << max_index + 1 << "\n";

}

void find_min(int A[2][3])
{
	int min = A[0][0];
	int i, j;
	int row_index = 0;
	int col_index = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (min > A[i][j])
			{
				min = A[i][j];
				row_index = i;
				col_index = j;
			}
		}
	}
	cout << "最小值註標為" << "[" << row_index << "]" << "[" << col_index << "], 其值為" << min << "\n";
}

void print_data_3d(int A[2][2][2])
{
	int i, j, k;
	int sum = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 2; k++)
			{
				cout << "A[" << i << "][" << j << "][" << k << "] = " << A[i][j][k] << "\n";
				sum += A[i][j][k];
			}
		}
	}
	cout << "sum = " << sum;
}

void matrix_multiplication(int a[3][3], int b[3][2], int c[3][2])
{
	int i, j, k;
	int a_data = 0;
	int b_data = 0;
	int tmp = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 3; k++)
			{
				a_data = a[i][k];
				b_data = b[k][j];
				tmp += a_data * b_data;
			}
			c[i][j] = tmp;
			tmp = 0;
		}
	}

	//print c[][]
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "c[" << i << "][" << j << "] = " << c[i][j] << "\n";
		}
	}



}