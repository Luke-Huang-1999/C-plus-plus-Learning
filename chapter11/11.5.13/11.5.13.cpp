using namespace std;

#include<iostream>
#include<iomanip>

typedef struct my_time
{
	int hour;
	int minute;
	float second;
}times;


void time_diff();

int main()
{
	time_diff();

	return 0;
}

void time_diff()
{
	float t0, t1, t2;
	times t[3];
	t[0] = { 6, 24, 17.43f };
	t[1] = { 3, 40, 45.58f };
	t[2] = { 0 };

	t0 = t[0].hour * 60 * 60 + t[0].minute * 60 + t[0].second;
	t1 = t[1].hour * 60 * 60 + t[1].minute * 60 + t[1].second;
	t2 = t0 - t1;
	t[2].hour = t2 / (60 * 60);
	t[2].minute = (t2 - t[2].hour * 3600) / 60;
	t[2].second = t2 - t[2].hour * 3600 - t[2].minute * 60;

	cout << "t[0] = " << setfill('0') << setw(2) << t[0].hour << ":" << setfill('0') << setw(5) << setfill('0') << setw(2) << t[0].minute << ":" << fixed << setprecision(2) << t[0].second << "\n";
	cout << "t[1] = " << setfill('0') << setw(2) << t[1].hour << ":" << setfill('0') << setw(5) << setfill('0') << setw(2) << t[1].minute << ":" << fixed << setprecision(2) << t[1].second << "\n";
	cout << "t[2] = " << setfill('0') << setw(2) << t[2].hour << ":" << setfill('0') << setw(5) << setfill('0') << setw(2) << t[2].minute << ":" << fixed << setprecision(2) << t[2].second << "\n";
}