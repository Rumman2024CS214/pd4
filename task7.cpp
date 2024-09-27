#include<iostream>
#include<windows.h>
void printmaze();
void moveplayer(int x,int y);
void gotoxy(int x,int y);
using namespace std;
main()
{
   int x=3,y=2;
   system("cls"); 
   printmaze();
   while(true)
   {
    if(y!=5)
    {
    moveplayer(x,y);
    y=y+1;
    moveplayer(x,y);
    if(y==5)
    {
    while(y!=2)
    {
     moveplayer(x,y);
     y=y-1;
     moveplayer(x,y);
    } 
    }
    
   }
  
 }
}

void moveplayer(int x,int y)
{
  gotoxy(x,y);
  cout<<"P";
  Sleep(200);
  gotoxy(x,y);
  cout<<" ";
}


void printmaze()
{
 cout<<"#####################"<<endl;
 cout<<"#                   #"<<endl;
 cout<<"#                   #"<<endl;
 cout<<"#                   #"<<endl;
 cout<<"#                   #"<<endl;
 cout<<"#                   #"<<endl;
 cout<<"#                   #"<<endl;
 cout<<"#####################"<<endl;
}

void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}