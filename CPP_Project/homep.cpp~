#include<graphics.h>
#include<iostream.h>

void start();
void teams();
void credits();
void help();
void about();

int main()
{
	int x,y;
	initwindow(1300,700);
	readimagefile("final.jpg",0,0,1300,700);
	while(1)
   	{
		getmouseclick(WM_LBUTTONDOWN, x, y);
   		{
			if((x>175)&&(x<298)&&(y>283)&&(y<327))//play
   			{      
   				closegraph();
				start();
				break;
			}

			if((x>180)&&(x<302)&&(y>564)&&(y<615))//exit
			{
			    closegraph();
				exit(0);
	        }
    		   
			if((x>179)&&(x<322)&&(y>340)&&(y<391))//teams
			{   
				teams();
				main();
				break;
			}

			if((x>180)&&(x<345)&&(y>454)&&(y<504))//help
            {
                help();
                main();
                break;
            }

			if((x>180)&&(x<345)&&(y>508)&&(y<558))//credits
			{
                credits();
                main();
                break;
            }
                
            if((x>179)&&(x<322)&&(y>395)&&(y<445))
	        {
                about();
                main();
                break;
            }
		}
	}
	
	delay(100000);	

}
