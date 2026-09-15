#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;


class Student
{
private:
	char* name;							//name 使用動態記憶體儲存學生姓名
	int score;							//score 儲存成績
public:
	Student(const char* n, int s)		//const==>防止透過 n 修改原字串。n 是指標傳值，s傳入的是位址的複本。
	{
		name = new char[strlen(n) + 1];	//建立一塊記憶體空間在Heap區，在stack區的name指標指向新建立的記憶體空間，大小會透過strlen()函數的返回值確認，又strlen()函數不包含'\0'，所以要再+1
		strcpy(name, n);				//透過strcpy()複製字串
		
		score = s;						//直接賦值s的複製給score使用
	}
	Student(const Student& student)		//建立拷貝子
	{
		name = new char[strlen(student.name) + 1];
		//建立一塊記憶體空間在Heap區，大小會透過strlen()函數的返回值確認，又strlen()函數不包含'\0'，所以要再+1。
		
		strcpy(name, student.name);
		//這裡用strcpy()函數複製student.name字串給name。
		//這樣的結果可以讓原本的指標name指向Heap區的"Luke"，
		//另一個透過拷貝子建立的物件成員name則指向另一塊Heap區的記憶體空間，並賦值"Luke"。
		//兩個不同地址的指標指向兩個不同地址但相同內容的記憶體空間"Luke"

		score = student.score;		//把原本 student 物件的 score 值，複製給目前正在建立的物件的 score。
	}
	~Student()//建立解構子
	{
		delete[]name;//透過函數delete()，釋放記憶體空間，後面[]是因為要釋放的是字串，要釋放的大小是(strlen(name) + 1)
		//刪除的順序是先刪除s2再刪除s1。
	}

	void show()
	{
		cout << name << ":" << score << endl;
	}

};

int main()
{
	Student s1("Luke", 90);
	Student s2 = s1;

	s1.show();
	s2.show();



	return 0;
}