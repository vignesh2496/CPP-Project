#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void teams()
{
    initwindow(1300,700);
    
    setbkcolor(BLUE);
    
    readimagefile("StamfordBridge.jpg",0,0,1300,700);

    settextstyle(EUROPEAN_FONT, HORIZ_DIR, 6);//for the team names
    
    //heading
    outtextxy(245,0, "THE TEAMS......");
    
    settextstyle(EUROPEAN_FONT, HORIZ_DIR, 6);//for the team names
    
    outtextxy(400, 70, "Team 1");
    outtextxy(400, 145, "Team 2");
    outtextxy(400, 220, "Team 3");
    outtextxy(400, 295, "Team 4");
    outtextxy(400, 370, "Team 5");
    outtextxy(400, 445, "Team 6");
    outtextxy(400, 520, "Team 7");
    outtextxy(400, 595, "Team 8");

    delay(5000);
    closegraph();
}
