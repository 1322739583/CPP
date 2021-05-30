//
// Created by xzh on 2021/5/26.
//
//1.四种初始化方式
using namespace std;
#include "iostream"

int a=10;
int b {10};//c11，作者建议使用，防止窄化转换 见8.5.4
int c={10};
int d(10);//容易误认为是函数

char ch{'a'};
char ch2='z';


//2.初始化时候的类型转化

void f(double val,int val2){
    int x=val;//如果val=7.9,则x=7
    char ch=val2;//如果val2=1024,那么ch=1

    //int x2{val};//错误，截取错误
    //char c2{val2};//错误，窄化转换

    char c3{24};//正确，在ascii表范围内
    //char c4{257};//错误，超出2^8

    //int x3={2.0};//错误,截取错误

    int buf[10];

    for (int i = 0; i < 10; ++i) {
        cout<<buf[i]<<endl;
    }

    //局部变量没有初始化，大概率取到垃圾值或0。
    int a;
    int b;
    int c;
    int d;
    //静态变量不管是全局还是局部，必定自动初始化，这里自动初始化为0
    static int e;
    static int f;
    static int g;
    static int h;

    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"c="<<c<<endl;
    cout<<"d="<<d<<endl;
    //值必为0
    cout<<"e="<<e<<endl;
    cout<<"f="<<f<<endl;
    cout<<"g="<<g<<endl;
    cout<<"h="<<h<<endl;
//    a=-1830682080
//    b=32765
//    c=0
//    d=0

}

//int main(){
//
//
//    f(7.9,1024);
//
//
//}