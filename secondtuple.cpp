#include <iostream>
using namespace std;

int main()
{
//二维数组；
//第一种定义方式：
//    int arr[2][3] ={{1,2,3},{4,5,6}};
//    for (int i=0; i<2; i++)
//    {
//        for (int j=0; j<3; j++)
//        {
//            cout<< arr[i][j]<<" ";
//        }
//        cout << endl;
//    }
//第二种定义方式：
    int arr[2][3] ={1,2,3,4,5,6};
    for (int i=0; i<2; i++)
    {
        for (int j=0; j<3; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout << endl;
    }

    cout<<"二维数组的占用空间："<<sizeof(arr)<<endl;
    cout<<"第一行的占用空间："<<sizeof(arr[0])<<endl;
    cout<<"第一个元素的占用空间："<<sizeof(arr[0][0])<<endl;

    cout<<"二维数组的行数"<<sizeof(arr) / sizeof(arr[0]) <<endl;
    cout<<"二维数组的列数"<<sizeof(arr[0]) / sizeof(arr[0][0]) <<endl;

    cout<<"二维数组的首地址"<< (long)arr <<endl;
    cout<<"二维数组的第一行首地址"<< (long)arr[0] <<endl;
    cout<<"二维数组的第二行首地址"<< (long)arr[1] <<endl;

    cout<<"二维数组的第一行第一个元素首地址"<< (long)&arr[0][0] <<endl;
    cout<<"二维数组的第一行第二个元素首地址"<< (long)&arr[0][1] <<endl;
    return 0;
}
