// /*---------------------------------------------------------------------------------*/
// #include <iostream>
// using namespace std;

// int main()
// {
//     // // 定义指针变量，指向单个地址
//     // int *p=nullptr;     //定义指针变量p，指向int型的地址
//     // p = new int;        //开辟1个int型的空间
//     // if(p!=nullptr){     //判断内存分配是否成功
//     //     cout<<"内存分配成功"<<endl;
//     // }
//     // else{
//     //     cout<<"内存分配失败"<<endl;
//     //     return -1;
//     // }
//     // *p = 10;            //将指针p指向的地址赋值为10
//     // cout<<"*p = "<<*p<<endl;

//     // delete p;           // 这里删除了给指针p分配的内存，指针p变成野指针。
//     //                     // 如果程序结束，p本身是栈上的局部变量，自动销毁，
//     // if (p != nullptr) {  
//     //     cout << "p 是野指针，不能访问" << endl;         
//     // }
//     // p = nullptr;        // 如果后面还要用到p，还是要将p赋值为空指针nullptr。这是工程实践中的防御性写法
    

//     // // 定义指针变量，指向一片连续的地址
//     // char *p2 = new char[10];       //开辟10个char型的空间
//     // for(int i=0;i<10;i++)
//     // {
//     //     p2[i] = 'a' + i;
//     // }
//     // for(int i=0;i<10;i++)
//     // {
//     //     cout<<p2[i]<<'\t';
//     // }
//     // cout<<endl;

//     // delete[] p2;
//     // p2 = nullptr;


//     // 定义指针变量，指向单个地址,赋初值
//     int *p3 = new int(10);      //开辟1个int型的空间，初始化为10
//     cout<<"*p3 = "<<*p3<<endl;

//     delete p3;
//     p3 = nullptr;

//     return 0;
// }



/*---------------------------------------------------------------------------------*/
// 统计某次考试的平均成绩和均方差
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int *score, numn;
    double average=0, variance=0;

    //输入阶段
    cout<<"请输入考试人数："<<endl;
    cin>>numn;
    score = new int[numn];
    for(int i=0;i<numn;i++)
    {
        cout<<"请输入第"<<i+1<<"个学生的成绩："<<endl;
        cin>>score[i];
    }

    //计算平均成绩
    for(int i=0;i<numn;i++)
    {
        average += score[i];
    }
    average /= numn;
    cout<<"平均成绩为："<<average<<endl;

    //计算均方差
    for(int i=0;i<numn;i++)
    {
        variance += (score[i]-average)*(score[i]-average);
    }
    variance = sqrt(variance)/numn;
    cout<<"均方差为："<<variance<<endl;

    delete[] score;
    score = nullptr;
 
    return 0;
}