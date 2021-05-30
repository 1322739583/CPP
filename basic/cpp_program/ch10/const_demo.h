//
// Created by xzh on 2021/5/26.
//

#ifndef CPP_CONST_DEMO_H
#define CPP_CONST_DEMO_H
int x1=7;
constexpr int  x2=7;
//constexpr int x3=x1;//错误
constexpr int x4=x2;

void f();

constexpr int isqrt_helper(int sq,int d,int a);
constexpr int isqrt(int x);


struct Point{
    int x,y,z;
    constexpr Point up(int d){return {x,y,z+d};}
    constexpr Point move(int dx,int dy){return {x+dx,y+dy,z};}
};
#endif //CPP_CONST_DEMO_H
