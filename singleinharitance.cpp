// #include <iostream>
// using namespace std;
// class Base
// {
//     int data1;

// public:
//     int data2;
//     void setdata()
//     {
//         data1 = 10;
//         data2 = 20;
//     }
//     int getdata1()
//     {
//         return data1;
//     }
//     int getdata2()
//     {
//         return data2;
//     }
//     };
//     class Deriveed : public Base
//     {
//         int data3;

//     public:
//         void process(){
//             data3 = getdata1() *data2;
//         }
//         void display(){
//             cout<<"The valuve of data1 is "<<getdata1()<<"The valuve of data2 is"<<data2<<"The valuve of multiplication is "<<data3;
//         }
//     };

//     int main()
//     {
//         Base G;
//         Deriveed P;
//         P.setdata();
//         P.getdata1();
//         P.getdata2();
//         P.process();
//         P.display();
//     }