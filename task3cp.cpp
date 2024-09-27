#include<iostream>
#include<string>
using namespace std;
void discount(string country,float tprice);
main()
{
  string country;
  float tprice;
  cout<<"Enter the country's name: ";
  cin>>country;
  cout<<"Enter the ticket price in dollars: $";
  cin>>tprice;
  discount(country,tprice);
}


void discount(string country,float tprice)
{
  float discount,dprice;
  if(country == "Pakistan")
   {
    discount=(tprice*5)/100;
    dprice=tprice-discount;
    cout<<"Final ticket price after discount: $"<<dprice<<endl;
   }  
  if(country == "Ireland")
   {
    discount=(tprice*10)/100;
    dprice=tprice-discount;
    cout<<"Final ticket price after discount: $"<<dprice<<endl;
   }
  if(country == "India")
   {
    discount=(tprice*20)/100;
    dprice=tprice-discount;
    cout<<"Final ticket price after discount: $"<<dprice<<endl;
   }
  if(country == "England")
   {
    discount=(tprice*30)/100;
    dprice=tprice-discount;
    cout<<"Final ticket price after discount: $"<<dprice<<endl;
   }
   if(country == "Canada")
   {
    discount=(tprice*45)/100;
    dprice=tprice-discount;
    cout<<"Final ticket price after discount: $"<<dprice<<endl;
   }
} 



   