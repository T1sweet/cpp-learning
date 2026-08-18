/*---------------------------------------------------------------------------------*/
//list的使用
#include <iostream>
#include <list>
using namespace std;


int main(){
    list<double> l;      //list类模板实例化为模板类
    l.push_front(1.2);   //在list容器的begin位置插入元素1.2
    l.push_front(3.4);  //在list容器的begin位置插入元素3.4
    l.push_front(5.6);  //在list容器的begin位置插入元素5.6
    l.push_back(7.8);    //在list容器的end位置插入元素7.8

    //注意：list的遍历不能采用下标的形式，因为list是双向链表，没有随机访问的性质，只能通过迭代器遍历
    list<double>::iterator it;      //获取list容器的begin位置迭代器
    for(it=l.begin(); it!=l.end(); it++){
        cout<<*it<<'\t';
    }
    cout<<endl;

    cout<<"排序后: ";
    l.sort(); //对list容器中的元素进行排序
    for(it=l.begin(); it!=l.end(); it++){
        cout<<*it<<'\t';
    }
    cout<<endl;

    l.remove(3.4); //删除list容器中所有值为3.4的元素
    cout<<"删除3.4后: ";
    for(it=l.begin(); it!=l.end(); it++){
        cout<<*it<<'\t';
    }
    cout<<endl;

    return 0;
}
