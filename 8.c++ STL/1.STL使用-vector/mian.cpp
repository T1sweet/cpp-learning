/*---------------------------------------------------------------------------------*/
//用vector放入元素，并进行插入、删除元素
#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> v;  //vector类模板实例化为模板类
    v.insert(v.begin(), 10);    //在vector容器的begin位置插入元素10
    v.insert(v.begin(), 3);     //在vector容器的begin位置插入元素3
    v.insert(v.begin()+2, 5);   //在vector容器的begin+2位置插入元素5
    v.insert(v.end(), 1);       //在vector容器的end位置插入元素1
    v.push_back(2);             //在vector容器的end位置插入元素2
    v.erase(v.begin());         //删除vector容器的begin位置的元素

    for(size_t i=0; i<v.size(); i++){
        cout<<v[i]<<'\t';
    }
    cout<<endl;

    cout<<"v的大小: "<<v.size()<<endl;
    cout<<"v的容量: "<<v.capacity()<<endl;      //v中目前可以存放的最大元素个数，该值会根据实际存放个数自动变化
    cout<<"v最大容量: "<<v.max_size()<<endl;    //v中可以存放的最大元素个数，该值是系统限制的最大值

    return 0;
}
