#include<iostream>
using namespace std;
int counter(int a , int b){
int c= a+b;
cout<<c;
static int v=0;
v=v+1;
cout<<v<<endl;
};
int main(){
counter(45,96);
counter(45,96);
counter(45,96);
counter(45,96);
counter(45,96);
counter(45,96);
counter(45,96);
counter(45,96);
counter(45,96);

}