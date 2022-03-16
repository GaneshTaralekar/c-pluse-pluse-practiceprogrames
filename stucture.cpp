#include<iostream>
using namespace std;
int main(){
    struct employee
    {
        int rollnumber = 45;
        int favnumber = 46;
        char favchar = 'G';
        float Salary =452966664;

    };
    struct employee Ganesh;
    Ganesh.favchar='g';
    Ganesh.favnumber=45;
    Ganesh.rollnumber=46;
    Ganesh.Salary=130000000;
    cout<<Ganesh.favchar<<endl;
        cout<<Ganesh.favnumber<<endl;
    cout<<Ganesh.rollnumber<<endl;
    cout<<Ganesh.Salary<<endl;

    
}