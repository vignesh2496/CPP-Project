#include<iostream.h>
#include<fstream.h>
#include<time.h>
#include "classes.h"
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

void gotoxy(short,short); 

void sim1(team &T1,team &T2,short m)
{
    
    fstream f("team.dat",ios::in);
    player p1;
    int l,sum=0;

	while(f)
	{
        f.read((char *)&p1,sizeof(player));
        sum+=p1.rate;
    }

    sum-=p1.rate;
    f.close();
	cout<<" "<<sum<<" ";
	int res;

	if((sum>380)&&(sum<410))
	   res=1;
	
    else if((sum>410)&&(sum<430))
	   res=2;
	
    else if((sum>430)&&(sum<450))
	   res=3;
	
    else if((sum>450)&&(sum<470))
	   res=4;
	
    else if((sum>470)&&(sum<500))
	   res=5;
	
    cout<<res;
	
	int a,b,p = 0,q = 0,i,j = 9000;
	float k =0;
    srand(time(NULL));
	
	gotoxy(10, 50*m);
    cout<<T1.retname();
    gotoxy(20, 50*m);
    cout<<T2.retname();
	
    while(j--)
	{
        k = k + 0.01;
        gotoxy(10,50*m-2);
        cout<<"TIME : "<<(int)k;
    }
   
    a = rand()%3+res;
    b = rand()%5;
  
    gotoxy(10,50*m+2);
    cout<<a;
    gotoxy(20,50*m+2);
    cout<<b; 
        
    gotoxy(10,50*m+4);
    if (a>b)
    {       
		cout<<"\n\nCONGRATULATIONS!!!!";
        cout<<T1.retname()<<" won\nYou have won 5000";
		T1.add();
		T1.points+=3;
	}
           
    else if (a==b)
    {
       cout<<"Draw match";
       T1.points+=1;
       T2.points+=1;
       T1.rem+=2000;
       T2.rem+=2000;
       cout<<"\n\nYou win 2000";
    }
   
    else
    {
       cout<<" HARD LUCK  ";
       cout<<T1.retname()<<" lost";
       T2.points+=3;
       T2.rem+=5000;
    }
   
    T1.deduct();
   
}
