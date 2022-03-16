#include <iostream>
using namespace std;
class Bankdeposit
{
    int principle;
    int year;
    float intrestrate;
    float returnvaluve;

public:
    Bankdeposit()
    {
    }
    Bankdeposit(int p, int y, float r)
    {
        principle = p;
        year = y;
        intrestrate = r;
        returnvaluve = principle;
        for (int i = 0; i < y; i++)
        {
            returnvaluve = returnvaluve * (1 + r);
        }
    }

    Bankdeposit(int p, int y, int r)
    {
                principle = p;
        year = y;
        intrestrate = float(r)/100;
        returnvaluve = principle;
        for (int i = 0; i < y; i++)
        {
            returnvaluve = returnvaluve * (1 + r);
        }
    }
    void show(){
        cout<<endl<<"Principle amount was "<<principle<<endl<<"Return valuve after"<<year<<"is"<<returnvaluve<<endl;
    }
};
int main()
{
}