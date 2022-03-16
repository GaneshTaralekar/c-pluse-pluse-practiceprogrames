#include<iostream>
using namespace std;
class A{
    int a,b;
    public:
void seddata(){
    cout<<"Eneter your two numbers"<<endl;
    cin>>a>>b;
}
friend class B;
};
class B{
    int c;
    public:
void add(A obj){
c=obj.a+obj.b;

}
void printdata(){
    cout<<"The sum of two number is : "<<c<<endl;
}
};

int main(){
    A g;
    B p;
    g.seddata();
    p.add(g);
    p.printdata();
}