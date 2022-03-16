#include <iostream>
using namespace std;
class add
{
    int c;

public:
    add(int a, int b)
    {
        c = a + b;
        cout << "The sum of two numbers is : " << c;

    }
};
int main()
{
    int x,y;
    cout<<"Enter the valuves";
    cin>>x>>y;
    // add ganesh;
    add ganesh(x,y);  // This is the Constroctor with aurgument;
    
    
}