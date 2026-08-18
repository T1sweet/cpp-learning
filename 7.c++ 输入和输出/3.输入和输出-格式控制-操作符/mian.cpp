/*---------------------------------------------------------------------------------*/
//输入输出格式控制：采用操作符的方法
#include <iostream>
#include <iomanip>
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
    cout<<setw(8)<<setfill('*')<<setprecision(4)<< 123 << "and" << 123.456789 << endl;
    show();

    cout<<"设置居左、科学计数法表示浮点数**************************************"<<endl;
    cout<<setiosflags(ios::left | ios::scientific)<<setw(8)<< 123 << "and" << 123.456789 << endl;
    show();

    cout<<"清除状态标志**************************************"<<endl;
    cout << 123 << "and" << 123.456789 << endl;
    cout<<resetiosflags(ios::scientific)<<endl;
    show();

    return 0;
}
