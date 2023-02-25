/*C++ Switch Case - The control statement that allows us to make a decision effectively from the number of choices is called a switch, or a switch case-default since these three keywords go together to make up the control statement. 

Switch executes that block of code, which matches the case value. If the value does not match with any of the cases, then the default block is executed. 

Following is the syntax of switch case-default statements:

switch ( integer/character expression )
{  
case {value 1} :  
do this ;
 
case {value 2} :  
 do this ;  
 
default :  
do this ;
 }
*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter 1 or 2 else 💔 ";
    cin>>a;
    switch(a)
    {
        case 1: cout<<"Hello"<<endl;
        break;

        case 2: cout<<"I Love you"<<endl;
        break;
        default: cout<<"Sorry but we break up 🥺"<<endl;
    }

    return 0;
}
