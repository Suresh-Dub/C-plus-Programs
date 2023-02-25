/*A While loop is also called a pre-tested loop. A while loop allows a piece of code in a program to be executed multiple times, depending upon a given test condition which evaluates to either true or false. The while loop is mostly used in cases where the number of iterations is not known. If the number of iterations is known, then we could also use a for loop as mentioned previously. 

Following is the syntax for using a while loop.

while (condition test)
{
    // Set of statements
}*/
#include<iostream>
using namespace std;
int main()
{
    int a, i;
    cout<<"Enter the value you wanna print from the number : ";
    cin>>a;
    while (i<a){
        cout<<i<<" "<<endl;
        i++;
    }
    return 0;
}
