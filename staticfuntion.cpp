#include<iostream>
using namespace std;
class complex{
    int a ,b;
    public:
    void setdata(int v1 , int v2){
        a = v1;
        b= v2;

    }
    void setdatabysum(complex o1 , complex o2){
        a= o1.a+o2.a;
        b= o1.b+o2.b;

    }
    void printnumber(){
        cout<<"Your complex number is "<<a<<" +i"<<b<<endl;
    }
};

int main(){
    complex c1,c2,c3;
    c1.setdata(1,3);
    c2.setdata(4,7);
    c3.setdatabysum(c1,c2);
    c3.printnumber();

}