#include <iostream>
using namespace std;
/* Rules and How to play
** This is pretty much regular Tic-Tac-Toe
** Since there is no UI to place pieces you need to give a spot on the board
** Here is a graphic of the spots
** 1,2,3
** 4,5,6
** 7,8,9
** So if you want to place your piece in the middle press 5 when promted
** The first player is always 'O' and it automatically switches
** So all you gotta do is run the file and follow the intstructions
*/

class TicTacToe{
    private:
    char Board[3][3] = {
        {'-','-','-'},
        {'-','-','-'},
        {'-','-','-'},
    };
    char o = 'O', x = 'X'; //Initilization of X's and O's
    int turn = 0; //While turn is even 'O' goes if turn is odd 'X' goes
    //If turn ever reaches 9 game is a tie
    bool win = false; //Turns to true when someone wins
    int place = 0; //Var for X and O placement

    public:
    TicTacToe(){ //Constructor
        game();
    }

    char player(){//Gets the current player into a char
        if(turn%2==0)
            return '0';
        return 'X';
    }

    //Takes the input into a board placement
    bool placeConvert(){
        switch (place){
            case 1:
                return BoardCheck(0,0);
            case 2:
                return BoardCheck(0,1);
            case 3:
                return BoardCheck(0,2);
            case 4:
                return BoardCheck(1,0);
            case 5:
                return BoardCheck(1,1);
            case 6:
                return BoardCheck(1,2);
            case 7:
                return BoardCheck(2,0);
            case 8:
                return BoardCheck(2,1);
            case 9:
                return BoardCheck(2,2);
            default:
                return BoardCheck(1,1);
            //If a non valid number is put in just set the placement to 5/middle of board
        }
        return false;
    }

    //Checks the board for wins
    void BoardWin(){
        //There are 8 winning combinations So I am just going to hard code each one
        if(Board[0][0]==player()&&Board[0][1]==player()&&Board[0][2]==player())//Top row
            win = true;
        if(Board[1][0]==player()&&Board[1][1]==player()&&Board[1][2]==player())//Middle row
            win = true;
        if(Board[2][0]==player()&&Board[2][1]==player()&&Board[2][2]==player())//Bottom
            win = true;
        if(Board[0][0]==player()&&Board[1][0]==player()&&Board[2][0]==player())//Left Col
            win = true;
        if(Board[0][1]==player()&&Board[1][1]==player()&&Board[2][1]==player())//Middle Col
            win = true;
        if(Board[0][2]==player()&&Board[1][2]==player()&&Board[2][2]==player())//Right Col
            win = true;
        if(Board[0][0]==player()&&Board[1][1]==player()&&Board[2][2]==player())//Diagonal left to right
            win = true;
        if(Board[0][2]==player()&&Board[1][1]==player()&&Board[2][0]==player())//Diagonl right to left
            win = true;
    }

    //Checks if the spot on the board is filled
    bool BoardCheck(int r,int c){
        if(Board[r][c]!='O'&&Board[r][c]!='X'){
            Board[r][c] = player();
            return true;
        }
        else{
            cout<<"This spot is filled"<<endl;
            return false;
        }
    }

    //Prints the board
    void BoardPrint(){
        cout<<"\nThe Current Board"<<endl;
        for(int i=0; i<3; i++){
            for(int k=0; k<3; k++){
                cout<<Board[i][k]<<" ";
            }
            cout<<endl;
        }
    }

    //Runs the game
    void game(){
        cout<<"Tic Tac Toe"<<endl;
        while(!win&&turn<=9){//Game continute if conditions are met (Win is false and turn isn't 9)
            cout<<player()<<"\'s Turn"<<endl;
            cout<<"Where do you want to place your piece (1-9)"<<endl;
            cin>>place;
            while(!placeConvert()){
                cin>>place;
            }
            BoardPrint();
            BoardWin();
            turn++;
        }
        if(win){
            turn--;//Gets rid of turn++ above
            cout<<"Congrats to "<<player()<<" for winning"<<endl;
        }
        else
            cout<<"Damn you losers tied lmao"<<endl;
    }
};

int main(){
    TicTacToe test;//Runs the game
    cout<<"Hit enter something random to close file";
    string end;
    cin>>end;
    return 0;
}