#include<iostream>
using namespace std;
class A{
    int a , b;
    public:
    friend void add(A obj);
    void input(){
        cout<<"Enter your number"<<endl;
        cin>>a>>b;
    
    }

};
void add(A obj){
int result;
result = obj.a+obj.b;
cout<<"The sum is"<<result;
}
int main(){
     A g;
     g.input();
     add(g);
}