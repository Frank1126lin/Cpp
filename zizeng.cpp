#include <iostream>
using namespace std;

int main()
{
    // 1. 前置递增；
    int a = 10;
    ++a;
    cout<< "a="<< a << endl;

    // 2.后置递增；
    int b =10;
    b++;
    cout<< "b="<< b << endl;


    // 3. 前置和后置的区别；
    //前置，先自增，再运算；
    // 后置， 先运算，后自增；
    int a1 = 10;
    int  b1 = ++a1 * 10;
    cout<< "a1=" << a1 <<endl;
    cout<< "b1=" << b1 <<endl;

    int a2 = 10;
    int  b2 = a2++ * 10;
    cout<< "a2=" << a2 <<endl;
    cout<< "b2=" << b2 <<endl;
}