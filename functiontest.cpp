#include <iostream>
using namespace std;

int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

int main()
{
    int sum = add(1,2);
    cout<< "1+2=" << sum << endl;
    return 0;
}