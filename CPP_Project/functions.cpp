#include<iostream.h>
#include<fstream.h>
#include<string.h>
#include "classes.h"
#include<time.h>
#include<stdlib.h>
#include<conio.h>

//global data
player p2[25];
team t[8];
int I;
int main();
void createlist()
{
    t[0].get("Team1","AON");
    t[1].get("Team2","Standard Chartered");
    t[2].get("Team3","Samsung");
    t[3].get("Team4","Nokia");
    t[4].get("Team5","Pirelli");
    t[5].get("Team6","Qatar Founation");
    t[6].get("Team7","MRF");
    t[7].get("Team8","bwin");
}


//choosing the team
void chooseteam()
{
    int i;
    char str[20];
    cout<<"\nEnter the team name you want to manage:";
    cin>>str;
    int flag=0;
    for(i=0;i<8;i++)
    {
        if(stricmp(t[i].retname(),str)==0)
        {
            flag=1;
            I=i;
        }
    }
     
    if(flag==0)
    {
        cout<<"Invalid name. Please enter a team name from the given list.";
        cout<<"\nEnter the team name you want to manage:";
        cin>>str;
        for(i=0;i<8;i++)
        {
            if(stricmp(t[i].retname(),str)==0)
            {
                flag=1;
                I=i;
            }
        }
    }
}

//creating the list of players avilable
void createplayerlist()
{
	fstream f("playerlist.dat",ios::out);
	int i;
	
	p2[0].get("Messi",20000,95);
    p2[1].get("Ronaldo",19000,94);
    p2[2].get("Neymar",17000,92);
    p2[3].get("Beckham",16000,91);
    p2[4].get("Ozil",15000,90);
    p2[5].get("Iniesta",14500,89);
    p2[6].get("Persie",14000,88);
    p2[7].get("Ribery",13000,87);
    p2[8].get("Owen",12500,86);
    p2[9].get("Neuer",12000,90);
    p2[10].get("Xavi",11000,85);
    p2[11].get("Robben",10000,84);
    p2[12].get("Suarez",9000,83);
    p2[13].get("Valdes",9500,88);
    p2[14].get("Pique",8000,82);
    p2[15].get("Gerrard",8500,84);
    p2[16].get("Lampard",7500,81);
    p2[17].get("Aguero",7000,80);
    p2[18].get("Cahill",6000,79);
    p2[19].get("Cech",6500,81);
    p2[20].get("Casillas",7500,84);
    p2[21].get("Rooney",7000,80);
    p2[22].get("Fabregas",6500,82);
    p2[23].get("Kompany",5500,79);
    p2[24].get("Jones",5000,78);
    for(i=0;i<25;i++)
	f.write((char*)&p2[i],sizeof(player));
	
    f.close();
}


//displaying the list
void displaylist()
{
	int i=0;
	fstream f1("playerlist.dat",ios::in);
	player p1;
	for(i=0;i<25;i++)
	{
        f1.read((char*)&p1,sizeof(player));
		p1.disp();
	}
   
    f1.close();
}

//choosing 5 players
void chooseplayers()
{
 	int i,j,k,m;
 	fstream f[10];
 	char str[5][15]; 
 	 
    fstream f1("team.dat",ios::out);
    player p1;
	char ply[20];  
	cout<<"\nEnter the names of 5 players from the given list:";
	for(i=0;i<5;i++)
	{
        int flag=0;
        int flag1=0;
        cin>>ply;
        strcpy(str[i],ply);
        f[i].open("playerlist.dat",ios::in);
		for(j=0;j<25;j++)
		{
                 
            f[i].read((char*)&p1,sizeof(player));
            if(stricmp(p1.retname(),ply)==0)
            {
                for(k=0;k<i;k++)
                {
                    if(stricmp(ply,str[k])==0)
                    flag1=1;
                }
                                               
                if(flag1==1)
                {
                    cout<<"This player has already been bought.\nPlease enter another player's name:";
                    fstream F;
                    char ply1[20];
                    cin>>ply1;
                    player p2;
                    strcpy(str[i],ply1);
                    F.open("playerlist.dat",ios::in);
		            for(m=0;m<25;m++)
	                {
                        F.read((char*)&p2,sizeof(player));
                        if(stricmp(p2.retname(),ply1)==0)
                        {
                            flag=1;
                            t[I].p[i]=p2;
                            f1.write((char*)&p2,sizeof(player));
                            t[I].buy(p2);
                        }
                    }
                    F.close();      
                }
                 
                else        
                {
                    flag=1;
                    t[I].p[i]=p1;
                    f1.write((char*)&p1,sizeof(player));
                    t[I].buy(p1);
                }                                 
            }
        }

        f[i].close();
        if(flag==0)
        {
            cout<<"\nInvalid name\nPlease enter names only from the list\n";
            cin>>ply;
            strcpy(str[i],ply);
            f[i+5].open("playerlist.dat",ios::in);
            while(f[i+5])
		    {
                f[i+5].read((char*)&p1,sizeof(player));
                         if(stricmp(p1.retname(),ply)==0)
                          {
                 
                                               flag=1;
                                               t[I].p[i]=p1;
                                               f1.write((char*)&p1,sizeof(player));
                                               t[I].buy(p1);
                                               
                                               
                          }
                    }
                    f[i+5].close();
        }
    t[I].disp4();   
	}
	f1.close();
}   

void dispteamlist()
{
    int i;
    fstream f("team.dat",ios::in);
    player p1;
	for(i=0;i<5;i++)
	{
        f.read((char *)&p1,sizeof(player));  
        p1.disp();
    }
    f.close();
 }  
        
int c;  
void sell()
{
	
	//delete
	char str[20],i;
	cout<<"\nEnter the player name who you want to sell(only from your team list):";
	cin>>str;
	fstream f("team.dat",ios::in);
	fstream f1("temp.dat",ios::out);
	player p1;
	int flag;
	for(i=0;i<5;i++)
	{
	    flag=0;
        f.read((char *)&p1,sizeof(player));  
		
        if(stricmp(str,p1.retname())==0)
		{
            flag=1;
            t[I].sell(p1);
            c=i;
        }
		else
	    {
           t[I].p[i]=p1;
           f1.write((char*)&p1,sizeof(player));
        }
     }
     
	f.close();
	f1.close();
	remove("team.dat");
	rename("temp.dat","team.dat");
	cout<<"The player has been sold successfully.\nYour balance is :"<<t[I].rem;
}


void add()
{
	//add
	char str[20],ch;
    player p1;
    int j;
    cout<<"\n\nPLAYER LIST\n___________\n\n";
	displaylist();
	cout<<"\nEnter the player name you want to buy:";
	cin>>str; 
	fstream f2("playerlist.dat",ios::in);
	fstream f3("team.dat",ios::app|ios::out);
	for(j=0;j<25;j++)
	{
		f2.read((char *)&p1,sizeof(player));
		if(stricmp(str,p1.retname())==0)
		{
			t[I].p[c]=p1;
            f3.write((char*)&p1,sizeof(player));
			t[I].buy(p1);
		}
	}
	f2.close();
	f3.close();

	if(t[I].rem<=0)
    {
        cout<<"\n\nOOPS!! You are out of cash\n YOU'RE FIRED FROM THE JOB";
        cout<<"\nDo you want to try again (y/n):";
        cin>>ch;
        if(ch=='y')
        {
            system("cls");
            for(int k=0;k<8;k++)
            {
                t[k].rem=60000;
                t[k].points=0;
                t[k].w=0;
                t[k].l=0;
                t[k].d=0;
            }
            main();
        }

        else if(ch=='n')
            exit(0);
        
        else
        {
            cout<<"Invalid.Enter again:";
            cin>>ch;
            if(ch=='y')
            {
                system("cls");
                for(int k=0;k<8;k++)
                {
                    t[k].rem=60000;
                    t[k].points=0;
                    t[k].w=0;
                    t[k].l=0;
                    t[k].d=0;
                }
                main();
            }
            
            else if(ch=='n')
                exit(0);
        }
    }
	
	cout<<"The player has been bought successfully.\nYour balance is :"<<t[I].rem;
	cout<<"\n\nNEW TEAM LIST\n_____________\n\n";
    dispteamlist();
 }    

void sort(team T[8])
{
    team temp;
    int pos;
    int max;
    for(int i=0;i<7;i++)
    {
        max=T[i].points;
        pos=i;
        for(int j=i+1;j<8;j++)
        {
            if(T[j].points>max)
            {
                pos=j;
                max=T[j].points;
            }
        }
             
        temp=T[i];
        T[i]=T[pos];
        T[pos]=temp;
    }
}
                     
                     

             
