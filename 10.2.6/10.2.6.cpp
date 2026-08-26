#define _CRT_SECURE_NO_WARNINGS
using namespace std;

#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>

#define ROW 2
#define COL 3
void add(int a[ROW][COL], int b[ROW][COL], int c[ROW][COL]);

int main()
{
	int a[ROW][COL] = { { 2,2,6 }, {3,2,8} };
	int b[ROW][COL] = { { 5,2,3 }, {3,3,7} };
	int c[ROW][COL] = { 0 };

	
	int i, j;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			cout << *(*(c + i) + j) << " ";
		{
		cout << "\n";
	{
	
	return 0;
}

void add(int a[ROW][COL], int b[ROW][COL], int c[ROW][COL])
{
	int i, j;
	int result = 0;
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			result = *(*(a + i) + j) + *(*(b + i) + j);
			*(*(c + i) + j) = result;
		}
	}
}