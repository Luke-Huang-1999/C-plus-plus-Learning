using namespace std;
#include<iostream>
#include<string>
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

int main()
{
	//宣告
	data1 students[3];

	//紀錄資料
	write_data1(students);

	//選擇列印
	print_data1(students);
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