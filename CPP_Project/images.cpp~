#include<iostream.h>
#include<fstream.h>
#include<time.h>
#include "classes.h"
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<graphics.h>

void draw()
{
    srand(time(NULL));
    int d = rand()%5;
    initwindow(1300,700);
     
    if(d==0)
    {
        readimagefile("draw1.jpg",0,0,1300,700);
    }

    if(d==1)
    {
        readimagefile("draw2.jpg",0,0,1300,700);
    }
      
    if(d==2)
    {
        readimagefile("draw3.jpg",0,0,1300,700);
    }

    if(d==3)
    {
        readimagefile("draw4.jpg",0,0,1300,700);
    }

    if(d==4)
    {
        readimagefile("draw5.jpg",0,0,1300,700);
    }

    settextstyle(GOTHIC_FONT, HORIZ_DIR, 3);
    outtextxy(350,70,"MATCH DRAWN!");
    delay(3000);
    closegraph();
}

void win()
{
    srand(time(NULL));
    int w = rand()%5;
    initwindow(1300,700);
    
    if(w==0)
    {
        readimagefile("win 1.jpg",0,0,1300,700);
    }
      
    if(w==1)
    {
        readimagefile("win 2.jpg",0,0,1300,700);
    }

    if(w==2)
    {
        readimagefile("win 3.jpg",0,0,1300,700);
    }

    if(w==3)
    {
        readimagefile("win 4.jpg",0,0,1300,700);
    }

    if(w==4)
    {
        readimagefile("win 5.jpg",0,0,1300,700);
    }

    settextstyle(GOTHIC_FONT, HORIZ_DIR, 3);
    outtextxy(350,70,"YOU WON! WELL PLAYED!!!");
    delay(3000);
    closegraph();
}

void lose()
{
    srand(time(NULL));
    int l = rand()%5;
    initwindow(1300,700);
    
    if(l==0)
    {
        readimagefile("lose1.jpg",0,0,1300,700);
    }

    if(l==1)
    {
        readimagefile("lose2.jpg",0,0,1300,700);
    }

    if(l==2)
    {
        readimagefile("lose3.jpg",0,0,1300,700);
    }

    if(l==3)
    {
        readimagefile("lose4.jpg",0,0,1300,700);
    }

    if(l==4)
    {
        readimagefile("lose5.jpg",0,0,1300,700);
    }

    settextstyle(GOTHIC_FONT, HORIZ_DIR, 3);
    outtextxy(350,70,"YOU LOST! BETTER LUCK NEXT TIME");
    delay(3000);
    closegraph();
}

void final()
{
    initwindow(1300,700);
    readimagefile("win.jpg",0,0,1300,700);
    delay(5000);
    closegraph();
}


     

     
