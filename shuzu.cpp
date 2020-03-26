#include <iostream>
using namespace std;

int main()
{
//数组

/*
1. 数据类型 数组名[数组长度]；
2. 数据类型 数组名[数组长度] = {值1，值2，...}; //如果初始化中，值数量不足，使用0填补；
3. 数据类型 数组名[] = {值1，值2，...};
*/

    int arr[5] = {10, 20, 30};
    for (int i = 0; i<5; i++)
    {
    cout<< arr[i] <<endl;
    }
    return 0;
}