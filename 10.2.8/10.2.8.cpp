#define _CRT_SECURE_NO_WARNINGS
using namespace std;

#include<iostream>
#define ROW 2
#define COL 4

void a(int arr[ROW][COL]);
void b(int arr[ROW][COL]);
void c(int arr[ROW][COL]);
void d(int arr[ROW][COL]);
void e(int arr[ROW][COL]);
void f(int arr[ROW][COL]);
void all_data(int arr[ROW][COL]);

int main()
{
	int arr[ROW][COL] = { {2,3,4,5},{6,7,8,9} };
	a(arr);
	b(arr);
	c(arr);
	d(arr);
	e(arr);
	f(arr);
	all_data(arr);

	return 0;
}

void a(int arr[ROW][COL])
{
	cout << "(1)arr的值為何?\n";

	cout << "arr = " << arr;

	cout << "\n\n";
}

void b(int arr[ROW][COL])
{
	cout << "(2)arr[0]與arr[1]的值各是多少?\n";

	cout << "arr[0] = " << arr[0] << ", arr[1] = " << arr[1];

	cout << "\n\n";
}

void c(int arr[ROW][COL])
{
	cout << "(3)arr+1的值為何?\n";

	cout << "arr+1 = " << arr + 1;

	cout << "\n\n";
}

void d(int arr[ROW][COL])
{
	cout << "(4)*(arr+0)與*(arr+1)的值為何?\n";

	cout << "*(arr+0) = " << *(arr + 0) << ", *(arr+1) = " << *(arr + 1);

	cout << "\n\n";
}

void e(int arr[ROW][COL])
{
	cout << "(5)*(arr+1)+0、*(arr+1)+1、*(arr+1)+2、*(arr+1)+3的值各是多少?\n";

	cout << "*(arr+1)+0 = " << *(arr + 1) + 0 << "\n";
	cout << "*(arr+1)+1 = " << *(arr + 1) + 1 << "\n";
	cout << "*(arr+1)+2 = " << *(arr + 1) + 2 << "\n";
	cout << "*(arr+1)+3 = " << *(arr + 1) + 3 << "\n";

	cout << "\n";
}

void f(int arr[ROW][COL])
{
	cout << "(5)*(*(arr+1)+0)、*(*(arr+1)+1)、*(*(arr+1)+2)、*(*(arr+1)+3)的值各是多少?\n";

	cout << "*(*(arr+1)+0) = " << *(*(arr + 1) + 0) << "\n";
	cout << "*(*(arr+1)+1) = " << *(*(arr + 1) + 1) << "\n";
	cout << "*(*(arr+1)+2) = " << *(*(arr + 1) + 2) << "\n";
	cout << "*(*(arr+1)+3) = " << *(*(arr + 1) + 3) << "\n";

	cout << "\n";
}

void all_data(int arr[ROW][COL])
{
	int i, j;
	cout << "\n******相關資料如下******\n";
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			cout << "a[" << i << "][" << j << "] = " << arr[i][j] << ", 地址 = " << *(arr + i) + j << "\n";
		}
		cout << "\n";
	}
}