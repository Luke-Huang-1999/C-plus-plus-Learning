using namespace std;
#include<iostream>
#include<string>

union other_info
{
	int speed;
	char Completed_military_service[10];
};

typedef struct personnel
{
	string name;
	string id;
	int gender;

	other_info info;
};

void write_info(personnel &person);
void print_info(personnel &person);

int main()
{
	//宣告
	personnel person;

	//寫入資料
	write_info(person);

	//列印
	print_info(person);

	return 0;

}

void write_info(personnel& person)
{
	cout << "姓名：";
	getline(cin, person.name);

	cout << "人事代號：";
	getline(cin, person.id);

	cout << "性別(1)男(2)女：";
	cin >> person.gender;
	cin.ignore();

	if (person.gender == 1)//男
	{
		cout << "是否役畢：";
		cin >> person.info.Completed_military_service;
	}

	if (person.gender == 2)//女
	{
		cout << "中文打字速度：";
		cin >> person.info.speed;
	}
}

void print_info(personnel& person)
{
	cout << "**** Output ****" << "\n";
	cout << "姓名：" << person.name << "\n";
	cout << "人事代號：" << person.id << "\n";
	if (person.gender == 1)
	{
		cout << "是否役畢：" << person.info.Completed_military_service;
	}
	if (person.gender == 2)
	{
		cout << "中文打字速度：" << person.info.speed;
	}
	
}