/*---------------------------------------------------------------------------------*/
//set的使用
#include <iostream>
#include <set>
using namespace std;


int main(){
    string name[] = {"张三", "李四", "王五", "赵六"};

    //创建方法1
    set<string> s;      //set类模板实例化为模板类
    s.insert(name[0]);
    s.insert(name[1]);
    s.insert(name[2]);
    s.insert(name[3]);

    //注意：set的遍历不能采用下标的形式，因为set是双向链表，没有随机访问的性质，只能通过迭代器遍历
    set<string>::iterator it;      //获取set容器的begin位置迭代器
    for(it=s.begin(); it!=s.end(); it++){
        cout<<*it<<'\t';
    }
    cout<<endl;

    //创建方法2
    set<string> s2(name, name+4);
    for(it=s2.begin(); it!=s2.end(); it++){
        cout<<*it<<'\t';
    }
    cout<<endl;


    //查找指定名字
    string search_name;
    cout<<"请输入要查找的姓名: ";
    cin>>search_name;
    it = s2.find(search_name);  //将查找结果给到迭代器it
    if(it != s2.end()){         //
        cout<<"查找成功，姓名为: "<<*it<<endl;
    }else{
        cout<<"没找到，插入姓名："<<search_name<<endl;
        s2.insert(search_name);     //插入后，根据元素的大小自动排序
    }
    for(it=s2.begin(); it!=s2.end(); it++){
        cout<<*it<<'\t';
    }
    cout<<endl;

    return 0;
}
