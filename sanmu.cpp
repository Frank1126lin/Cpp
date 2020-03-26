#include<iostream>
using namespace std;
int main()
{
// 三目运算符 表达式1 ？ 表达式2 ： 表达式3
// 判断表达式1 是否成立，如成立，执行表达式2，如不成立，执行表达式3；

 int a = 10;
 int b = 20;
 int c = 0;
 c = (a > b ? a : b);
 cout<< "c的值为："<< c << endl;
 // 三目运算符返回的是一个变量，可以进行赋值；
( a<b ? a : b) = 100 ;
 cout<< "a的值为："<< a << endl;
 cout<< "b的值为："<< b << endl;

 return 0;

}