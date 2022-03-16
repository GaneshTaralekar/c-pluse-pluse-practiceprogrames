#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
    void setid(){
        salary = 152237;
        cout<<"Enter the id of employee"<<endl;
        cin>>id;
    }
    void getid(){
        cout<<"The id of this employee is "<<id<<endl;
    }
};
int main(){
    // Employee ganesh,Harry, Rohan;
    // ganesh.setid();
    // ganesh.getid();
    Employee fb[3];                // make a company name array and store all the employee in it
    for (int i = 0; i <3; i++)     //The creat a for loop for allitaret and printing them
    {
        fb[0].setid();
        fb[0].getid();

        
    }
    
    
}