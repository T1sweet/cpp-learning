/*---------------------------------------------------------------------------------*/
//输入输出重定向
#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;          //键盘输入
    cout << a + b << endl;  //屏幕输出

    //以下三个测试需要独立测试，不能同时运行，因为一旦重定向，freopen函数无法可靠恢复标准输入和标准输出

    //测试1：文件输入，屏幕输出
    // int c, d;
    // freopen("../input.txt", "r", stdin);     //将标准输入（键盘）重定向到指定的文件，从此从文件中读取数据，而不是从键盘输入。
    // cin >> c >> d;          //文件输入
    // cout << c + d << endl;  //屏幕输出
    // fclose(stdin);

    //测试2：屏幕输入，文件输出
    int e, f;
    freopen("../output.txt", "w", stdout);   //将标准输出（屏幕）重定向到指定的文件，从此向文件中写入数据，而不是向屏幕输出数据。
    cin >> e >> f;          //键盘输入  
    cout << e + f << endl;  //文件输出
    fclose(stdout);

    //测试3：文件输入，文件输出
    // int g, h;    
    // freopen("../input.txt", "r", stdin);     //将标准输入（键盘）重定向到指定的文件，从此从文件中读取数据，而不是从键盘输入。
    // freopen("../output.txt", "w", stdout);   //将标准输出（屏幕）重定向到指定的文件，从此向文件中写入数据，而不是向屏幕输出数据。
    // cin >> g >> h;          //文件输入
    // cout << g + h << endl;  //文件输出
    // fclose(stdout);
    // fclose(stdin);

    return 0;
}
