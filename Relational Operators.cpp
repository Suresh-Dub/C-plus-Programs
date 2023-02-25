//C++ Relational OPERATORS - Relational operators are used to check the relationship between two operands and to compare two or more numbers or even expressions in cases. The return type of a relational operator is a Boolean that is, either True or False (1 or 0).
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
    cout<<"The value of a>b = "<<(a>b)<<endl;
    cout<<"The value of a=b = "<<(a==b)<<endl;
    cout<<"The value of a<b = "<<(a<b)<<endl;
    cout<<"The value of a>=b = "<<(a>=b)<<endl;
    cout<<"The value of a<=b = "<<(a<=b)<<endl;
    cout<<"The value of a!=b = "<<(a!=b)<<endl;

    return 0;
}
