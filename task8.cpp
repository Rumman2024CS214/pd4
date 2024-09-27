#include<iostream>
#include<string>
#include<windows.h>
using namespace std;
void mainmenu();
void aggregate(string name1,string name2,string name3,float matric1,float matric2,float matric3,float inter1,float inter2,float inter3,float ecat1,float ecat2,float ecat3);
void compare(string name1,string name2,string name3,float agg1,float agg2,float agg3);
main()
{
   system("cls");
   mainmenu();
   string name1,name2,name3;
   float matric1,matric2,matric3;
   float inter1,inter2,inter3;
   float ecat1,ecat2,ecat3;
   cout<<"Enter your name: ";
   cin>>name1;
   cout<<"Enter your marks in matric (out of 1100): ";
   cin>>matric1;
   cout<<"Enter your marks in inter (out of 550): ";
   cin>>inter1;
   cout<<"Enter your marks in ECAT (out of 400): ";
   cin>>ecat1;
   cout<<"Enter your name: ";
   cin>>name2;
   cout<<"Enter your marks in matric (out of 1100): ";
   cin>>matric2;
   cout<<"Enter your marks in inter (out of 550): ";
   cin>>inter2;
   cout<<"Enter your marks in ECAT (out of 400): ";
   cin>>ecat2;
   cout<<"Enter your name: ";
   cin>>name3;
   cout<<"Enter your marks in matric (out of 1100): ";
   cin>>matric3;
   cout<<"Enter your marks in inter (out of 550): ";
   cin>>inter3;
   cout<<"Enter your marks in ECAT (out of 400): ";
   cin>>ecat3;
   aggregate(name1,name2,name3,matric1,matric2,matric3,inter1,inter2,inter3,ecat1,ecat2,ecat3);  
}

void compare(string name1,string name2,string name3,float agg1,float agg2,float agg3)
{
  if(agg1>agg2 && agg1>agg3)
   {
    cout<<"Roll No. 1: "<<name1<<"  Aggregate: "<<agg1<<" %"<<endl;
    if(agg2>3)
    {
    cout<<"Roll No. 2: "<<name2<<" Aggregate: "<<agg2<<" %"<<endl;
    cout<<"Roll No. 3: "<<name3<<" Aggregate: "<<agg3<<" %"<<endl;
    }
    else if(agg3>2)
    {
    cout<<"Roll No. 2: "<<name3<<" Aggregate: "<<agg3<<" %"<<endl;
    cout<<"Roll No. 3: "<<name2<<" Aggregate: "<<agg2<<" %"<<endl;
    }
   }  
  else if(agg2>agg1 && agg2>agg3)
   {
    cout<<"Roll No. 1: "<<name2<<"  Aggregate: "<<agg2<<" %"<<endl;
    if(agg1>3)
    {
    cout<<"Roll No. 2: "<<name1<<" Aggregate: "<<agg1<<" %"<<endl;
    cout<<"Roll No. 3: "<<name3<<" Aggregate: "<<agg3<<" %"<<endl;
    }
    else if(agg3>1)
    {
    cout<<"Roll No. 2: "<<name3<<" Aggregate: "<<agg3<<" %"<<endl;
    cout<<"Roll No. 3: "<<name1<<" Aggregate: "<<agg1<<" %"<<endl;
    }
   }
  else if(agg3>agg1 && agg3>agg2)
   {
    cout<<"Roll No. 1: "<<name3<<"  Aggregate: "<<agg3<<" %"<<endl;
    if(agg2>1)
    {
    cout<<"Roll No. 2: "<<name2<<" Aggregate: "<<agg2<<" %"<<endl;
    cout<<"Roll No. 3: "<<name1<<" Aggregate: "<<agg1<<" %"<<endl;
    }   
    else if(agg1>2)
    {
    cout<<"Roll No. 2: "<<name1<<" Aggregate: "<<agg1<<" %"<<endl;
    cout<<"Roll No. 3: "<<name2<<" Aggregate: "<<agg2<<" %"<<endl;
    }
   }
}
  
void aggregate(string name1,string name2,string name3,float matric1,float matric2,float matric3,float inter1,float inter2,float inter3,float ecat1,float ecat2,float ecat3)
{
  
  float p1,p2,p3,a1,a2,a3,agg1; 
  p1=(matric1/1100)*100;
  p2=(inter1/550)*100;
  p3=(ecat1/400)*100;
  a1=(p1*25)/100;
  a2=(p2*45)/100;
  a3=(p3*30)/100;
  agg1=a1+a2+a3;
  cout<<"Aggregate of "<<name1<<" is: "<<agg1<<endl;
  float p4,p5,p6,a4,a5,a6,agg2;
  p4=(matric2/1100)*100;
  p5=(inter2/550)*100;
  p6=(ecat2/400)*100;
  a4=(p4*25)/100;
  a5=(p5*45)/100;
  a6=(p6*30)/100;
  agg2=a4+a5+a6;
  cout<<"Aggregate of "<<name2<<" is: "<<agg2<<endl;
  float p7,p8,p9,a7,a8,a9,agg3;
  p7=(matric3/1100)*100;
  p8=(inter3/550)*100;
  p9=(ecat3/400)*100;
  a7=(p7*25)/100;
  a8=(p8*45)/100;
  a9=(p9*30)/100;
  agg3=a7+a8+a9;
  cout<<"Aggregate of "<<name3<<" is: "<<agg2<<endl;
  compare(name1,name2,name3,agg1,agg2,agg3);
} 
 


void mainmenu()
{
 cout<<"***************************************************************************************************************************************************************"<<endl;
 cout<<"**  ##   ##  ###    ## ###### ##      ## ##### #####   ####  ###### ###### ##    ##     ####  #####  ###     ### ######  ####  #### ######  #####  ###    ## **"<<endl;
 cout<<"**  ##   ##  ## #   ##   ##    ##    ##  ##    ##  ## ##       ##     ##    ##  ##     ##  ## ##  ## ## #   # ##   ##   ##    ##      ##   ##   ## ## #   ## **"<<endl;
 cout<<"**  ##   ##  ##  #  ##   ##     ##  ##   ####  #####   ####    ##     ##     ####      ###### ##  ## ##  # #  ##   ##    ####  ####   ##   ##   ## ##  #  ## **"<<endl;
 cout<<"**  ##   ##  ##   # ##   ##      ####    ##    ## ##      ##   ##     ##      ##       ##  ## ##  ## ##   #   ##   ##       ##    ##  ##   ##   ## ##   # ## **"<<endl;
 cout<<"**  #######  ##    ### ######     ##     ##### ##  ##  ####  ######   ##      ##       ##  ## #####  ##       ## ######  ####  #### ######  #####  ##    ### **"<<endl;
 cout<<"**                                                                                                                                                           **"<<endl;
 cout<<"**     ###     ###   ####   ###    ##   ####    #####  ##### ###     ### ##### ###    ## ######       #### ##    ##  #### ###### ##### ###     ###           **"<<endl; 
 cout<<"**     ## #   # ##  ##  ##  ## #   ##  ##  ##  ##      ##    ## #   # ## ##    ## #   ##   ##        ##     ##  ##  ##      ##   ##    ## #   # ##           **"<<endl;
 cout<<"**     ##  # #  ##  ######  ##  #  ##  ######  ##  ### ####  ##  # #  ## ####  ##  #  ##   ##         ####   ####    ####   ##   ####  ##  # #  ##           **"<<endl;
 cout<<"**     ##   #   ##  ##  ##  ##   # ##  ##  ##  ##   ## ##    ##   #   ## ##    ##   # ##   ##            ##   ##        ##  ##   ##    ##   #   ##           **"<<endl;
 cout<<"**     ##       ##  ##  ##  ##    ###  ##  ##   #####  ##### ##       ## ##### ##    ###   ##         ####    ##     ####   ##   ##### ##       ##           **"<<endl; 
 cout<<"***************************************************************************************************************************************************************"<<endl; 
}          