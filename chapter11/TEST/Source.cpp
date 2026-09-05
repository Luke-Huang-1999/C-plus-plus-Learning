using namespace std;
#include<iostream>

//建立結構體
struct Student
{
    string name;
    int age;
    float score;
};

void print_student(Student student[3]);

void change_score(Student& student);

void change_age(Student* ptr);

int main()
{
    Student student[3] = { {"Luke", 27, 85.5f},{"Amy",20,92.0f},{"John", 22,76.5f} };
    Student* ptr = student;

    print_student(student);

	return 0;
}

void print_student(Student student[3])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        cout << "Name = " << student[i].name << "\n";
        cout << "Age = " << student[i].age << "\n";
        cout << "Score = " << student[i].score << "\n\n";
    }
    
}

void change_score(Student& student)
{
    student.score = 90.0f;
}

void change_age(Student* ptr)
{
    ptr->age = 30;
}