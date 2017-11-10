#include<iostream>
#include<string>
#include<iomanip>


const int ROWS = 10;
const int COLS = 10;

class Coord
{
public:
    Coord(char col,int row);
    int get_row();
    int get_col();
private:
    int m_row;
    char m_col;
};

Coord::Coord(char col,int row) : m_col(col),m_row(row)
{
}

int Coord::get_row()
{
    return m_row-1;
}

int Coord::get_col()
{
    return m_col-'A';
}

class Ship
{
public:
    Ship(int id,const std::string& name,const Coord& front,const Coord& rear);
    int get_id();
    std::string get_name();
    Coord get_front();
    Coord get_rear();
private:
    int m_id;
    std::string m_name;
    Coord m_front;
    Coord m_rear;
};

Ship::Ship(int id,const std::string& name,const Coord& front,const Coord& rear) 
    : m_id(id),m_name(name),m_front(front),m_rear(rear)
{
}

int Ship::get_id()
{
    return m_id;
}

std::string Ship::get_name()
{
    return m_name;
}

Coord Ship::get_front()
{
    return m_front;
}

Coord Ship::get_rear()
{
    return m_rear;
}

void init_board(int board[][COLS])
{
    for(int row=0;row<ROWS;row++)
    {
        // process columns
        for(int col=0;col<COLS;col++)
            board[row][col] = 0;
    }
}

void print_board(int board[][COLS])
{
    std::string col_header = " ABCDEFGHIJ";
    for(int col=0;col<col_header.size();col++)
        std::cout << std::setw(5) << col_header[col];

    std::cout << std::endl;

    for(int row=0;row<ROWS;row++)
    {
        // process columns
        std::cout << std::setw(5) << (row+1);
        for(int col=0;col<COLS;col++)
            std::cout << std::setw(5) << board[row][col];
        // print new line for new row
        std::cout << std::endl;
        std::cout << std::endl;
    }
}

int main()
{
    int board[ROWS][COLS];
    init_board(board);
    Ship destroyer(1,"destroyer",Coord('B',2),Coord('B',3));
    board[destroyer.get_front().get_row()][destroyer.get_front().get_col()] = destroyer.get_id();
    board[destroyer.get_rear().get_row()][destroyer.get_rear().get_col()] = destroyer.get_id();
    print_board(board);
    return 0;

}
