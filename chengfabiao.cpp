#include <iostream>
using namespace std;

int main()
{
//打印9*9乘法表
for (int i = 1; i<10; i++)
    {
     for (int j = 1 ; j <= i ; j++)
         {
            cout<< j << "*" << i << "=" <<i*j<<endl;
         }
    }
    return 0;
}