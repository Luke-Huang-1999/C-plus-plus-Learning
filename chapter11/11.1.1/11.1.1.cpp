#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>
#include<string>

typedef struct data
{
	string id;
	string name;
	int mid_score;
	int final_score;
	int regular_score;
	float term_grade;
}list;

void score(list* head);

list* create_newlist(list* head);

void print_data(list* head);

void term_grade_calculate(list* head);

int main()
{
	//宣告指標head
	list* head = nullptr;
	head = create_newlist(head);

	//紀錄相關資訊
	score(head);

	//計算學期成績
	term_grade_calculate(head);

	//列印學生資料
	print_data(head);

	//釋放記憶體
	delete(head);
	head = nullptr;

	return 0;
}

list* create_newlist(list* head)
{
	head = new list;
	if (head == nullptr)
	{
		cout << "create_newlist is failed.\n";
		exit(1);
	}

	//初始化
	head->mid_score = 0;
	head->final_score = 0;
	head->regular_score = 0;

	return head;
}

void score(list* head)
{
	list* current = head;
	cout << "請輸入學生ID：";
	getline(cin, current->id);
	cout << "請輸入學生姓名：";
	getline(cin, current->name);
	cout << "請輸入期中成績：";
	cin >> current->mid_score;
	cout << "請輸入期末成績：";
	cin >> current->final_score;
	cout << "請輸入平時成績：";
	cin >> current->regular_score;
}

void print_data(list* head)
{
	list* current = head;

	cout << current->id << endl;
	cout << current->name << endl;
	cout << "期中成績為 " << current->mid_score << endl;
	cout << "期末成績為 " << current->final_score << endl;
	cout << "平時成績 " << current->regular_score << endl;
	cout << "學期成績為 " << current->term_grade << endl;
}

void term_grade_calculate(list* head)
{
	list* current = head;

	current->term_grade =
		current->final_score * 0.3 +
		current->mid_score * 0.3 +
		current->term_grade * 0.4;
		/*(current->final_score + current->mid_score) * 0.3 +
		current->regular_score * 0.4;*/
}