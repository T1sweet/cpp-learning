/*---------------------------------------------------------------------------------*/
//map的使用
#include <iostream>
#include <map>
using namespace std;


int main(){
    string name[] = {"张三", "王五", "李四", "赵六"};
    int id[] = {1001, 1002, 1003, 1004};
    
    //写法1：直接在map容器中插入元素，元素的键值对为姓名和学号
    map<string, int> m;      //map类模板实例化为模板类
    for(int i=0; i<4; i++){
        m.insert({name[i], id[i]});     //将姓名和学号插入到map容器中
    }
    for(auto it=m.begin(); it!=m.end(); it++){  
        cout<<it->first<<": "<<it->second<<endl;
    }// 注意：map容器中的键值对是按照字符串ascii码值在二叉树中排序进行存储的

    //写法2：按键值对进行赋值
    cout<<"------------------------- "<<endl;
    for(int i=0; i<4; i++){
        m[name[i]] = id[i];     //将姓名和学号插入到map容器中
    }
    for(auto it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<": "<<it->second<<endl;
    }


    return 0;
}
