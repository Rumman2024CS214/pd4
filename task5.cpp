#include<iostream>
#include<windows.h>
void printname();
void gotoxy(int x,int y);
using namespace std;
main()
{
   system("cls");
   printname();

}

void printname()
{
   gotoxy(50,21);
   cout<<"######   ##   ##  ###   ###  ###   ###   ####   ###    ##        "<<endl;
   gotoxy(50,22);
   cout<<"##   ##  ##   ##  ## # # ##  ## # # ##  ##  ##  ## #   ##        "<<endl;
   gotoxy(50,23);
   cout<<"######   ##   ##  ##  #  ##  ##  #  ##  ######  ##  #  ##        "<<endl;
   gotoxy(50,24);
   cout<<"##  ##   ##   ##  ##     ##  ##     ##  ##  ##  ##   # ##        "<<endl;
   gotoxy(50,25);
   cout<<"##   ##  #######  ##     ##  ##     ##  ##  ##  ##    ###        "<<endl;  
}



void gotoxy(int x,int y)
{
   COORD coordinates;
   coordinates.X=x;
   coordinates.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}