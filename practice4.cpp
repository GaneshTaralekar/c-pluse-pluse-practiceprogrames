#include<iostream> 
using namespace std;
class complex{
    int a,b;
    public:
    void setdata(int v1 , int v2){
        int a= v1;
        int b = v2;

    }
    void addsum(complex o1 , complex o2){
        a =o1.a+o2.a;
        b =o2.b+o2.b;

    }
    void printdata(){
        cout<<"Your complex number is "<<a<<"i"<<b<<endl;
    };

};
int main(){
complex ganesh ,rohan,harry;
ganesh.setdata(20,10);
rohan.setdata(10,20);
harry.addsum(ganesh,rohan);
harry.printdata();

}