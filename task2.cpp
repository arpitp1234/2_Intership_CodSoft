  /*                    
                                                           CODESOFT TASK:2 
                                                         SIMPLE CALCULATOR 

Develop a calculator program that performs basic arithmetic operation such as addition,subtraction,mulitplication,and division.
Allow the user to to input two number and choose an operation to perform.

*/
#include<iostream>
using namespace std;

int main(){
    double num1,num2;
    char operation;
    cout<<"Enter the First number:- ";
    cin>>num1;
    cout<<"Enter the second number :-";
    cin>>num2;
    cout<<"Enter the operation that you want to perform:- ";
    cin>>operation;
    switch (operation)
    {
    case '+':
        cout<<"The addition of two number is:- "<<num1+num2;
        break;
    case '-':
        cout<<"The subtraction of two number is:- "<<num1-num2;
        break;
    case '*':
        cout<<"The multiplication of two number is:- "<<num1*num2;
        break;
    case '/':
        cout<<"The division of two number is:- "<<num1/num2;
        break;
    }
  return 0;
}