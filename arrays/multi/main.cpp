#include<iostream>


const int ROWS = 3;
const int COLS = 3;

void print_board(char board[][COLS+1])
{
    std::cout << "-------------" << std::endl;
    for(int row=0;row < ROWS;row++)
    {
        for(int col=0;col < COLS;col++)
        {
            if(col == 0)
                std::cout << "| ";
            if(col != 0 && col != COLS-1)
                std::cout << " | ";
            std::cout << board[row][col];
            if(col != 0 && col != COLS-1)
                std::cout << " | ";
            if(col == COLS-1)
                std::cout << " |";
        }
        std::cout << std::endl << "-------------" << std::endl;
    }
}
int main()
{
    char board[ROWS][COLS+1];

    board[0][0] = ' ';
    board[0][1] = 'X';
    board[0][2] = ' ';
    board[0][3] = '\0';
    board[1][0] = ' ';
    board[1][1] = 'X';
    board[1][2] = ' ';
    board[1][3] = '\0';
    board[2][0] = ' ';
    board[2][1] = 'X';
    board[2][2] = ' ';
    board[2][3] = '\0';

    print_board(board);

    return 0;

}
