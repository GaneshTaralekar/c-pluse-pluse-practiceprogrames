#include<iostream>
using namespace std;
class Employee{
    int id;
    static int counter;
    public:
    void setid(){
    cin>>id;

    }
    void getid(){
        cout<<"The id of Employee is "<<id<<endl;
        counter=counter+1;
        cout<<counter;
    }


} ganesh;
int Employee :: counter;
int main(){
    ganesh.setid();
    ganesh.getid();
        ganesh.setid();
    ganesh.getid();
        ganesh.setid();
    ganesh.getid();
        ganesh.setid();
    ganesh.getid();
        ganesh.setid();
    ganesh.getid();

}