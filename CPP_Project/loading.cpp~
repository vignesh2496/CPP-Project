#include<iostream.h>
#include<graphics.h>

class loading
{
    public:
      
    void load();
    void text();
};

void loading::text()
{
    readimagefile("black.jpg",0,0,1360,750);
    settextstyle(9, HORIZ_DIR, 14);
    outtextxy(580,350,"LOADING");
}


void loading::load()
{     
     
    for(int j=0;j<2;j++) 
    {  
    	for(int i=0;i<600;i=i+50)
     	{                 
            readimagefile("black.jpg",0,0,1360,750);
            setcolor(14);
            setfillstyle(1,14);
            fillellipse(i+45,320,5,5);
            fillellipse(i+30,320,5,5);
            fillellipse(i+15,320,5,5);
            fillellipse(i,320,5,5);
            fillellipse(1360-(i+45),400,5,5);
            fillellipse(1360-(i+30),400,5,5);
            fillellipse(1360-(i+15),400,5,5);
            fillellipse(1360-i,400,5,5);
            settextstyle(9, HORIZ_DIR, 14);
            outtextxy(580,350,"LOADING...");            
        }
        
        for(int i=0;i<80;i=i+15)
        {                 
            readimagefile("black.jpg",0,0,1360,750);
            setcolor(14);
            setfillstyle(1,14);
            fillellipse(600+i+45,320,5,5);
            fillellipse(600+i+30,320,5,5);
            fillellipse(600+i+15,320,5,5);
            fillellipse(600+i,320,5,5);
            fillellipse(1360-(600+i+45),400,5,5);
            fillellipse(1360-(600+i+30),400,5,5);
            fillellipse(1360-(600+i+15),400,5,5);
            fillellipse(1360-(600+i),400,5,5);
            settextstyle(9, HORIZ_DIR, 14);
            outtextxy(580,350,"LOADING...");            
        }
        
        for(int i=0;i<800;i=i+50)
        {                 
            readimagefile("black.jpg",0,0,1360,750);
            setcolor(14);
            setfillstyle(1,14);
            fillellipse(680+i+45,320,5,5);
            fillellipse(680+i+30,320,5,5);
            fillellipse(680+i+15,320,5,5);
            fillellipse(680+i,320,5,5);
            fillellipse(1360-(680+i+45),400,5,5);
            fillellipse(1360-(680+i+30),400,5,5);
            fillellipse(1360-(680+i+15),400,5,5);
            fillellipse(1360-(680+i),400,5,5);
            settextstyle(9, HORIZ_DIR, 14);
            outtextxy(580,350,"LOADING...");        
        }
    }          
}

void loads()
{
    int x= initwindow(1300,700);
    loading obj;
    obj.text();
    obj.load();
    closegraph(x);
}         
    
