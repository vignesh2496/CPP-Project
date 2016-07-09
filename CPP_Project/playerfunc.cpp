#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<string.h>

void function(char *string)
{	
	
	if(stricmp(string,"messi")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("Argentina.jpg",177,433,331,513); 
        readimagefile("messi.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Lionel Messi");
        outtextxy(458,200,"DOB     : 24 June 1987");
        outtextxy(458,300,"Price     : 20000");
        outtextxy(458,400,"Rating   : 95");
        setcolor(4);
        outtextxy(408,543,"Premier League");
    }

	
	else if(stricmp(string,"ronaldo")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("Portugal.jpg",177,433,331,513); 
        readimagefile("ronaldo.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Christiano Ronaldo");
        outtextxy(458,200,"DOB     : 5 February 1985");
        outtextxy(458,300,"Price     : 19000");
        outtextxy(458,400,"Rating   : 94");
        setcolor(4);
        outtextxy(408,543,"Premier League");
	}

    else if(stricmp(string,"neymar")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("Brazil.jpg",177,433,331,513); 
        readimagefile("neymar.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Neymar Jr");
        outtextxy(458,200,"DOB     : 5 February 1992");
        outtextxy(458,300,"Price     : 17000");
        outtextxy(458,400,"Rating   : 92");
        setcolor(4);
        outtextxy(408,543,"Premier League");
    }
	
    else if(stricmp(string,"beckham")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("England.jpg",177,433,331,513); 
        readimagefile("bekham.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : David Beckham");
        outtextxy(458,200,"DOB     : 15 October 1988");
        outtextxy(458,300,"Price     : 16000");
        outtextxy(458,400,"Rating   : 91");
        setcolor(4);
        outtextxy(408,543,"Premier League");
    }
	
    else if(stricmp(string,"ozil")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("Germany.jpg",177,433,331,513); 
        readimagefile("ozil.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Meesut Ozil");
        outtextxy(458,200,"DOB     : 2 May 1975");
        outtextxy(458,300,"Price     : 15000");
        outtextxy(458,400,"Rating   : 90");
        setcolor(4);
        outtextxy(408,543,"Premier League");
    }
	
    else if(stricmp(string,"iniesta")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("Spain.jpg",177,433,331,513); 
        readimagefile("iniesta.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Andres Iniesta");
        outtextxy(458,200,"DOB    : 11 May 1984");
        outtextxy(458,300,"Price  : 14500");
        outtextxy(458,400,"Rating : 89");
        setcolor(4);
        outtextxy(408,543,"Premier League");
    }
	
    else if(stricmp(string,"persie")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("Netherlands.jpg",177,433,331,513); 
        readimagefile("persie.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Robin van Persie");
        outtextxy(458,200,"DOB     : 6 August 1983");
        outtextxy(458,300,"Price     : 14000");
        outtextxy(458,400,"Rating   : 88");
        setcolor(4);
        outtextxy(408,543,"Premier League");
	}

    else if(stricmp(string,"ribery")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("France.jpg",177,433,331,513); 
        readimagefile("ribery.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Frank Ribery");
        outtextxy(458,200,"DOB     : 7 April 1983");
        outtextxy(458,300,"Price     : 13000");
        outtextxy(458,400,"Rating   : 87");
        setcolor(4);
        outtextxy(408,543,"Premier League");
    }
	
    else if(stricmp(string,"owen")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("England.jpg",177,433,331,513); 
        readimagefile("owen.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : MIchael Owen");
        outtextxy(458,200,"DOB     : 14 December 1979");
        outtextxy(458,300,"Price     : 12500");
        outtextxy(458,400,"Rating   : 86");
        setcolor(4);
        outtextxy(408,543,"Premier League");
	}

    else if(stricmp(string,"neuer")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("Germany.jpg",177,433,331,513); 
        readimagefile("neuer.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Manuel Neuer");
        outtextxy(458,200,"DOB     : 27 March 1986");
        outtextxy(458,300,"Price     : 12000");
        outtextxy(458,400,"Rating   : 90");
        setcolor(4);
        outtextxy(408,543,"Premier League");
    }
	
    else if(stricmp(string,"xavi")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("Spain.jpg",177,433,331,513); 
        readimagefile("xavi.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Xavi Hernandez");
        outtextxy(458,200,"DOB     : 25 January 1980");
        outtextxy(458,300,"Price     : 11000");
        outtextxy(458,400,"Rating   : 85");
        setcolor(4);
        outtextxy(408,543,"Premier League");
	}

    else if(stricmp(string,"robben")==0)
    {
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("Netherlands.jpg",177,433,331,513); 
        readimagefile("robben.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Arjen Robben");
        outtextxy(458,200,"DOB     : 23 January 1984");
        outtextxy(458,300,"Price     : 10000");
        outtextxy(458,400,"Rating   : 84");
        setcolor(4);
        outtextxy(408,543,"Premier League");
    }
	
    else if(stricmp(string,"suarez")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("Uruguay.jpg",177,433,331,513); 
        readimagefile("suarez.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Luiz Suarez");
        outtextxy(458,200,"DOB     : 24 January 1987");
        outtextxy(458,300,"Price     : 9000");
        outtextxy(458,400,"Rating   : 83");
        setcolor(4);
        outtextxy(408,543,"Premier League");
    }
	
    else if(stricmp(string,"valdes")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("Spain.jpg",177,433,331,513); 
        readimagefile("valdes.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Victor Valdes");
        outtextxy(458,200,"DOB     : 14 January 1982");
        outtextxy(458,300,"Price     : 9500");
        outtextxy(458,400,"Rating   : 88");
        setcolor(4);
        outtextxy(408,543,"Premier League");
    }
	
    else if(stricmp(string,"pique")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("Spain.jpg",177,433,331,513); 
        readimagefile("pique.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Gerrard Pique");
        outtextxy(458,200,"DOB     : 2 February 1987");
        outtextxy(458,300,"Price     : 8000");
        outtextxy(458,400,"Rating   : 82");
        setcolor(4);
        outtextxy(408,543,"Premier League");
	}

    else if(stricmp(string,"gerrard")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("England.jpg",177,433,331,513); 
        readimagefile("gerrard.JPG",100,100,408,403); 
        outtextxy(458,100,"Name   : Stephen Gerrard");
        outtextxy(458,200,"DOB     : 30 May 1980");
        outtextxy(458,300,"Price     : 8500");
        outtextxy(458,400,"Rating   : 84");
        setcolor(4);
        outtextxy(408,543,"Premier League");
    }
	
    else if(stricmp(string,"lampard")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("England.jpg",177,433,331,513); 
        readimagefile("lampard.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Frank Lampard");
        outtextxy(458,200,"DOB     : 20 June 1978");
        outtextxy(458,300,"Price     : 7500");
        outtextxy(458,400,"Rating   : 81");
        setcolor(4);
        outtextxy(408,543,"Premier League");
    }
	
    else if(stricmp(string,"aguero")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("Argentina.jpg",177,433,331,513); 
        readimagefile("aguero.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Sergio Aguero");
        outtextxy(458,200,"DOB     : 2 June 1988");
        outtextxy(458,300,"Price     : 7000");
        outtextxy(458,400,"Rating   : 80");
        setcolor(4);
        outtextxy(408,543,"Premier League");
	}

    else if(stricmp(string,"cahill")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("England.jpg",177,433,331,513); 
        readimagefile("cahill.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Gary Cahill");
        outtextxy(458,200,"DOB     : 19 December 1985");
        outtextxy(458,300,"Price     : 6000");
        outtextxy(458,400,"Rating   : 79");
        setcolor(4);
        outtextxy(408,543,"Premier League");
	}

    else if(stricmp(string,"cech")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("Czech_Republic.jpg",177,433,331,513); 
        readimagefile("cech.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Peter Cech");
        outtextxy(458,200,"DOB     : 20 May 1982");
        outtextxy(458,300,"Price     : 6500");
        outtextxy(458,400,"Rating   : 81");
        setcolor(4);
        outtextxy(408,543,"Premier League");
	}

    else if(stricmp(string,"casillas")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("Spain.jpg",177,433,331,513); 
        readimagefile("casillas.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Iker Casillas");
        outtextxy(458,200,"DOB     : 20 May 1981");
        outtextxy(458,300,"Price     : 7500");
        outtextxy(458,400,"Rating   : 84");
        setcolor(4);
        outtextxy(408,543,"Premier League");
	}

    else if(stricmp(string,"rooney")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("England.jpg",177,433,331,513); 
        readimagefile("rooney.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Wayne Rooney");
        outtextxy(458,200,"DOB     : 24 October 1985");
        outtextxy(458,300,"Price     : 7000");
        outtextxy(458,400,"Rating   : 80");
        setcolor(4);
        outtextxy(408,543,"Premier League");
	}

    else if(stricmp(string,"fabregas")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("Spain.jpg",177,433,331,513); 
        readimagefile("fabregas.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Fabregas");
        outtextxy(458,200,"DOB     : 4 May 1987");
        outtextxy(458,300,"Price     : 6500");
        outtextxy(458,400,"Rating   : 82");
        setcolor(4);
        outtextxy(408,543,"Premier League");
	}

    else if(stricmp(string,"kompany")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("England.jpg",177,433,331,513); 
        readimagefile("kompany.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Kompany");
        outtextxy(458,200,"DOB     : 10 April 1986");
        outtextxy(458,300,"Price     : 5500");
        outtextxy(458,400,"Rating   : 79");
        setcolor(4);
        outtextxy(408,543,"Premier League");
	}

    else if(stricmp(string,"jones")==0)
	{
        initwindow(1300,700);
        readimagefile("nike.jpg",0,0,1300,700);
        setcolor(14);
        settextstyle(GOTHIC_FONT, HORIZ_DIR, 4);
        readimagefile("England.jpg",177,433,331,513); 
        readimagefile("jones.jpg",100,100,408,403); 
        outtextxy(458,100,"Name   : Phil Jones");
        outtextxy(458,200,"DOB     : 21 February 1992");
        outtextxy(458,300,"Price     : 5000");
        outtextxy(458,400,"Rating   : 78");
        setcolor(4);
        outtextxy(408,543,"Premier League");
     }

    delay(3000);
    closegraph();
}
