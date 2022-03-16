// #include <iostream>
// using namespace std;
// class A
// {
//     int a, b, c, result;

// public:
//     A()
//     {
// a = 100;
// b = 100;
//     }
//     A(int num1, int num2)
//     {
//         a = num1;
//         b = num2;
//         result = num1 + num2;
//     }
//     void printdata()
//     {
//         cout << "The sum of the two numbers is " << result << endl;
//     }
//     A(A &g)
//     {
//         a = g.a;
//         b = g.b;
//         g.result = g.a + g.b;
//         cout << "The sum of the two numbers is " << g.result << endl;
//         cout << "Copy constructor is called " << endl;
//     }
// };
// int main()
// {
//     A obj(100,100);
//     obj.printdata();

//     A obj2(obj);
// }
