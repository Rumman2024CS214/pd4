#include<iostream>
using namespace std;
void pet(int holidays);
main()
{
  int holidays;
  cout<<"Holidays: ";
  cin>>holidays;
  pet(holidays); 
}

void pet(int holidays)
{
  int wdays,gametime,diff,timehours,timemin;
  wdays=365-holidays;
  gametime=(wdays*63)+(holidays*127);
  if(gametime<30000)
  {
  diff=30000-gametime;
  timehours=diff/60;
  timemin=diff%60;
  cout<<"Tom will sleep well"<<endl;
  cout<<timehours<<" hours and "<<timemin<<" minutes less to play"<<endl; 
  }
  
   if(gametime>30000)
  {
  diff=gametime-30000;
  timehours=diff/60;
  timemin=diff%60;
  cout<<"Tom will run away"<<endl;
  cout<<timehours<<" hours and "<<timemin<<" minutes more to play"<<endl; 
  }
}  
  
 
