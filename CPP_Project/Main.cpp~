#include<iostream.h>
#include<conio.h>
#include "classes.h"

int main();
void chooseteam();
void loads();
void createplayerlist();
void createlist();
void displaylist();
void chooseplayers();
void dispteamlist();
void sim(team&,team&);
void sim1(team&,team&);
void sim2(team&,team&);
void pointstable();
extern int I;
extern team t[8];
extern player p2[25];
void sell();
void add();
void sort(team [8]);
void function(char *);
void pointstable();
void start()
{
    
	char ch,ch1;
	loads();
	cout<<"\t\t\t\t\t\t\tWELCOME TO MANAGER MODE\n\t\t\t\t\t\t\t_______________________\n\n\n";
    createlist();
    chooseteam(); 
    createplayerlist();
    cout<<"\nPlease enter the manager details\n\n";
    t[I].get2();
    cout<<"\n\nTEAM AND MANAGER DETAILS\n________________________\n\n";
    t[I].disp3();
    t[I].disp1();
    t[I].disp2();
    
    cout<<"\nAre you ready to begin(y/n):";
	cin>>ch;
	cout<<"\n\n\nPLAYER LIST\n___________\n\n";
	  
    if(ch=='y')
	{
        displaylist();   
        chooseplayers();
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
                 
        cout<<"\nTEAM LIST\n_________\n\n";
        dispteamlist();
        for(int i=0;i<5;i++)
        {
            function(t[I].p[i].retname());
        }
                 
        t[I].disp4();
                 
        cout<<"Are you ready for your first match(y/n):";
        cin>>ch;
        int j=0,c=0;
        int i;

        for(i=0;i<8;i++)//main loop for users team
        {
            if(i==I)
                continue;
            
            else
            {
                c++;
                sim(t[I],t[i]);
                cout<<"\n\n";
                cout<<"The cost of transportation and accomodation have been deducted(3000).\nThis is your current balance.\n";
                t[I].disp4();
                cout<<"Your team score is : "<<t[I].points<<" points";
                
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
                                  
                if(c==7)
                {
                    cout<<"\nYou have finished all your 7 matches.";
                    cout<<"\n\nDo you want to see the points table(y/n):";
                    cin>>ch;
                    break;
                }
                                  
                cout<<"\n\nDo you want to buy and sell a player to better  your performance(y/n):";
                cin>>ch;
                
                if(ch=='y')
                {
                    cout<<"\nTEAM LIST\n____________\n\n";
                    dispteamlist();
                    sell();
                    add();
                    j++;
                    
                    for(int i=0;i<5;i++)
                    {
                        function(t[I].p[i].retname());
                    }
                                     
                    cout<<"Are you ready for your next match(y/n):";
                    cin>>ch1;
                }
                                  
                else if(ch=='n')
                {
                    cout<<"Are you ready for your next match(y/n):";
                    cin>>ch1;
                }
                                              
            }
        }         
                   
        for(i=0;i<8;i++)
        {
            for(int j=i+1;j<8;j++)
            {
                if((i!=j)&&(i!=I)&&(j!=I))
                    sim1(t[i],t[j]);
            }
        }
     
        char str[20];
        strcpy(str,t[I].retname());
        sort(t);
        cout<<endl<<"Other teams have finished playing their matches";
        pointstable();
     
        if((stricmp(str,t[0].retname())==0)||(stricmp(str,t[1].retname())==0))
        {
            cout<<"\n\nExcellent!!!! You have been selected for the finals.";
            cout<<"\nAre you ready for the big game(y/n):";
            cin>>ch;
            
            if((stricmp(str,t[0].retname())==0))
                sim2(t[0],t[1]);
            
            else
                sim2(t[1],t[0]);
        }
     
        else
        {
            cout<<"\n\nTry harder next time.";
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
                                     
            else
                exit(0);
        }
    } 
}
	
  
    
    

