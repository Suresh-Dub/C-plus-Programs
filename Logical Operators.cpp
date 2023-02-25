/* Logical Operators are used to check whether an expression is true or false. There are three logical operators i.e. AND, OR, and NOT. They can be used to compare Boolean values but are mostly used to compare expressions to see whether they are satisfying or not. 

AND: it returns true when both operands are true or 1.

OR: it returns true when either operand is true or 1.

NOT: it is used to reverse the logical state of the operand and is true when the operand is false.*/

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
    cout<<"The value of a&&b = "<<(a&&b)<<endl;
    cout<<"The value of a||b = "<<(a||b)<<endl;
    cout<<"The value of !a = "<<(!a)<<endl;

    return 0;
}
