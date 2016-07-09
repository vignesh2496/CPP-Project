#include<iostream.h>
#include<string.h>

//player
class player
{
	char name[20];
	
	public:

	int price;
	int rate;

    void get(char *n,int pr,int rat)
    {
        strcpy(name,n);
        price=pr;
        rate=rat;
    }
           
    void disp()
    {
        cout<<"Name:"<<name<<"\t\t"<<"Price:"<<price<<"\t\t"<<"Rating:"<<rate<<"\n";
    } 
           
    char* retname()
    {
        return name;
    }
           
    void getname(char *n)
    {
        strcpy(name,n);
    } 
};


//money
class money
{
      
	double budget;
    float trans_fee;
    float accom_fee;
    
    public:

	double rem;

	money()
	{
		budget=60000;
		rem=60000;
		trans_fee=1000;
	    accom_fee=2000;
	}
			
	void disp1()
	{
		cout<<"Budget:"<<budget<<"\n\n";
		cout<<"Transportation fee:"<<trans_fee<<"\n\n";
		cout<<"Accomodation:"<<accom_fee<<"\n\n";
	}
			
	void disp4()
    {
		cout<<"Amount remaining:"<<rem<<"\n\n";
	}
			
	void deduct()
	{
        rem-=(trans_fee+accom_fee);
    }
            
    void add()
    {
        rem+=5000;
    }
};


//manager
class manager
{
    char name[50];
    char country[50];
    int age;
      
    public:

    void get2()
    {
		cout<<"Enter your name : ";
		cin>>name;
		cout<<"Enter the country : ";
		cin>>country;
		cout<<"Enter the age(no age bar) :";
		cin>>age;
    }

	void disp2()
	{
		cout<<"Manager Name:"<<name<<"\n\n";
		cout<<"Country:"<<country<<"\n\n";
		cout<<"Age:"<<age<<"\n\n";
		
	}	
};


//team
class team:public manager,public money
{
    char nam[30];
    char nam_spon[20];

    public:

    int w;
    int l;
    int d;
    int points;
	player p[5];

    void get(char *n,char *ns)
	{
		strcpy(nam,n);
		strcpy(nam_spon,ns);
	}
    
    void disp3()
	{
		cout<<"Team Name:"<<nam<<"\n\n";
		cout<<"Sponsers:"<<nam_spon<<"\n\n";
	}
            
    char *retname()
    {
        return nam;
    }
            
    team()
    {
        w=0;
        d=0;
        l=0;
        points=0;
    }
            
    void buy(player p1)
    {
		rem-=p1.price;
	}
			
	void sell(player p1)
	{
		rem+=p1.price;
	}
};



