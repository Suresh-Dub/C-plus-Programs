/*C++ If Else
If else statements are used to implement a selection structure. Like any other programming language, C++ also uses the if keyword to implement the decision control instruction. 

The condition for the if statement is always enclosed within a pair of parentheses. If the condition is true, then the set of statements following the if statement will execute. And if the condition evaluates to false, then the statement will not execute, instead, the program skips that enclosed part of the code.An expression in if statements are defined using relational operators. The statement written in an if block will execute when the expression following if evaluates to true. But when the if block is followed by an else block, then when the condition written in the if block turns to be false, the set of statements in the else block will execute.
Following is the syntax of if-else statements:

if ( condition ){
statements;}
 else {
statements;}*/

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter the Age : ";
    cin>>age;

    if (age<18){
        cout<<"You are not able to vote"<<endl;}
    
            else if (age >= 18)
            {
                cout<<"You are able to vote"<<endl;

            }
            else {
                cout<<"You are not able to vote";
            }
    return 0;
}
