#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
void printmaze();
void moveplayer(int x,int y);

int main()
{
 int x=4,y=4;
 system("cls");
 printmaze();
 moveplayer(x,y);
}

void moveplayer(int x,int y)
{
 gotoxy(x,y);
 cout<<"P";
 Sleep(100);
}

void printmaze()
{
 cout<<"#############################"<<endl;
 cout<<"##                         ##"<<endl;
 cout<<"##                         ##"<<endl; 
 cout<<"##                         ##"<<endl; 
 cout<<"##                         ##"<<endl; 
 cout<<"##                         ##"<<endl; 
 cout<<"##                         ##"<<endl; 
 cout<<"##                         ##"<<endl; 
 cout<<"##                         ##"<<endl; 
 cout<<"##                         ##"<<endl; 
 cout<<"#############################"<<endl;
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}