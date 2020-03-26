#include <iostream>

using namespace std;

int main()
{
    int arr[8] = {4, 3, 6, 7 , 9, 1, 3, 2};
    cout<< "排序前"<< endl;
    for (int i =0; i<8; i++)
        {
            cout<< arr[i] <<endl;
        }
    // 开始冒泡排序
    for (int i=0; i <8-1; i++)
    {
        for (int j=0; j<8-i-1; j++)
        {// 如果左边数字比右边 大，就互换；
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<< "排序后"<< endl;
    for (int i =0; i<8; i++)
        {
            cout<< arr[i] <<endl;
        }
    return 0;
}