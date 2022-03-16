#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age";
    cin>>age;
    if (age>18)
    {
        cout<<"You can come in my party"<<endl;
    }
    else if (age==18)
    {
       cout<<"You can not come in my party"<<endl;
    }
    else{
        cout<<"Go back to your study"<<endl;
    }
    
}