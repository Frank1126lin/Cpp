#include <iostream>
using namespace std;

int main()
{
   int arr[5] ={350,450,240,600,520};
   int max = 0;
   for (int i = 0; i < 5; i++ )
   {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        cout<< max <<endl;
   }
   cout<< "数组中的最大值为："<< max << endl;
   return 0;

}