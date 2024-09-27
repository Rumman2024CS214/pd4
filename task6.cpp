#include<iostream>
#include<windows.h>
void printh();
void printa();
void prints();
void printn();
void gotoxy(int x,int y);
using namespace std;
main()
{
   system("cls"); 
   printh();
   printa();
   prints();
   prints();
   printa();
   printn();

}

void printh()
{
 cout<<" ##   ##     "<<endl;
 cout<<" ##   ##     "<<endl;
 cout<<" #######     "<<endl;
 cout<<" ##   ##     "<<endl;
 cout<<" ##   ##     "<<endl;
 cout<<"             "<<endl;
}

  

void printa()
{
 cout<<"  ####         "<<endl;
 cout<<" ##  ##        "<<endl;
 cout<<" ######        "<<endl;
 cout<<" ##  ##        "<<endl;
 cout<<" ##  ##        "<<endl;
 cout<<"               "<<endl;  
}

void prints()
{
 cout<<"  #####          "<<endl;
 cout<<" ##              "<<endl;
 cout<<"  #####          "<<endl;
 cout<<"      ##         "<<endl;
 cout<<"  #####          "<<endl;
 cout<<"                 "<<endl;
}            




void printn()
{
 cout<<" ###    ##        "<<endl;
 cout<<" ## #   ##        "<<endl;
 cout<<" ##  #  ##        "<<endl;
 cout<<" ##   # ##        "<<endl;
 cout<<" ##    ###        "<<endl;  
 cout<<"                   "<<endl;
}

void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}