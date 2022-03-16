#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
    friend complex addsum(complex o1 ,complex o2);
    void setnumber(int x , int y){
        a=x;
        b=y;
    }
    void print(){
        cout<<"The addition of your number is "<<a<<"+"<<b<<endl;
    }
};
complex addsum(complex o1 , complex o2){
    complex o3;
    o3.setnumber((o1.a+o2.a),(o2.a+o2.b));
    return o3;
}
int main(){
complex g,p,r;
g.setnumber(45,23);
p.setnumber(45,23);
r=addsum(g,p);
r.print();


}