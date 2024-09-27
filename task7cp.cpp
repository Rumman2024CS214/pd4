#include<iostream>
using namespace std;
void flowershop(float redrose,float whiterose,float tulips);
main()
{
  float redrose,whiterose,tulips;
  cout<<"Red Rose: ";
  cin>>redrose;
  cout<<"White Rose: ";
  cin>>whiterose;
  cout<<"Tulips: ";
  cin>>tulips;
  flowershop(redrose,whiterose,tulips);

}



void flowershop(float redrose,float whiterose,float tulips)
{
  float rrprice,wrprice,tprice,total,discount,discountprice;
  rrprice=redrose*2;
  wrprice=whiterose*4.1;
  tprice=tulips*2.5;
  total=rrprice+wrprice+tprice;
  cout<<"Original Price: $"<<total<<endl;
  if(total>200)
   {
   discount=(total*20)/100;
   discountprice=total-discount;
   cout<<"Price after discount: $"<<discountprice<<endl;
   }
}
     