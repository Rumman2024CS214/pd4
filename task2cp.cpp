#include<iostream>
#include<string>
using namespace std;
void reverse(string condition);
main()
{
  string condition;
  cout<<"Enter 'True' or 'False': ";
  cin>>condition;
  reverse(condition);
}


void reverse(string condition)
{
  if(condition=="True")
  {
  cout<<"False"<<endl;
  }
  if(condition=="False")
  {
  cout<<"True"<<endl;
  }
}   