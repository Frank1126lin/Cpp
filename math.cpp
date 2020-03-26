#include <iostream>
using namespace std;

int main()
{
    //加减乘除
    int a = 10;
    int b = 3;

    cout<< a + b <<endl;
    cout<< a - b <<endl;
    cout<< a * b <<endl;
    cout<< a / b <<endl; //两个整数相除，结果依然是整数。

//    int c = 12;
//    int d = 0;
//    cout<< c / d <<endl;//除数不可以为零，零会报错；

    float a1 = 2.5; float b1 = 0.22;
    cout<< a1 / b1 <<endl; // 小数除以小数，结果可以是小数；

    return 0;
}