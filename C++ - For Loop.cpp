/*The need to perform an action, again and again, with little or no variations in the details each time they are executed is met by a mechanism known as a loop. This involves repeating some code in the program, either a specified number of times or until a particular condition is satisfied. Loop-controlled instructions are used to perform this repetitive operation efficiently ensuring the program doesn’t look redundant at the same time due to the repetitions.

Following are the three types of loops in C++ programming.
For Loop
While Loop
Do While Loop
*/

// Using For Loop

#include<iostream>
using namespace std;
int main()
{
    int a, i;
    cout<<"How many time you wanna print the text 🥸 = ";
    cin>>a;
    for (i=0; i<=a; i++)
    {
        cout<<"Hello!!!!🥺"<<endl;

    }
    return 0;
}
