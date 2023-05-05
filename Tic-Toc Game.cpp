#include<iostream>
using namespace std;
void display_board(char board[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
// check the winner 
bool check_win(char board[3][3],char sym){
    //check the row is winning
    for(int i=0;i<3;i++){
        if(board[i][0]==sym &&board[i][1] ==sym &&board[i][2] ==sym ){
            return true;
        }
    }
// check the col is winning
      for(int i=0;i<3;i++){
        if(board[0][i] ==sym &&board[1][i] ==sym &&board[2][i] ==sym ){
            return true;
        }
    }
    // check the diagonally
    // check the left diagonal
    if(board[0][0]==sym && board[1][1]==sym && board[2][2]==sym ){
        return true;
    }
    //check the right diagonal
    if(board[0][2]==sym && board[1][1]==sym && board[2][0]==sym ){
        return true;
    }
    return false;
}
int main(){
    char board[3][3]={{'.','.','.'},{'.','.','.'},{'.','.','.'}};
    char Player1 ,Player2;
    //choose the symbol;
    cout<<"Player 1: ";
    cin>>Player1;
    cout<<endl;
    if(Player1=='X'){
        Player2='O';
    }
    else{
        Player2='X';
    }
    cout<<"Player 2: "<<Player2<<endl;
    char curr=Player1;
     
     // display board
     cout<<"Welcome the Tic toc Game"<<endl;
     cout <<"Let's start the game"<<endl;

     while(true){
        display_board(board);

        int r ,c;
        cout<<curr<<"'s turn Enter the row and col (1-3) ";
        cin>>r>>c;

        //if row and col is invalid 
        if(r<1||c<1||r>3||c>3){
            cout<<"the invalid Position "<<endl;
            continue;
        }

        if(board[r-1][c-1]!='.'){
            cout<<"The Position already occupied in this game"<<endl;
            continue;
        }
        //update the game board
        board[r-1][c-1]=curr;
        //check the winner
        if(check_win(board,curr)){
            if(curr=='X'&& Player1=='X'){
                cout<<"Congulation,Player 1 won"<<endl;
            }
            else if(curr=='O'&& Player1=='O'){
               cout<<"Congulation,Player 1 won"<<endl;
            }
            else if(curr=='X'&& Player2=='X'){
               cout<<"Congulation,Player 2 won"<<endl;
            }
            else if(curr=='O'&& Player2=='O'){
               cout<<"Congulation,Player 2 won"<<endl;
            }
            break;
        } 

        //for the tie game

        bool tie=true;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(board[i][j]=='.'){
                    tie=false ;
                    break;
                }
            }
        }
         if(tie==true){
            cout<<"it's a tie game"<<endl;
         }

         //Alternate the Player 
         curr=(curr==Player1) ? Player2 :Player1;

     }
//Display the Board
display_board(board);
 
 return 0;
}
