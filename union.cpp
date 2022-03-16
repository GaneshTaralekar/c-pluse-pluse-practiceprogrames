#include<iostream>
using namespace std;
int main(){
    union money
    {
        int rise;
        char car;
        float pound;

        
    };
    union money m1;
    m1.pound=454;
    cout<<m1.pound<<endl;
    m1.car='G';
    cout<<m1.car<<endl;
    cout<<m1.pound<<endl;

    
}