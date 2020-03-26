#include <iostream>
using namespace std;

int main()
{
    int score;
    cout<< "请输入电影打分(1-5)>>" <<endl;
    cin>> score;

    switch (score)
    {
    case 5:
        cout<< "感谢您对本电影的支持！"<< endl;
        break; //退出当前分支；
    case 4:
        cout<< "谢谢支持，我们会再接再厉！" << endl;
        break; //退出当前分支；
    case 3:
        cout<< "如有任何建议，请及时联络XXX，我们会立即改进！"<< endl;
        break; //退出当前分支；
    default:
        cout<< "请真切的提出批评和建议，我们会马上整改！" << endl;
//        break; //退出当前分支；
    }
}

/* switch与if相比：
优点：执行效率高，结构清晰；
缺点：判断只能是整形或字符型，不可以是区间；