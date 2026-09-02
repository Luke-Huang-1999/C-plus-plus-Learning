using namespace std;
#include<iostream>
#include<string>
#include <iomanip>
typedef struct student
{
	string id;
	string name;
	int mid_score;
	int final_score;
	int regular_score;
	double semester_score;
}data1;

void write_data1(data1 students[3]);
void print_data1(data1 students[3]);
void sort_ID(data1 students[3]);
void all_print(data1 students[3]);
void writed_data1(data1 students[3]);
void sort_score(data1 students[3]);

int main()
{
	//宣告
	data1 students[3];

	//紀錄資料
	//write_data1(students);
	writed_data1(students);
	//排序
	//sort_ID(students);
	sort_score(students);
	//列印
	all_print(students);

	return 0;
}

void write_data1(data1 students[3])
{
	int i;
	for (i = 0; i < 3; i++)
	{
		cout << "第" << i + 1 << "位學生" << "\n";
		cout << "請輸入學生ID：";
		getline(cin, students[i].id);

		cout << "請輸入學生姓名：";
		getline(cin, students[i].name);

		cout << "請輸入學生期中成績：";
		cin >> students[i].mid_score;

		cout << "請輸入學生期末成績";
		cin >> students[i].final_score;

		cout << "請輸入學生平時成績";
		cin >> students[i].regular_score;
		cin.ignore();

		//計算semester_score
		students[i].semester_score =
			students[i].mid_score * 0.3 +
			students[i].final_score * 0.3 +
			students[i].regular_score * 0.4;
	}
}

void print_data1(data1 students[3])
{
	//宣告
	string input;

	//接收變數
	cout << "請輸入欲查詢的學生ID：";
	getline(cin, input);

	//比較並列印
	int i;
	for (i = 0; i < 3; i++)
	{
		if ((input.compare(students[i].id)) == 0)
		{
			cout << "學生ID：" << students[i].id << endl;
			cout << "學生姓名：" << students[i].name << endl;
			cout << "學生期中成績：" << students[i].mid_score << endl;
			cout << "學生期末成績：" << students[i].final_score << endl;
			cout << "學生平時成績：" << students[i].regular_score << endl;
			cout << "學生學期成績：" << students[i].semester_score << endl;

			break;
		}
	}

	cout << "找不到該學生。\n";
}

void sort_ID(data1 students[3])
{
	//宣告
	data1 tmp;

	//由小到大
	if (students[0].id > students[1].id)
	{
		tmp = students[0];
		students[0] = students[1];
		students[1] = tmp;
	}
	if (students[1].id > students[2].id)
	{
		tmp = students[1];
		students[1] = students[2];
		students[2] = tmp;
	}

	if (students[0].id > students[1].id)
	{
		tmp = students[0];
		students[0] = students[1];
		students[1] = tmp;
	}
}

void all_print(data1 students[3])
{
	int i;

	for (i = 0; i < 3; i++)
	{
		cout << left << setw(7) << students[i].id << left << setw(15) << students[i].name << setw(4) << students[i].semester_score << "\n";
	}
}

void writed_data1(data1 students[3])
{
	students[0].id = "95003";
	students[0].name = "Tippi Lee";
	students[0].semester_score = 86.7;
	students[1].id = "95002";
	students[1].name = "Alice Wu";
	students[1].semester_score = 85.2;
	students[2].id = "95001";
	students[2].name = "Dodu Huang";
	students[2].semester_score = 92.3;
}

void sort_score(data1 students[3])
{
	//宣告
	data1 tmp;

	//由小到大
	if (students[0].semester_score < students[1].semester_score)
	{
		tmp = students[0];
		students[0] = students[1];
		students[1] = tmp;
	}
	if (students[1].semester_score < students[2].semester_score)
	{
		tmp = students[1];
		students[1] = students[2];
		students[2] = tmp;
	}

	if (students[0].semester_score < students[1].semester_score)
	{
		tmp = students[0];
		students[0] = students[1];
		students[1] = tmp;
	}
}