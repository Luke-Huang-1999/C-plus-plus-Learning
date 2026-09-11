#include<iostream>
#include<string>

using namespace std;

class Employee
{
private:
	string id;
	string name;
	double salary;
	static int employee_nums;
public:
	Employee(string i, string n, double s) :id(i), name(n), salary(s)
	{
		employee_nums++;
	}

	void show(Employee emp[])
	{
		int i;
		for (i = 0; i < employee_nums; i++)
		{
			cout << "員工編號：" << emp[i].id << "\n"
				 << "姓名：" << emp[i].name << "\n"
				 << "薪資：" << emp[i].salary << "\n";
			cout << "\n";
		}
	}

	static void show_employee_count();
};

int Employee::employee_nums = 0;

int main()
{
	
	Employee emp[] =
	{
		Employee("E001", "Tom", 35000),
		Employee("E002","Mary", 42000),
		Employee("E003","John",38000)
	};

	emp[0].show(emp);

	Employee::show_employee_count();

	return 0;
}

void Employee::show_employee_count()
{
	cout << "公司人數：" << employee_nums << "人" << endl;
}