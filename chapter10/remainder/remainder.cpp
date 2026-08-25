#define _CRT_SECURE_NO_WARNINGS
using namespace std;

#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>


/*
第一步：將寫好的程式生成exe檔。
第二步：路徑指向存放exe檔的資料夾
第三步：.\remainder.exe 5 3            //5 % 3

*/
int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        cout << "使用方式：remainder.exe a b\n";
        return 1;
    }

    int a = stoi(argv[1]);
    int b = stoi(argv[2]);
    int result = 0;
    result = a % b;

    cout << "result = " << result << "\n";

    return 0;
}
