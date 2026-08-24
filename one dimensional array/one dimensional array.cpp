#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>
#include<string>
#include<iomanip>

#define MAX 5
#define STUDENT_NUMS 100
#define ROW 3
#define COL 5

void merge(int data1[MAX], int data2[MAX], int data3[MAX]);
void average(double data[MAX]);
void average_stu(int score[STUDENT_NUMS]);
void sellmans_total_sales(int goods_cnt[ROW][COL], int price[COL]);
int sellmans_total_sales_data[ROW] = { 0 };

void goods_total_sales(int goods_cnt[ROW][COL], int price[COL]);
int goods_total_sales_data[COL] = { 0 };

void find_best_salesman(int sellmans_total_sales_data[ROW]);
void find_best_goods(int goods_total_sales_data[COL]);

void find_min(int A[2][3]);
void print_data_3d(int A[2][2][2]);

void matrix_multiplication(int a[3][3], int b[3][2], int c[3][2]);

void find_min_max(int a[4][3]);

void create_alphabet(char alphabet[26]);
string alphabet_to_string(char alphabet[26], string alpha);
void reverse(char str[20]);
void find_vowel();
void repeat(int times, string str);

void cmp_string();

void assign(string &str1, string &str2);
void compare(string str1, string str2);

void input_string(string& str1,string &str2);
int find_str2(string str1, string str2);

void month_print();

void calculate_str();

void score_system();

void print_season();

int main()
{

	print_season();

	return 0;
}

void merge(int data1[MAX], int data2[MAX], int data3[MAX])
{
	int tmp;
	int i = 0;//控制data1
	int j = 0;//控制data2
	int k = 0;//控制data3
	//data1 sort
	for (i = 0; i < (MAX - 1); i++)
	{
		for (j = 0; j < (MAX - 1 - i); j++)
		{
			if (data1[j] < data1[j + 1])
			{
				tmp = data1[j];
				data1[j] = data1[j + 1];
				data1[j + 1] = tmp;
			}
		}
	}

	//data2 sort
	for (i = 0; i < (MAX - 1); i++)
	{
		for (j = 0; j < (MAX - 1 - i); j++)
		{
			if (data2[j] < data2[j + 1])
			{
				tmp = data2[j];
				data2[j] = data2[j + 1];
				data2[j + 1] = tmp;
			}
		}
	}

	//data3 merge
	i = 0;
	j = 0;
	while (i < 5 && j < 5)
	{
		if (data1[i] > data2[j])
			data3[k++] = data1[i++];

		if (data1[i] < data2[j])
			data3[k++] = data2[j++];
	}
	while (k < 10)
	{
		if (i == 5)
			data3[k++] = data2[j++];
		if (j == 5)
			data3[k++] = data1[i++];
	}


	for (i = 0; i < 10; i++)
	{
		cout << data3[i] << " ";
	}
}

void average(double data[MAX])
{
	int i;
	double total = 0.0;
	cout << "請輸入5個浮點數：" << "\n";
	for (i = 0; i < MAX; i++)
	{
		cout << "Input number #" << i + 1 << ":";
		cin >> data[i];
	}

	for (i = 0; i < MAX; i++)
	{
		total = total + data[i];
	}

	cout << "Average of all is " << (total / MAX) << "\n";
}

void average_stu(int score[STUDENT_NUMS])
{
	cout << "Enter -1 stopping input!!" << "\n";
	int i = 0;
	while (i < STUDENT_NUMS)
	{
		cout << "Input score : ";
		cin >> score[i];
		if (score[i] == -1)
			break;
		i++;
	}
	int nums = i - 1;
	double total = 0.0;
	while (nums >= 0)
	{
		total = total + score[nums--];
	}

	cout << "Average of all is " << (total / i) << "\n";
}

void sellmans_total_sales(int goods_cnt[ROW][COL], int price[COL])
{
	int i, j, tmp;
	for (i = 0; i < ROW; i++)
	{
		int total = 0;
		for (j = 0; j < COL; j++)
		{
			tmp = price[j] * goods_cnt[i][j];
			total = total + tmp;
		}
		cout << "salesman" << "[" << i + 1 << "]" << "==>" << total << "\n";
		sellmans_total_sales_data[i] = total;
	}

}

void goods_total_sales(int goods_cnt[ROW][COL], int price[COL])
{
	int i, j, tmp, total = 0;
	for (i = 0; i < COL; i++)
	{
		total = 0;
		for (j = 0; j < ROW; j++)
		{
			tmp = price[i] * goods_cnt[j][i];
			total = total + tmp;
		}
		goods_total_sales_data[i] = total;
		cout << "goods" << "[" << i + 1 << "]" << "==> " << total << "\n";
	}


}

void find_best_salesman(int sellmans_total_sales_data[ROW])
{
	int max = sellmans_total_sales_data[0];
	int max_index = 0;
	int i;
	for (i = 1; i < ROW; i++)
	{
		if (max < sellmans_total_sales_data[i])
		{
			max = sellmans_total_sales_data[i];
			max_index = i;
		}
	}
	cout << "Best salesman is " << max_index + 1 << "\n";
}

void find_best_goods(int goods_total_sales_data[COL])
{
	int i;
	int max = goods_total_sales_data[0];
	int max_index = 0;
	for (i = 1; i < COL; i++)
	{
		if (max < goods_total_sales_data[i])
		{
			max = goods_total_sales_data[i];
			max_index = i;
		}

	}
	cout << "Best goods is " << max_index + 1 << "\n";

}

void find_min(int A[2][3])
{
	int min = A[0][0];
	int i, j;
	int row_index = 0;
	int col_index = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (min > A[i][j])
			{
				min = A[i][j];
				row_index = i;
				col_index = j;
			}
		}
	}
	cout << "最小值註標為" << "[" << row_index << "]" << "[" << col_index << "], 其值為" << min << "\n";
}

void print_data_3d(int A[2][2][2])
{
	int i, j, k;
	int sum = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 2; k++)
			{
				cout << "A[" << i << "][" << j << "][" << k << "] = " << A[i][j][k] << "\n";
				sum += A[i][j][k];
			}
		}
	}
	cout << "sum = " << sum;
}

void matrix_multiplication(int a[3][3], int b[3][2], int c[3][2])
{
	int i, j, k;
	int a_data = 0;
	int b_data = 0;
	int tmp = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			for (k = 0; k < 3; k++)
			{
				a_data = a[i][k];
				b_data = b[k][j];
				tmp += a_data * b_data;
			}
			c[i][j] = tmp;
			tmp = 0;
		}
	}

	//print c[][]
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++)
		{
			cout << "c[" << i << "][" << j << "] = " << c[i][j] << "\n";
		}
	}



}

void find_min_max(int a[4][3])
{
	int i, j;
	int min = a[0][0];
	int max = a[0][0];
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (min > a[i][j])
				min = a[i][j];

			if (max < a[i][j])
				max = a[i][j];
		}
	}

	cout << "elements in array:\n";
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

	cout << "maximum = " << max << "\n";
	cout << "minimum = " << min << "\n";
}

void create_alphabet(char alphabet[26])
{
	char al;
	int i = 0;
	for (al = 'A'; al <= 'Z'; al++)
	{
		alphabet[i++] = al;
	}

}

string alphabet_to_string(char alphabet[26], string alpha)
{
	int i;
	for (i = 0; i < 26; i++)
	{
		alpha += alphabet[i];
	}
	return alpha;
}

void reverse(char str[20])
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	i -= 1;
	for (; i >= 0; i--)
	{
		cout << str[i];
	}

}

void find_vowel()
{
	//遇到空白就停止
	//string str;
	//cout << "請輸入字串：";
	//cin >> str;
	int cnt_a = 0;
	int cnt_e = 0;
	int cnt_i = 0;
	int cnt_o = 0;
	int cnt_u = 0;
	int cnt_other = 0;
	
	//遇到空白不停止，直到\n
	string str;
	cout << "請輸入字串：";
	getline(cin, str);
	
	cout << "輸入的字串為" << str << "\n";
	cout << "出現A,E,I,O,U字母與其他字元的次數如下\n";
	int i;
	for (i = 0; i < str.length(); i++)
	{
		if (str[i] == 'A' || str[i] == 'a')
			cnt_a++;
		else if (str[i] == 'E' || str[i] == 'e')
			cnt_e++;
		else if (str[i] == 'I' || str[i] == 'i')
			cnt_i++;
		else if (str[i] == 'O' || str[i] == 'o')
			cnt_o++;
		else if (str[i] == 'U' || str[i] == 'u')
			cnt_u++;
		else
			cnt_other++;
	}
	cout << "A,a = " << cnt_a << "\n";
	cout << "E,e = " << cnt_e << "\n";
	cout << "I,i = " << cnt_i << "\n";
	cout << "O,o = " << cnt_o << "\n";
	cout << "U,u = " << cnt_u << "\n";
	cout << "other = " << cnt_other << "\n";


}

void repeat(int times, string str)
{
	int i;
	for (i = 1; i <= times; i++)
	{
		cout << str << "\n";
	}

}

void cmp_string()
{
	string str1, str2;
	cout << "請輸入第一個字串：";
	getline(cin, str1);
	cout << "請輸入第二個字串：";
	getline(cin, str2);

	cout << "字串一的長度 = " << str1.length() << "\n";
	cout << "字串二的長度 = " << str2.length() << "\n";
	if ((str1.compare(str2)) == 0)
		cout<<"兩個字串相同"<<"\n";
	else
		cout << "兩個字串不相同" << "\n";
}

void assign(string &str1, string &str2)
{
	str1 = "Pratice makes perfect";
	str2 = "Pratice makes perfect";
	//str2 = "Haste makes waste";
}

void compare(string str1, string str2)
{
	int cmp = 0;
	cmp = str1.compare(str2);
	if (cmp == 0)
		cout << "兩字串相同" << "\n";
	else
		cout << "兩字串不相同" << "\n";

}

void input_string(string& str1, string& str2)
{
	cout << "請輸入一個字串：";
	getline(cin, str1);

	cout << "請輸入要找的單字：";
	getline(cin, str2);
}

int find_str2(string str1, string str2)
{
	int find_index = str1.find(str2);

	return find_index;

}

void month_print()
{
	string month[12] = { "January","Febuary","March","April","May","June","July","August","September","October","November","December" };
	int month_index = 0;
	cout << "請輸入1~12任意整數：";
	cin >> month_index;

	cout << month_index << "月份的英文是" << month[month_index - 1] << "\n";
}

void calculate_str()
{
	string str[5];
	int i;
	int cnt = 0;
	for (i = 1; i <= 5; i++)
	{
		cout << "Input string #" << i << ":";
		getline(cin, str[i - 1]);
	}

	for (i = 0; i < 5; i++)
	{
		cnt += str[i].length();
	}

	cout << "字串共有" << cnt << "個字元數\n";
}

void score_system()
{
	string name[5];
	int i;
	int score[5] = { 0 };
	int total = 0;
	double avg = 0.0;
	for (i = 0; i < 5; i++)
	{
		cout << "請輸入第" << i + 1 << "位學生的姓名：";
		getline(cin, name[i]);
	}

	for (i = 0; i < 5; i++)
	{
		cout << "請輸入第" << i + 1 << "位同學的成績";
		cin >> score[i];
	}

	for (i = 0; i < 5; i++)
	{
		total += score[i];
	}

	avg = total / 5.0;

	for (i = 0; i < 5; i++)
	{
		cout << setw(15) << name[i];
	}
	cout << "\n";
	for (i = 0; i < 5; i++)
	{
		cout << setw(15) << score[i];
	}
	
	cout << "平均 = " << avg;
}

void print_season()
{
	string season[4] = { "Spring","Summer","Autumn","Winter" };
	cout << "請輸入月份：";
	int month_index = 0;
	cin >> month_index;

	if (month_index == 3 || month_index == 4 || month_index == 5)
		cout << season[0];
	else if(month_index == 6 || month_index == 7 || month_index == 8)
		cout << season[1];
	else if(month_index == 9 || month_index == 10 || month_index == 11)
		cout << season[2];
	else if(month_index == 12 || month_index == 1 || month_index == 2)
		cout << season[3];

}