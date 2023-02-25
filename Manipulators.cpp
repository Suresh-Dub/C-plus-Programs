/*C++ Manipulators
In C++ programming, language manipulators are used in the formatting of output. These are helpful in modifying the input and the output stream. They make use of the insertion and extraction operators to modify the output.*/

#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
   float pi = 3.14;
   int num = 100;
   cout<<"The number is "<<num<<endl;
    cout<<setw(10)<<"Output"<<endl;
    cout<<setprecision(20)<<pi<<endl;
    cout<< setbase(16)<<num<<endl;

    return 0;
}


/*
endl - It is used to enter a new line with a flush.

setw(a) - It is used to specify the width of the output.

setprecision(a) - It is used to set the precision of floating-point values.

setbase(a) - It is used to set the base value of a numerical number.
*/
