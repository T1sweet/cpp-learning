/*---------------------------------------------------------------------------------*/
//算法:排序、替换
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
   string name[] = {"张三", "王五", "李四", "赵六"};
   vector<string> v(name, name+4);

   vector<string>::iterator it;
   cout<<"v: "<<endl;
   for(it=v.begin(); it!=v.end(); it++){
       cout<<*it<<'\t';
   }
   cout<<endl;

   //排序
   sort(v.begin(), v.end());
   cout<<"v排序后: "<<endl;
   for(it=v.begin(); it!=v.end(); it++){
       cout<<*it<<'\t';
   }
   cout<<endl;

   //替换
   replace(v.begin(), v.end(), "王五", "王二");
   cout<<"v替换后: "<<endl;
   for(it=v.begin(); it!=v.end(); it++){
       cout<<*it<<'\t';
   }
   cout<<endl;

    return 0;
}
