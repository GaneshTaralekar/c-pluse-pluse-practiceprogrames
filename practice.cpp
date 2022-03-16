#include<iostream>
using namespace std;
int swap(int a,int b){
int temp = a;
a=b;
b=temp;
cout<<"The valuve of a is "<<a<<endl;
cout<<"The valuve of b is "<<b<<endl;
}
int main(){
int a=45;
int b =66;
swap(a,b);
cout<<"The valuve of a is "<<a<<endl;
cout<<"The valuve of b is "<<b<<endl;



}