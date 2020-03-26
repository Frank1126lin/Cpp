#include <iostream>
using namespace std;

int main()
{
    int num =100;
    int a = 0;//个位
    int b = 0;//十位
    int c = 0;//百位
    while (num<1000)//循环语句，判断是不是水仙花数
        {
        a = num % 10;
        b = num / 10 % 10;
        c = num / 100;
        if (a*a*a + b*b*b + c*c*c == num)
            {
            cout<< num << endl;
            }
        num++; //自增；
        }
    return 0;
}