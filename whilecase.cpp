#include <iostream>
using namespace std;

int main()
{
    //使用while输出0-9；
    int num =0;
    while (num<10) //注意循环结束条件，不能为无限循环（特殊情况除外）；
    {
        cout<<num<<endl;
        num++;
    }
}