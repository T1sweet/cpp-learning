#ifndef STRING_H
#define STRING_H

class String         //类
{
    private:
        char *sbuf;
        int length;
    public:
        String();
        String(const char *s);
        String(const String &s);     //默认的构造函数：存在指针，需要自己写
        ~String();

        void printString();
};    

#endif