#include <iostream>
using namespace std;

int main()
{
//数组名的用途
//1. 通过数组名计算数组占用内存大小
   int arr[5] ={1,2,3,4,5} ;
   cout << "每个数组占用空间大小：" << sizeof(arr[0]) << endl;
   cout <<"数组占用空间大小：" << sizeof(arr) << endl;
   cout <<"数组中元素数量：" <<sizeof(arr)/sizeof(arr[0]) << endl;

   //2. 通过数组名查看数组首地址；
//   cout << "数组首地址为："<< arr << endl;
   cout << "数组首地址为："<< (long)arr << endl;
//   cout <<"数组首个元素地址为："<< &arr[0] << endl;
   cout <<"数组首个元素地址为："<< (long)&arr[0] << endl;
      cout <<"数组首个元素地址为："<< (long)&arr[1] << endl;
   return 0;

}