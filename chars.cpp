#include <iostream>
using namespace std;

int main() 
{

	// 字符变量
    char ch = 'b';
    cout << ch << endl;

    //2. 字符型变量所占内存的大小
    cout <<"char 字符变量所占内存:"<<sizeof(char)<<endl;

    //3. 字符型变量常见错误
    //char ch2 = "b"; //创建字符型变量时候，要用单引号
    //char ch2 = 'abcde'; //创建字符变量时，单引号内只能由一个字符，区别与str

    //4. 字符型变量对应ASCII编码
    cout<< (int)ch << endl;    
	return 0;
}
