#include <iostream>
using namespace std;
class Employee
{
    int salary = 20000;

public:
    string name = "Ganesh";
    int Rollnumber = 45;
    char favchar = 'p';
    void getsalary()
    {
        cout << "Tje salary of employee is " << salary << endl;
    }
};
class Programer : public Employee
{
    string companyname = "facebook";

public:
    void getcompanyname()
    {
        cout << "The company name is " << companyname << endl;
    }
};

int main()
{
    // Employee G;
    Programer P;
    P.getsalary();
    cout << P.name << endl;
    cout << P.favchar << endl;
    cout << P.Rollnumber << endl;

    // G.getsalary();
    // cout << G.name << endl;
    // cout << G.favchar << endl;
    // cout << G.Rollnumber << endl;
}