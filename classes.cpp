#include<iostream>
using namespace std;
class suming{
    
    public:
    string name = "Ganesh Taralekar";
    int salary = 454544;

    int a,b,c;
    int sum(int a, int b){
        int c = a+b;
        cout<<"The valuve of addition is"<<c;

    }
        int sum(int a, int b,int c){
        int d = a+b+c;
        cout<<"The valuve of addition is"<<d<<endl;


    }

    void greet(){
        cout<<"Be a good at programing";
    }
};
int main(){
 suming g;
g.sum(45,56);
 g.sum(45,56,88); 
 g.salary=33;
 cout<<g.salary<<endl;
 cout<<g.name<<endl;
 g.greet();


}