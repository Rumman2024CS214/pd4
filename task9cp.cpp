#include<iostream>
using namespace std;
void tpcheck(int people,int rolls);
main()
{
  int people,rolls;
  cout<<"Number of people in household: ";
  cin>>people;
  cout<<"Number of rolls of cp: ";
  cin>>rolls;
  tpcheck(people,rolls);     
}

void tpcheck(int people,int rolls)
{
  int rolluse,sheets,days;
  sheets=rolls*500;
  rolluse=people*57;
  days=sheets/rolluse;
  if(days>=14)
  {
  cout<<"Your TP will last "<<days<<" days, no need to panic"<<endl;
  }
  if(days<14)
  {
  cout<<"Your TP will only last "<<days<<" days, buy more!"<<endl;
  }
}
  
