#include<iostream.h>
#include<graphics.h>
#include<stdlib.h>
#include "classes.h"


extern team t[8];
void pointstable()
{
	
    initwindow(1360,700);
    readimagefile("Points1.jpg",0,0,1300,700);
	setcolor(14);
	settextstyle(GOTHIC_FONT, HORIZ_DIR, 3);
	outtextxy(360,70,"POS");
	outtextxy(450,70,"TEAM");
	outtextxy(800,70,"P");
	outtextxy(850,70,"W");
	outtextxy(900,70,"L");
	outtextxy(950,70,"D");
	outtextxy(1000,70,"POINTS");
	
	//bar(350,70,440,270);
	line(350,70,350,570);
    line(440,70,440,570);
    
	line(790,70,790,570);
    line(840,70,840,570);
    
	line(890,70,890,570);
    line(940,70,940,570);
    
	line(990,70,990,570);
    line(1140,70,1140,570);
    
    //line after heading
    for(int i=0; i<500; i=i+50)
    {
		line(350,70+i,1140,70+i);
	}

    //upper line
    line(350,70,1140,70);
    
    //lower line
    line(350,570,1140,570);
    
    char arr[8][2]={"1","2","3","4","5","6","7","8"};
    for(int i=0;i<8;i++)
    {
        outtextxy(360,135+50*i,arr[i]);
        outtextxy(450,135+50*i,t[i].retname());
        bgiout<<7;
        outstreamxy(800, 135+50*i);
        bgiout<<t[i].w;
        outstreamxy(850, 135+50*i);
        bgiout<<t[i].l;
        outstreamxy(900, 135+50*i);
        bgiout<<t[i].d;
        outstreamxy(950, 135+50*i);
        bgiout<<t[i].points;
        outstreamxy(1000, 135+50*i);
    }
    
    delay(20000);        
    closegraph();
}



