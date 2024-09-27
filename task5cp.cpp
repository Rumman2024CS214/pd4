#include<iostream>
using namespace std;
void possiblebonus(int yourposition,int friendposition);
main()
{
  int yourposition,friendposition;
  cout<<"Enter your position: "; 
  cin>>yourposition;
  cout<<"Enter friend's position: ";
  cin>>friendposition;
  possiblebonus(yourposition,friendposition);

}


void possiblebonus(int yourposition,int friendposition)
{
  yourposition=yourposition+6;
  if(yourposition>=friendposition)
  {
   cout<<"True"<<endl;
  }
  if(yourposition<friendposition)
  {
  cout<<"False"<<endl;
  }
}


   