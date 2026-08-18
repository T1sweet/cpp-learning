/*---------------------------------------------------------------------------------*/
//类的友元：友元函数
#include <iostream>
using namespace std;

class Girl;

class Boy
{
    private:
        string name;
        int age;
    public:
        Boy(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
        void IntroduceOneself()
        {
            cout << "我是" << name << endl;
        }
        friend void getName(Boy &x);    //普通友元函数

        template < class T >
        friend void getAge(T &x);       //模板友元函数
};
class Girl
{
    private:
        string name;
        int age;
    public:
        Girl(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
        void IntroduceOneself()
        {
            cout << "我是" << name << endl;
        }
        friend void getName(Girl &x);   //普通友元函数

        template < class T >
        friend void getAge(T &x);       //模板友元函数
};

void getName(Boy &x)
{
    cout << "姓名：" << x.name << endl;
}
void getName(Girl &x)
{
    cout << "姓名：" << x.name << endl;
}

template < class T >
void getAge(T &x)
{
    cout << "年龄：" << x.age << endl;
}
int main(){
    Boy boy("张三", 18);
    Girl girl("李四", 19);

    getName(boy);
    getAge(boy);
    getName(girl);
    getAge(girl);   

    return 0;
}  



// /*---------------------------------------------------------------------------------*/
// //类的友元：友元成员
// #include <iostream>
// using namespace std;

// class Girl;

// class Boy
// {
//     private:
//         string name;
//     public:
//         Boy(string name)
//         {
//             this->name = name;
//         }
//         void IntroduceOneself()
//         {
//             cout << "我是" << name << endl;
//         }
//         void IntroduceFriend(Girl &x);
//         // friend void Girl::IntroduceFriend(Boy &x);
// };
// class Girl
// {
//     private:
//         string name;
//     public:
//         Girl(string name)
//         {
//             this->name = name;
//         }
//         void IntroduceOneself()
//         {
//             cout << "我是" << name << endl;
//         }
//         void IntroduceFriend(Boy &x);
//         friend void Boy::IntroduceFriend(Girl &x);
// };

// void Boy::IntroduceFriend(Girl &x)
// {
//     cout << "她是" << x.name << endl;
// }

// // void Girl::IntroduceFriend(Boy &x)
// // {
// //     cout << "他是" << x.name << endl;
// // }
 
// int main(){
//     Boy boy("张三");
//     Girl girl("李四");

//     cout << "张三先介绍自己，再介绍李四：" << endl;
//     boy.IntroduceOneself();
//     boy.IntroduceFriend(girl);

//     // cout << "李四先介绍自己，再介绍张三：" << endl;
//     // girl.IntroduceOneself();
//     // girl.IntroduceFriend(boy);
//     return 0;
// }  



// /*---------------------------------------------------------------------------------*/
// //类的友元：友元类
// #include <iostream>
// using namespace std;

// class Girl;

// class Boy
// {
//     private:
//         string name;
//     public:
//         Boy(string name)
//         {
//             this->name = name;
//         }
//         void IntroduceOneself()
//         {
//             cout << "我是" << name << endl;
//         }
//         void IntroduceFriend(Girl &x);
//         friend Girl;
// };
// class Girl
// {
//     private:
//         string name;
//     public:
//         Girl(string name)
//         {
//             this->name = name;
//         }
//         void IntroduceOneself()
//         {
//             cout << "我是" << name << endl;
//         }
//         void IntroduceFriend(Boy &x);
//         friend Boy;
// };

// void Boy::IntroduceFriend(Girl &x)
// {
//     cout << "她是" << x.name << endl;
// }

// void Girl::IntroduceFriend(Boy &x)
// {
//     cout << "他是" << x.name << endl;
// }

// int main(){
//     Boy boy("张三");
//     Girl girl("李四");

//     cout << "张三先介绍自己，再介绍李四：" << endl;
//     boy.IntroduceOneself();
//     boy.IntroduceFriend(girl);

//     cout << "李四先介绍自己，再介绍张三：" << endl;
//     girl.IntroduceOneself();
//     girl.IntroduceFriend(boy);
//     return 0;
// }  

