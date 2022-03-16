#include<iostream>
using namespace std;
class practice{
    public:
    int a,b,c,d,e;
    int setdata(int a, int b,int c,int d, int e);
    int getdata(int a, int b,int c,int d, int e);
};

int practice :: setdata(int a, int b,int c,int d, int e){
a=a;
b=b;
c=c;
d=d;
e=e;

}
int practice :: getdata(int a, int b,int c,int d, int e){
cout<<"The valuve of number is : "<<a<<endl;
cout<<"The valuve of number is : "<<b<<endl;
cout<<"The valuve of number is : "<<c<<endl;
cout<<"The valuve of number is : "<<d<<endl;
cout<<"The valuve of number is : "<<e<<endl;

}
int main(){
class practice g;
int a , b,c,d,e;
cin>>a>>b>>c>>d>>e;
g.setdata(a,b,c,d,e);
g.getdata(a,b,c,d,e);


}