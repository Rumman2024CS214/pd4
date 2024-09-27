#include<iostream>
using namespace std;
void isequal(int a,int b);
main()
{
  int num1,num2;
  cout<<"Enter first number: ";
  cin>>num1;
  cout<<"Enter second number: ";
  cin>>num2; 
  isequal(num1,num2);
}


void isequal(int a,int b)
{
  if(a==b)
  {
  cout<<"true"<<endl;
  }
  if(a!=b)
  {
  cout<<"false"<<endl;
  }
}   