//CODE FOR PLAYING TIC-TOC-TOE GAME
// COPYRIGHT CONTENT BY: DEVANSH DUBEY
//  BELOW CODE IS FOR HELP PURPOSE ONLY.
//   RECOMMENDED TO CODE IT BY YOURSELF
//    THANKS FOR YOUR VISIT :)


#include<bits/stdc++.h>
using namespace std;

static char board[3][3] = {{'.', '.', '.'}, {'.', '.', '.'}, {'.', '.', '.'}}, ch1;
string p1, p2;
int r, c;
int alt = 0;

void boardReset(){
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            board[i][j] = '.';
}

void printBoard(){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << " " << board[i][j] << " ";
            if(j != 2)
                cout << "|";
        }
        cout << endl;
        if(i != 2)
            cout << "-----------\n";
    }
}

bool isWinner(char ch4){
    return ((board[0][0] == ch4 && board[0][1] == ch4 && board[0][2] == ch4) ||
     (board[1][0] == ch4 && board[1][1] == ch4 && board[1][2] == ch4) ||
     (board[2][0] == ch4 && board[2][1] == ch4 && board[2][2] == ch4) || 
     (board[0][0] == ch4 && board[1][0] == ch4 && board[2][0] == ch4) || 
     (board[0][1] == ch4 && board[1][1] == ch4 && board[2][1] == ch4) ||
     (board[0][2] == ch4 && board[1][2] == ch4 && board[2][2] == ch4) ||
     (board[0][0] == ch4 && board[1][1] == ch4 && board[2][2] == ch4) ||
     (board[0][2] == ch4 && board[1][1] == ch4 && board[2][0] == ch4));
}

bool Boardfull(){
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            if(board[i][j] == '.')
                return false;
    return true;
}

void makeMove(char c1){
    if(board[r-1][c-1] == '.')
        board[r-1][c-1] = c1;
    else{
        cout << "\nThis Position is Already Occupied!\n\n";
        alt--;
    }
}

void playGame(){
    do{
        if(alt % 2 == 0){
            cout << endl << "\n" << p1 << "'s Turn\n";
            ch1 = 'X';
        }
        else{
            cout << endl << "\n" << p2 << "'s Turn\n";
            ch1 = 'O';
        }
        while(1){
            cout << "Enter Column No. you want to make move: ";
            cin >> c;
            if(c < 1 || c > 9)
                cout << "Enter Coulmn in Range 1 to 9\n";
            else
                break;
        }
        while(1){
            cout << "Enter Row No. you want to make move: ";
            cin >> r;
            if(r < 1 || r > 9)
                cout << "Enter Row in Range 1 to 9\n";
            else
                break;
        }
        makeMove(ch1);
        alt++;
        printBoard();
    }while(!isWinner(ch1) && !Boardfull());
}

int main(){
    char ch;
    do{
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "\t\t\tWELCOME TO THE TIC-TAC-TOE GAME\n";
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "\nEnter First Player's first Name: ";
        cin >> p1;
        cout << "Symbol Assigned to " << p1 << " is 'X'\n";
        cout << "\nEnter Second Player's first Name: ";
        cin >> p2;
        cout << "Symbol Assigned to " << p2 << " is 'O'\n\n";
        printBoard();
        playGame();
        cout << "\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "\t\t\t\tRESULT: ";
        if(Boardfull() && !(isWinner('X') || isWinner('Y')))
            cout << "Game Tie!\n";
        else if(alt % 2 == 0)
            cout << p2 << " Wins!\n";
        else
            cout << p1 << " Wins!\n"; 
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";       
        cout << "\nDo You Want to Play Again? (Y / N): ";
        boardReset();
        alt = 0;
        cin >> ch;
    }while(ch != 'n' && ch != 'N');
}
