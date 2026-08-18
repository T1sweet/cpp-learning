/*---------------------------------------------------------------------------------*/
//deque的使用
#include <iostream>
#include <deque>
using namespace std;


int main(){
    deque<char> d;      //deque类模板实例化为模板类
    d.push_back('a');   //在deque容器的end位置插入元素a
    d.push_back('b');   //在deque容器的end位置插入元素b
    d.push_front('c');  //在deque容器的begin位置插入元素c
    d.push_back('d');   //在deque容器的end位置插入元素d
    d.pop_back();       //删除deque容器的end位置的元素

    for(size_t i=0; i<d.size(); i++){
        cout<<d[i]<<'\t';
    }
    cout<<endl;


    return 0;
}
