// Tic-Tac-Toe 게임
// C++으로 구현

#include <iostream>
using namespace std;

int player = 1;
short x;
short y;
char board[3][3];

// 1: player1 win, 2: player2 win, 3: draw
int gameResult = 0;

void Print_Board()
{
    // TODO: Print Tic-Tac-Toe board
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j];
            if (j < 2)
                cout << " | ";
        }
        if (i < 2)
            cout << endl
                 << "---------" << endl;
    }
    cout << endl;
    cout << endl;
}

void Initialize_Board()
{
    // TODO: Initialize Tic-Tac-Toe board
    for (auto &row : board)
    {
        for (char &column : row)
        {
            column = ' ';
        }
    }
}

void Player_Input()
{
    // TODO: Input integer type number from player
    while (1)
    {
        cout << "Player" << player << "Turn, input board position number" << endl;
        cin >> x >> y;
        if ((x > 2 || x < 0) || (y > 2 || y < 0))
        {
            cout << "Out of Range" << endl;
            continue;
        }

        if (board[x][y] != ' ')
        {
            cout << "duplicate position" << endl;
            continue;
        }

        if (player == 1)
        {
            board[x][y] = 'X';
            break;
        }
        else
        {
            board[x][y] = 'O';
            break;
        }
    }

    player = player == 2 ? 1 : 2;
}

int Check_Result()
{
    // TODO: Cheak the board
    // If someone has a winner, change the value of 'gameResult'
    int rowIndex = 0;
    int columnIndex = 0;
    int drawCount = 9;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // check draw
            if (board[i][j] != ' ')
            {
                drawCount--;
            }
            if (drawCount <= 0)
                return 3;
            // check row
            if (j != 2 && board[rowIndex][j] == board[rowIndex][j + 1])
            {
                if (board[rowIndex][j + 1] == board[rowIndex][j + 2])
                {
                    if (board[rowIndex][j + 2] == 'X')
                        return 1;
                    else if (board[rowIndex][j + 2] == 'O')
                        return 2;
                }
            }
            // check column
            if (i != 2 && board[i][columnIndex] == board[i + 1][columnIndex])
            {
                if (board[i + 1][columnIndex] == board[i + 2][columnIndex])
                {
                    if (board[i + 2][columnIndex] == 'X')
                        return 1;
                    else if (board[i + 2][columnIndex] == 'O')
                        return 2;
                }
            }
            else
            {
                columnIndex++;
            }
            // check diagonal
            if (board[0][0] == board[1][1])
            {
                if (board[1][1] == board[2][2])
                {
                    if (board[2][2] == 'X')
                        return 1;
                    else if (board[2][2] == 'O')
                        return 2;
                }

                if (board[0][2] == board[1][1])
                {
                    if (board[1][1] == board[2][0])
                    {
                        if (board[2][0] == 'X')
                            return 1;
                        else if (board[2][0] == 'O')
                            return 2;
                    }
                }
            }
        }
        rowIndex++;
    }

    return 0;
}

int main()
{
    Initialize_Board();

    Print_Board();

    do
    {
        Player_Input();
        gameResult = Check_Result();
        Print_Board();
    } while (gameResult == 0);

    if (gameResult == 1)
        cout << "Player 1 Win!" << endl;
    else if (gameResult == 2)
        cout << "Player 2 Win!" << endl;
    else if (gameResult == 3)
        cout << "draw" << endl;

    return 0;
}