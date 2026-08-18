/*---------------------------------------------------------------------------------*/
//输入输出格式控制：采用成员函数的方法
#include <iostream>
using namespace std;

void show()
{
    cout << "width=" << cout.width() << endl;
    cout << "fill=" << cout.fill() << endl;
    cout << "precision=" << cout.precision() << endl;
    cout << 123 << "and" << 123.456789 << endl;
}

int main(){
    cout<<"默认**************************************"<<endl;
    show();

    cout<<"修改域宽、填充、精度**************************************"<<endl;
    cout.width(8);     //设置下一次输出的最小域宽为8，输出完成后，域宽自动重置为0
    cout.fill('*');    //域宽为8，不足填充字符为'*'
    cout.precision(4); //精度为4，默认格式：保留4位有效数字
                       //   科学计数法格式：保留4位小数
    show();

    cout<<"设置居左、科学计数法表示浮点数**************************************"<<endl;
    // cout.setf(ios::left);
    // cout.setf(ios::scientific);
    cout.setf(ios::left | ios::scientific); 
    cout.width(8);
    cout << 123 << "and" << 123.456789 << endl;
    show();

    cout<<"清除状态标志**************************************"<<endl;
    cout << 123 << "and" << 123.456789 << endl;
    cout.unsetf(ios::scientific);
    cout << 123 << "and" << 123.456789 << endl;
    show();

    return 0;
}
