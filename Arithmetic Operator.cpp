//C++ ARITHMETIC OPERATORS - Arithmetic operators are used to perform mathematical operations such as addition, subtraction, etc.
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Enter the Number A = ";
    cin>>a;
    cout<<"Enter the Number B = ";
    cin>>b;
    //<< is know as Insertion Operator
    //>> is known ad Extraction Operator
    cout<<"Addition of A & B is = "<<a+b<<endl;
    cout<<"Subtraction of A & B is = "<<a-b<<endl;
    cout<<"Multiplication of A & B is = "<<a*b<<endl;
    cout<<"Division of A & B is = "<<a/b<<endl;
    cout<<"Modulus of A & B is = "<<a%b<<endl;
    cout<<"Post Increment of A is = "<<a++<<endl;
    cout<<"Pre Increment of A is = "<<++a<<endl;
    cout<<"Post Decrement of A is = "<<a--<<endl;
    cout<<"Pre Decrement of A is = "<<--a<<endl;

    return 0;
}
