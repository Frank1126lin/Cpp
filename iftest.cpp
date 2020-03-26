#include<iostream>
using namespace std;

int main()
{
/*
选择结构 单行if语句
用户输入数据，大于600则通过；
*/
//1. 用户输入分数
int score = 0;
cout << "请输入一个分数>>" << endl;
cin >> score;
// 2.打印用户输入的分数
cout << "您输入的分数为：" << score << endl;
// 3. 判断分数是否大于600，如果大于，那么输出
// 注意：if语句后不能加分号；
if (score >= 600)
{
    if (score >=700)
    {
    cout << "恭喜，清华大学欢迎您！"<< endl;
    }
    else
    cout<< "恭喜你达到一本大学线！" << endl;
}
else if (score>=500)
{
    cout<< "恭喜你达到二本大学线！" << endl;
}
else if (score>=400)
{
    cout<< "恭喜你达到三本大学线！" << endl;
}
else
{
    cout<< "很遗憾，您没能达到本科分数线！" << endl;
}

return 0;
}