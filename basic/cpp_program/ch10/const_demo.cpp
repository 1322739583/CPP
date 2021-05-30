//
// Created by xzh on 2021/5/26.
//
#include "iostream"
#include "const_demo.h"

using namespace std;



//int main(){
//
//    std::cout<<x4<<std::endl;
//    f();
//    int r1=isqrt(9);
//    int r2=isqrt(80);
//    cout<<r1<<endl;
//    cout<<r2<<endl;
//
//
//}


void f(){
  // constexpr int y1=x1;//错误
  constexpr int y2=x2;
  std::cout<<"x2="<<x2<<std::endl;
}

constexpr int isqrt_helper(int sq,int d,int a){
    return sq<=a?isqrt_helper(sq+d,d+2,a):d;
}

constexpr int isqrt(int x){
    return isqrt_helper(1,3,x)/2-1;
}