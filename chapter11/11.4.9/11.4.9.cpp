using namespace std;
#include<iostream>

enum Month
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main()
{
    int month = 0;
    cout << "請輸入欲查詢的月份(1~12)：";
    cin >> month;

    switch (month)
    {
    case(January):
    {
        cout << "January";
        break;
    }
    case(February):
    {
        cout << "February";
        break;
    }
    default:
    {
        cout << "more";
        break;
    }
    }

	return 0;
}
