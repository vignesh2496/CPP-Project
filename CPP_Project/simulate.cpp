#include<iostream.h>
#include<fstream.h>
#include<time.h>
#include "classes.h"
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>

int main();
void final();
void win();
void draw();
void lose();
void gotoxy(short x, short y) 
{
    COORD pos = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void sim(team &T1,team &T2)
{
    system("cls");
    fstream f("team.dat",ios::in);
    player p1;
    int l,sum=0;
	for(int i=0;i<5;i++)
	{
        f.read((char *)&p1,sizeof(player));
        sum+=p1.rate;
    }
    
    f.close();
	
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
	
	
	int a,b,p = 0,q = 0,i,j = 9000;
    float k =0;
    srand(time(NULL));
	gotoxy(58,6);
	cout<<"___________________\n";
	gotoxy(58,12);
	cout<<"___________________\n";
	gotoxy(58,7);
	cout<<"|";
	gotoxy(58,8);
	cout<<"|";
	gotoxy(58,9);
	cout<<"|";
	gotoxy(58,10);
	cout<<"|";
	gotoxy(58,11);
	cout<<"|";
	gotoxy(58,12);
	cout<<"|";
	gotoxy(76,7);
	cout<<"|";
	gotoxy(76,8);
	cout<<"|";
	gotoxy(76,9);
	cout<<"|";
	gotoxy(76,10);
	cout<<"|";
	gotoxy(76,11);
	cout<<"|";
	gotoxy(76,12);
	cout<<"|";
	gotoxy(60,8);
    cout<<T1.retname();
    gotoxy(70,8);
    cout<<T2.retname();
	
    while(j--)
	{
        k = k + 0.01;
        gotoxy(63,4);
        cout<<"TIME : "<<(int)k;
    }
   
    a = rand()%3+res;//d
    b = rand()%5;
  
    gotoxy(60,10);
    cout<<"  "<<a;
    gotoxy(70,10);
    cout<<"  "<<b; 
        
   gotoxy(10,8);
    if (a>b)
    {       
		win();
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\nCONGRATULATIONS!!!!  ";
        cout<<T1.retname()<<" won\nYou have won 5000";
		T1.add();
		T1.points+=3;
		T1.w++;
		T2.l++;
	}
           
    else if(a==b)
    {
       draw();
       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\nDraw match";
       T1.points+=1;
       T2.points+=1;
       T1.rem+=2000;
       T2.rem+=2000;
       T1.d++;
       T2.d++;
       cout<<"\nYou win 2000";
    }
   
    else
    {
       lose();
       cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\nHARD LUCK ";
       cout<<T1.retname()<<" lost";
       T2.points+=3;
       T2.add();
       T2.w++;
	   T1.l++;
    }
   
    T1.deduct();
   
}



void sim1(team &T1,team &T2)
{
    system("cls");

	int a,b,p = 0,q = 0,i,j = 9000;
	float k =0;
    srand(time(NULL));
	
    a = rand()%5;
    b = rand()%5;
  
    if (a>b)
    {       
		T1.add();
		T1.points+=3;
		T1.w++;
		T2.l++;
	}
           
    else if(a==b)
    {
       T1.points+=1;
       T2.points+=1;
       T1.rem+=2000;
       T2.rem+=2000;
       T1.d++;
       T2.d++;
    }
   
    else
    {
       T2.points+=3;
       T2.add();
       T2.w++;
	   T1.l++;
    }
   
    T1.deduct();

}



void sim2(team &T1,team &T2)
{
    system("cls");
    fstream f("team.dat",ios::in);
    player p1;
    int l,sum=0;

	for(int i=0;i<5;i++)
	{
        f.read((char *)&p1,sizeof(player));
        sum+=p1.rate;
    }
    
    f.close();
	
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
	
	
	int a,b,p = 0,q = 0,i,j = 9000;
	float k =0;
    srand(time(NULL));
    
    gotoxy(58,6);
	cout<<"___________________\n";
	gotoxy(58,12);
	cout<<"___________________\n";
	gotoxy(58,7);
	cout<<"|";
	gotoxy(58,8);
	cout<<"|";
	gotoxy(58,9);
	cout<<"|";
	gotoxy(58,10);
	cout<<"|";
	gotoxy(58,11);
	cout<<"|";
	gotoxy(58,12);
	cout<<"|";
	gotoxy(76,7);
	cout<<"|";
	gotoxy(76,8);
	cout<<"|";
	gotoxy(76,9);
	cout<<"|";
	gotoxy(76,10);
	cout<<"|";
	gotoxy(76,11);
	cout<<"|";
	gotoxy(76,12);
	cout<<"|";
	
	gotoxy(60,8);
    cout<<T1.retname();
    gotoxy(70,8);
    cout<<T2.retname();
	
    while(j--)
	{
              k = k + 0.01;
              gotoxy(63,4);
              cout<<"TIME : "<<(int)k;
    }
   
    a = rand()%3+res;
    b = rand()%5;
  
    gotoxy(60,10);
    cout<<"  "<<a;
    gotoxy(70,10);
    cout<<"  "<<b; 
        
    gotoxy(10,8);
	
    if (a>b)
    {       
		char ch;
        T1.add();
		T1.points+=3;
		T1.w++;
		T2.l++;
		cout<<"\n\n\n\nBrilliant!!!!:D You are the new champions League Winner.";
		final();
		cout<<"\nDo you want to try again (y/n):";
        cin>>ch;
        
        if(ch=='y')
        {
            system("cls");
            main();
        }
        
        else
            exit(0);
		
	}
           
    else if(a==b)
    {
        char ch;
        T1.points+=1;
        T2.points+=1;
        T1.rem+=2000;
        T2.rem+=2000;
        T1.d++;
        T2.d++;
        cout<<"\n\n\n\nNice game. It has ended in a draw";
        cout<<"\nDo you want to try again (y/n):";
        cin>>ch;
        
        if(ch=='y')
        {
            system("cls");
            main();
        }
        
        else
            exit(0);
    }
   
    else
    {
        char ch;
        T2.points+=3;
        T2.add();
        T2.w++;
	    T1.l++;
	    cout<<"\n\n\n\nBetter luck next time.";
	    lose();
	    cout<<"\nDo you want to try again (y/n):";
        cin>>ch;
        
        if(ch=='y')
        {
            system("cls");
            main();
        }
        
        else
            exit(0);
     }
   
     T1.deduct();
     
}

