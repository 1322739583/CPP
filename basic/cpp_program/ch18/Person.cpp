//
// Created by xzh on 2021/5/30.
//
#include "iostream"
using namespace std;
class Person{
public:
    int m_A;
    int m_B;
    //成员函数形式
    Person operator+(Person &p){
        Person tmp;
        tmp.m_A= this->m_A+p.m_A;
        tmp.m_B= this->m_B+p.m_B;
        return tmp;
    }




};
//全局形式
Person operator+(Person &p1,Person &p2){
    Person tmp;
    tmp.m_A=p1.m_A+p2.m_A;
    tmp.m_B=p2.m_B+p2.m_B;
    return tmp;
}

Person operator+(Person &p,int num){
    Person tmp;
    tmp.m_A=p.m_A+num;
    tmp.m_B=p.m_B+num;
    return tmp;
}

void test1(){
    Person p1;
    p1.m_A=10;
    p1.m_B=10;
    Person p2;
    p2.m_A=10;
    p2.m_B=10;
   // Person p3=p1+p2;
    Person p3=p1.operator+(p2);
    cout<<"p3.m_A="<<p3.m_A<<" p3.m_B="<<p3.m_B<<endl;
    //Person p4=p1+p2;//
    Person p4=operator+(p1,p2);
    cout<<"p4.m_A="<<p4.m_A<<" p3.m_B="<<p4.m_B<<endl;
    //Person p5=p1+100;
    Person p5=operator+(p1,100);
    cout<<"p5.m_A="<<p5.m_A<<" p5.m_B="<<p5.m_B<<endl;
}


int main(){
    test1();
}