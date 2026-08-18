#ifndef POINT_H
#define POINT_H

#pragma once        // 防止重复包含

class Point         //类
{
    private:
        int x, y;
    public:
        void setPoint(int x, int y);
        void printPoint();
};    

#endif