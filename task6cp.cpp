#include<iostream>
using namespace std;
void duration(int h,int m);
main()
{
   int h,m;
   cout<<"Enter the number of hours: ";
   cin>>h;
   cout<<"Enter the number of minutes: ";
   cin>>m;
   duration(h,m);


}



void duration(int h,int m)
{
  int m2;
  m2=h*60;
  if(m>m2)
  {
   cout<<"Longer duration: "<<h<<endl;
  }
  if(m<m2)
  {
   cout<<"Longer duration: "<<m<<endl;
  }
}

   