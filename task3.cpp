/*                    
                                                           CODESOFT TASK:3  
                                                        TICK-TACK-TOE GAME 

Build a simple console based Tic Tac Toe game that allows two players to play agains each other

Game Board:- Create a 3*3 grid as the green board
Players:-Assing 'X' and '0' to two players
Dipaly Board:-Show the current state of the board
Player Input:-Prompt the current player to enter their move
Update Board:-Update  the game board with the player move
check for win:- check if current player has won
check for draw:-Determine if the game is a draw
switch player:- Alternate turn between 'X' and 'O' players
Display Result:Show the result of the game (win ,draw or ongoing)
Play again:-Ask if the player want to play to another game.
*/

#include<iostream>
using namespace std;

static char a[10]={'0','1','2','3','4','5','6','7','8','9'};

void drawboard(char a[]){
    cout<<"   |  "<<a[1]<<"  |  "<<a[2]<<"  |  "<<a[3]<<endl;
    cout<<"---|-----|-----|------"<<endl;
    cout<<"   |  "<<a[4]<<"  |  "<<a[5]<<"  |  "<<a[6]<<endl;
    cout<<"---|-----|-----|------"<<endl;
    cout<<"   |  "<<a[7]<<"  |  "<<a[8]<<"  |  "<<a[9]<<endl;
}

int win(){
     if((a[1]==a[2] && a[2]==a[3]) || (a[4]==a[5]&& a[5]==a[6]) || (a[7]==a[8]&&a[8]==a[9]) || (a[1]==a[4] && a[4]==a[7]) || (a[2]==a[5] && a[5]==a[8]) || (a[3]==a[6]&& a[6]==a[9])
      ||(a[1]==a[5]&& a[5]==a[9]) || (a[3]==a[5]&& a[5]==a[7])){
           return 1;
     }
     if((a[1]=='X' || a[1]=='0') && (a[2]=='X' || a[2]=='O')&& (a[3]=='X' || a[3]=='O')&& (a[4]=='X' || a[4]=='O')&& (a[5]=='X' || a[5]=='O') &&  (a[6]=='X' || a[6]=='O')&& (a[7]=='X' || a[7]=='O')
      && (a[8]=='X' || a[8]=='O') &&(a[9]=='X' || a[9]=='O') ){
         return 0;
      }
     return -1;
}
int main(){
   int pos;
   char player1='X';
   char player2='Y';
   int i=1;
   cout<<"For player 1:-"<<endl;
   drawboard(a);
   cout<<" ---------------------Starting  TIC TAC TOE------------------------------"<<endl;
   do{
      cout<<"Enter the position:-";
      cin>>pos;
      cout<<endl;
      if(pos<=0 || pos>9){
         cout<<"Invalid position"<<endl;
      }
      if(i%2==0){
         cout<<"For player 1:-"<<endl;
         a[pos]='X';
         drawboard(a);
      }else if(i%2==1){
         cout<<"For player 2:- "<<endl;
         a[pos]='O';
         drawboard(a);
      }
      int k=win();
      if(k==1){
         if(i%2==0){
            cout<<"Game Won by player 1 ('X')";
         }else if(i%2==1){
            cout<<"Game Won by player 2 ('O')";
         }
         break;
      }else if(k==0){
         cout<<"Game draw !!!";
         break;
      }
      i++;
   }while(true);
   return 0;
}