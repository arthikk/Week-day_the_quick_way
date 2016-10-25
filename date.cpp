//This program returns day of the week for any date!
//It uses fewest possible if statements! Check it out!
#include<iostream.h>
#include<conio.h>
#include<math.h>
main()
{ clrscr();
  int y,m,d,day;
  char a[7]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"}
 cout<<"Enter year, month, date separated by spaces";
 cin>>y>>m>>d;
 day=3*(int)((9*m-8)/10)-(int)(abs(2*m-4)/5);
 day=day+(int)(5*y/4)-(int)(y/100)+(int)(y/400);
 day=day-(((y%4==1)?1:0)-((y%100==1)?1:0)+((y%400==1)?1:0))*((m<3)?1:0);
 day=day+d;
 day=day%7;
 cout<<"The date falls on a "<<a[day]; 
}
