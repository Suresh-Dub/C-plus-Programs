/*Bitwise Operators - A bitwise operator is used to perform operations at the bit level. To obtain the results, they convert our input values into binary format and then process them using whatever operator they are being used with. */

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
    cout<<"The value of a&b = "<<(a&b)<<endl;
    cout<<"The value of a|b = "<<(a|b)<<endl;
    cout<<"The value of !a = "<<(!a)<<endl;
    cout<<"The value of a&b = "<<(a>>b)<<endl;
    cout<<"The value of a|b = "<<(~a)<<endl;
    cout<<"The value of !a = "<<(a^b)<<endl;

    return 0;
}

//Shift Right Operator >>
//Shift Left Operator <<
//Bitwise Complement ~
