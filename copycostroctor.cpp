#include <iostream>
using namespace std;
class Number
{
    int a;
    int result;
    int c, b;


public:
    Number()
    {
        a = 100; // In defult constroctor i am putting the valuve of int a;
    }
    Number(int num1 , int num2)
    {
        a = num1;
        b = num2;
        result = num1+num2;
    }
    void printresult()
    {

        cout << "The Result of sum is " << result << endl;
    }
    Number(Number &obj)
    {
        a = obj.a;
        b = obj.b;
        obj.result = obj.a+obj.b;
        cout<<"The result of sum is"<<obj.result<<endl;
        cout<<"Copy constructor is called";


        

    }
    void Display()
    {
        cout << "The number fot the object is " << a << endl;
    }
};
int main()
{
    Number X(45,45);
X.printresult();
Number z(X);


}
