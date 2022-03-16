#include<iostream>
using namespace std;
int add(int a=45, int b=23){   // this is funtion with orgument and with defult valuve
    int c=a+b; 
    cout<<"The some of two numbers is "<<c<<endl;
}
int main(){
int a,b;
    cout<<"Enter the valuve of a and b"<<endl;

cin>>a>>b;
add(a,b);
add();

}