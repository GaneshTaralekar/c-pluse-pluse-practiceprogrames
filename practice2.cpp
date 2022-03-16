#include<iostream>
using namespace std;
inline int product(int a, int b){
    return a*b;
};
int main(){
    int a,b;
    cin>>a>>b;
    cout<<product(a,b);  //in inline funtion this cout is repleced by actule funtion code
}