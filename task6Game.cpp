#include <iostream>
#include <windows.h>

using namespace std;

void printMaze();
void printPlayer();
void printEnemy();
void erasePlayer();
void eraseEnemy();
void movePlayerLeft();
void movePlayerRight();
void moveEnemy1();
void gotoxy(int x, int y);
char getCharAtxy(short int x, short int y);


int pX = 35, pY = 20;
int eX = 2, eY = 2;

int main()
{
    system("cls");
    printMaze();
    printEnemy();
   //  moveEnemy1();
    printPlayer();

    while (true)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            movePlayerLeft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movePlayerRight();
        }

        // moveEnemy1();
        Sleep(200);
    }

    return 0;
}

void movePlayerLeft()
{
    if (getCharAtxy(pX - 1, pY) == ' ')
    {
        erasePlayer();
        pX = pX - 1;
        printPlayer();
    }
}

void movePlayerRight()
{
    if (getCharAtxy(pX + 15, pY) == ' ')
    {
        erasePlayer();
        pX = pX + 1;
        printPlayer();
    }
}

void printMaze()
{

    cout << "########################################################################################" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "#                                                                                      #" << endl;
    cout << "########################################################################################" << endl;
}

void printPlayer()
{
    gotoxy(pX, pY);
    cout << "      /\\     ";
    gotoxy(pX, pY + 1);
    cout << "     /  \\    ";
    gotoxy(pX, pY + 2);
    cout << "|~~~|    |~~~|";
    gotoxy(pX, pY + 3);
    cout << "|~~~|    |~~~|";
    gotoxy(pX, pY + 4);
    cout << "    |    |    ";
    gotoxy(pX, pY + 5);
    cout << "     \\~~/     ";
}
void erasePlayer()
{
    gotoxy(pX, pY);
    cout << "              ";
    gotoxy(pX, pY + 1);
    cout << "              ";
    gotoxy(pX, pY + 2);
    cout << "              ";
    gotoxy(pX, pY + 3);
    cout << "              ";
    gotoxy(pX, pY + 4);
    cout << "              ";
    gotoxy(pX, pY + 5);
    cout << "              ";
}
void printEnemy()
{
    gotoxy(eX, eY);
    cout << "    /\\   ";
    gotoxy(eX, eY + 1);
    cout << "   /  \\  ";
    gotoxy(eX, eY + 2);
    cout << "|||~~~~|||";
    gotoxy(eX, eY + 3);
    cout << "   \\  /  ";
    gotoxy(eX, eY + 4);
    cout << "    \\/   ";
}
void eraseEnemy()
{
    gotoxy(eX, eY);
    cout << "          ";
    gotoxy(eX, eY + 1);
    cout << "          ";
    gotoxy(eX, eY + 2);
    cout << "          ";
    gotoxy(eX, eY + 3);
    cout << "          ";
    gotoxy(eX, eY + 4);
    cout << "          ";
}
void moveEnemy1()
{
    while (true)
    {
        printEnemy();
        Sleep(300);
        eraseEnemy();
        eX = eX + 1;
        if (eX == 74)
        {
            eX = 2;
        }
    }
}
// void moveEnemy2()
// {
//     while (true)
//     {
//         eX = 5;
//         printEnemy();
//         Sleep(300);
//         eraseEnemy();
//         eY = eY + 1;
//         if (eY == 15)
//         {
//             eY = 2;
//         }
//     }
// }
// void moveEnemy3()
// {
//     while (true)
//     {
//         eX = 10;
//         printEnemy();
//         Sleep(300);
//         eraseEnemy();
//         eX = eX + 1;
//         if (eX == 80)
//         {
//             eX = 41;
//         }
//     }
// }
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
                                                                                            : ' ';
}