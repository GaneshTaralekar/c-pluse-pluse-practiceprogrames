#include<iostream>
using namespace std;
class A{
int a,b;
public:
void input(){
    cout<<"Enter number"<<endl;
    cin>>a>>b;

}
friend void Add (A obj);
};
void Add(A obj){
    int c;
   c = obj.a+obj.b;
   cout<<"Sum is "<<c<<endl;
}
int main(){
A g;
g.input();
Add(g);
}