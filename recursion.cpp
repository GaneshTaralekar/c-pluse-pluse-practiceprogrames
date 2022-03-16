#include<iostream>
using namespace std;
int factorial(int number){
    if (number<=1)
    {
        return 1;
                               // This funtion gives a factorial of number you enterd
    }
    else{
        return number *factorial(number-1);
        cout<<number<<endl;
    }
      
}
int main(){
    int number;
    cout<<"Enter the number";
    cin>>number;
    cout<<factorial(number);
}