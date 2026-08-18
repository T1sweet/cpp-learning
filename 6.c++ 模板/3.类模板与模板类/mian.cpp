/*---------------------------------------------------------------------------------*/
//类模板与模板类
#include <iostream>
using namespace std;

template <typename T, int size>
class Data
{   
    private:
        T data[size];
    public:
        Data()
        {
            cout << "input " << size << " datas:" << endl;
            for(int i = 0; i < size; i++)
                cin>>data[i];
        }
        void show()
        {
            cout<<"show " <<size<<" datas:"<<endl;
            for(int i = 0; i < size; i++)
                cout<<data[i]<<'\t';
            cout<<endl;
        }
        // T getmax()   //方法1：类模板的成员函数放在类中
        // {
        //     T max = data[0];
        //     for(int i = 1; i < size; i++)
        //     {
        //         if(data[i] > max)
        //             max = data[i];
        //     }
        //     return max;
        // }
        T getmax();     //方法2：类模板的成员函数放在类外
        void insertsort();
};

template <typename T, int size> //注意：类型形参列表要与类模板的形参列表一致
T Data<T, size>::getmax()
{
    T max = data[0];
    for(int i = 1; i < size; i++)
    {
        if(data[i] > max)
            max = data[i];
    }
    return max;
}

template <typename T, int size>
void Data<T, size>::insertsort()
{
    T temp;
    for(int i = 1; i < size; i++)
    {
        temp = data[i];
        int j = i - 1;
        while(j >= 0 && data[j] > temp)
        {
            data[j+1] = data[j];
            j--;
        }
        data[j+1] = temp;
    }
}

int main(){
    Data<double, 6> d;
    d.show();

    cout<<"max: "<<d.getmax()<<endl;

    cout<<"insertsort:"<<endl;
    d.insertsort();
    d.show();

    return 0;
}
