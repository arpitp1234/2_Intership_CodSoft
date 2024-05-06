/*                    
                                                           CODESOFT TASK:1  
                                                         NUMBER GUESSING GAME 

Create a program that generates a random number and asks the user to guess it.Provide feedback on whether the guess it too hight
or too low until the user guesses the correct number.
*/

#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){
      int i;
      //srand() will create different sequence of random number on every program run
      srand(time(0));
      //Creating random number using rand()
      int random_num=(rand())%100;
      int input_num;
      cout<<"Please Note :- [Enter number should be between 1 to 100]"<<endl;
      cout<<"Enter the number that you want to guess :- ";
      do{
          cin>>input_num;
          if(random_num<input_num){
             cout<<"number is less than your input number";
             cout<<endl<<"Enter again:- ";
          }else if(random_num>input_num){
             cout<<"Number is more than your input number";
             cout<<endl<<"Enter again:- ";
          }else{
              cout<<"You have done the right guess   CONGRATULATIONS";
              break;
          } 
      }while(true);
    return 0;
}