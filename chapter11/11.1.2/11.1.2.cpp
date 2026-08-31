#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>
#include<iomanip>

typedef struct date
{
	int year;
	int month;
	int day;
}block;

block* create_newblock(block* head);
void input_data(block* head);
void print_data(block* head);
void delete_block(block* head);

int main()
{
	//宣告
	block* head= nullptr;

	//動態記憶體配置
	head = create_newblock(head);

	//紀錄資料
	input_data(head);

	//輸出資料
	print_data(head);

	//釋放記憶體
	delete_block(head);

	return 0;
}

block* create_newblock(block* head)
{
	head = new block;
	if (head == nullptr)
	{
		cout << "create_newblock is failed.\n";
		exit(1);
	}

	//初始化
	head->year = 0;
	head->month = 0;
	head->day = 0;

	return head;
}

void input_data(block* head)
{
	block* current = head;
	cout << "請輸入年份yyyy：";
	cin >> current->year;

	cout << "請輸入月份mm：";
	cin >> current->month;

	cout << "請輸入日期dd：";
	cin >> current->day;
}

void print_data(block* head)
{
	block* current = head;
	cout << setw(2) << setfill('0') << current->month << "/";
	cout << setw(2) << setfill('0') << current->day << "/";
	cout << setw(4) << setfill('0') << current->year << "\n";
}

void delete_block(block* head)
{
	delete(head);
	head = nullptr;
}