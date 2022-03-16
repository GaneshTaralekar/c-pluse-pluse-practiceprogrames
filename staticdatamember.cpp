#include<iostream>
using namespace std;
class Employee{
    int id;
    static int count;
    public:
    void setdata(){
        cin>>id;
    }
    void getdata(){
        cout<<id<<endl;
        count=count+1;
        cout<<count<<endl;
    

    }

}
ganesh,bunny, rohan;
 
 int Employee::count;


int main(){
ganesh.setdata();
ganesh.getdata();
bunny.setdata();
bunny.getdata();
rohan.setdata();
rohan.getdata();







    

}