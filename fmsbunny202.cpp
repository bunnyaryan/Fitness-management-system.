#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
#include<windows.h>
#include<process.h>
#include<ctime>
using namespace std;
/**********************************************************************************************************************************************
												Fitness management system																
***********************************************************************************************************************************************/

void clientdetails();
void show();
void web();
void deleting();
void advice();
void details();

COORD coord = {0,0};
char c[20],d[20]={"fmsbunny"},ap[20],ag[20]={"CSE202"}; //id and password //also use for compare both
void gotoxy (int x, int y)

{

coord.X = x; coord.Y = y; 

SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}

class fms
{
	private:
		int age;
		long Mb;
	    char name[30];
	    string mf;
	    float BMI;
	    float height;
	    char adrs[50];
	    float weight;
	public:
		void clientdetails()
		{
			fms a;
			ofstream op;
			op.open("fms.txt",ios::out | ios::app);
			cout<<"\n\tDetails of Clients\n\n";
			cout<<"\n\t\tEnter the name:";
			fflush(stdin);
		    cin.getline(name,30);
			cout<<"\t\tEnter age:";
			cin>>age;
			cout<<"\t\tSEX(M/F):";
			cin>>mf;
			cout<<"\t\tEnter height (cm):";
			cin>>height;
			cout<<"\t\tEnter Weight (kg):";
			cin>>weight;
			cout<<"\t\tEnter the address:";
			cin>>adrs;
			//calculation of BMI
			BMI=(weight/(height/100)*(weight/100));
			cout<<"\n\tYour Body mass index is:"<<BMI;

			if (BMI <= 16) 
			{
		        cout<<"\n\tSeverely Underweight\n";
		        cout<<"\n\t**Please take a healthy diet and drink milk 2 glass in a day**";
		    }
		    else if (BMI<= 18.5) 
			{
		        cout<<"\n\tUnderweight\n";
		        cout<<"\n\t**You are Underweight**\n\n";
		        system("COLOR 25F");
		        cout<<"\n\t*Eat more frequently:- When you're underweight, you may feel full faster. Eat five to six smaller meals during the day rather than two or three large meals"
                    <<"\n\t*Choose nutrient-rich foods:- As part of an overall healthy diet, choose whole-grain breads, pastas and cereals; fruits and vegetables; dairy products; lean protein sources; and nuts and seeds."
                    <<"\n\t*Exercise:- Exercise, especially strength training, can help you gain weight by building up your muscles. Exercise may also stimulate your appetite\n";
                Sleep(5000);
				cout<<"\n\tWait for few sec. to know the Diet Plan>\n";
				system("start https://www.uccs.edu/Documents/healthcircle/pnc/health-topics/Weight%20Gain.pdf");           
		    }
		    else if (BMI<= 25) 
			{
		        cout<<"\n\tHealthy\n";
		        cout<<"\n\t**Well Done keep it up!!\n\n";
		        cout<<"\n\t*I think in my point of view as you also have to do Jim on daily basis"
		            <<"\n\t*Don''t eat Fast food or junk food because it will effect your health";
		            Sleep(5000);
				cout<<"\n\tWait for few sec.I'm showing you your diet chart:)\n";
				cout<<"\n\tIf you want more protein then you can take any protein shake\n";
				cout<<"\n\tFor exercise press 1\n";
				switch(getch())
				{
					case '1':
						cout<<"For abs:";
						cout<<"\n\t\tPress 1 or 2";
						switch(getch())
						{
							case '1':
								cout<<"\n\t20 push up daily";
								break;
							case '2':
								cout<<"\n\tDaily running is compulsory";
								break;
						}
					case '2':
						cout<<"\n\tFor muscles:";
						cout<<"\n\t\tPress 1 and 2";
						switch(getch())
						{
							case '1':
								cout<<"\n\tEat eggs daily, take a perfect amount of protein";
								break;
							case '2':
								cout<<"\n\t1. Brown rice\t2. Oranges\t3. Milk (organic)\t4. Wheat germ";
								break;
						}
				}
				cout<<"\n\t\tPress 'Enter' for more info.";
				system("start https://health.gov/paguidelines/pdf/adultguide.pdf");	
				
		    }
		    else if (BMI<= 30) 
			{
		        cout<<"\n\tOverweight\n";
		        cout<<"\n\t**Eat boiled food!!"
		            <<"\n\t**You can control on your self"
		            <<"\n\tIts my order that you don't have to eat any types of fast food and junk food:)";
//		        system("cls");
		            Sleep(5000);
		        cout<<"\n\tNow this is your daily routin for almost 2 months:";
		        cout<<"\n\tPress 'Enter'";
		        switch(getch())
		        {
		        	case '1':
		        		cout<<"\n\t1.Daily running\t2.Eat boiled vegitable\t3.Cycling\t4.Skipping upto 100";
		        		break;
				}
				cout<<"\n\tWait for few sec. I'm Showing you a video plz must watch:)\n";
				switch(getch())
				{
				system("start https://www.youtube.com/watch?v=cgTE_09hEDU");	
				}
		    }
		    else 
			{
		        cout<<"\n\tSeverely Overweight\n";
		        cout<<"\n\t**Omg....You have to control on your self"
		            <<"\n\t-otherwise there will be a big problem in future";
		        cout<<"\n\tLet me show you something that you have to follow on your daily routien for minimum 2months";
		        Sleep(5000);
		        system("start http://site.stewsmithptclub.com/45dayplan.pdf");
		    }
			op<<name<<endl<<age<<endl<<mf<<endl<<height<<endl<<weight<<endl<<adrs<<endl<<BMI<<endl;
			op.close();
		}
        void show()
		{    
		    fms a;
			fstream op;
			op.open("fms.txt",ios::in);
			while(!op.eof())
			{
			op>>name;
//			cout<<name;
			op>>age;
			op>>mf;
			op>>height;
			op>>weight;
			op>>adrs;
			op>>BMI;
			cout<<"\nName:"<<name<<"\n"<<"Age:"<<age<<"\n"<<"SEX:"<<mf<<"\n"<<"Height:"<<height<<"\n"<<"Weight:"<<weight<<"\n"<<"Address:"<<adrs<<"\n"<<"BMI:"<<BMI;
			cout<<"\n";
		    }
			op.close();
		} 
		void web()
		{
			system("start https://medium.com/personal-growth/the-30-best-websites-for-learning-about-health-and-fitness-1a33dbe0e525");
		}
		void advice()
		{
			cout<<"\n\t";
			{
		       for(int a=0;a<37;a++)
	            {
		        cout<<"*";
                Sleep(35);
		        }
			}
			gotoxy(20,9);
			cout<<"\n\t\tAdvices";
			cout<<"\n\t*************************************";
			cout<<"\n\t|  1:Severly underweight:(          |";
			cout<<"\n\t|  2:Underweight:(                  |";
			cout<<"\n\t|  3:Healthy:)                      |";
			cout<<"\n\t|  4:Over Weight                    |";
			cout<<"\n\t|  5:Severly Overweight  :~)        |";
			cout<<"\n\t*************************************";
			cout<<"\n";
			switch(getch())
	        {   
			case '1':
				system("cls");
				cout<<"\n\t**Please take a healthy diet and drink milk 2 glass in a day**";
				cout<<"\n\t**Do exercise or yoga at early morning\n";
				break;
			case '2':
			    system("cls");
			    system("start https://www.uccs.edu/Documents/healthcircle/pnc/health-topics/Weight%20Gain.pdf");  
				break;
			case '3':
			    system("cls");
				system("start https://health.gov/paguidelines/pdf/adultguide.pdf");
				break;
			case '4':
			    system("cls");
				system("start https://www.youtube.com/watch?v=cgTE_09hEDU");
				break;
			case '5':
			    system("cls");
				system("start http://site.stewsmithptclub.com/45dayplan.pdf");
				break;     
		    }
		}
		void deleting()
        {

            string name1, name;
            cout<<"\n\tPlease Enter the name  you want to delete:\n";
            cin>>name;
            ifstream fms;
            ofstream op;
  			fms.open("fms.txt");
  		    op.open("op.txt");
  			while (getline(fms, name))
  			{
    		if (name1!= name)
     		op<<name1<<endl;
  			}
  			cout << "The record with the name " << name << " has been deleted if it exsisted" << endl;
  			fms.close();
  			op.close();
  			remove("fms.txt");
  			rename("op.txt", "fms.txt");
			}
		void details()
		{
			    cout<<"\n\tFITNESS MANAGEMENT SYSTEM\n";
			    
			    cout<<"\n\tCreation Year-(2018) ";

                cout<<"\tMini Project in C++\n";

                cout<<"\tSubmitted To: Lovely Professional University(CSE branch)\n";

                cout<<"\tCode with C++ : Aryan Sharma\n";
 
                cout<<"******************************************\n\n";

                cout<<"******************************************\n";

                cout<<"******************************************\n\n";

                cout<<"********************************************\n\n\n";

                cout<<"Exiting in 3 second...........>";
                Sleep(3000);   
		}
}b;

                                //Aryan Sharma
                            //Lovely Professional University
main()
{
    system("COLOR 0A");
	lg:
system("cls");
system("COLOR 0A");
{
//gotoxy(20,15);
cout<<"\n\t\t\t\t\t\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2";
//for (int l=0;l<50;l++)
{
	cout<<"\n\t\t\t\t\t\tFitness"
                <<"\n\t\t\t\t\t\t\tManagement\n";
}
cout<<"\n\t\t\t\t\t\xB2\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2";
}
cout<<"\n\t\t\t\tLogin id:";
cin>>ap;
if(strcmp(ap,ag)==0)
{
	cout<<"\n\t\t\t Wait !!!! Computer is verifing ID";
	Sleep(2000);
cout<<"\n\t\t\t Id approved";
cout<<"\n\t\t\t Now you have to Hit your access password\n";
}
else
exit(1);
cout<<"\n\t\t\t\tPassword:";
char ch;
for(int i=0; c[i]!=1; )
	{
		
		c[i]=(char)getch();
		if(c[i]!=13 && c[i]!=8)	putch('*');
		if(c[i]==13)
		{
			c[i]='\0';
			break;
		}
		if(c[i]==8)
		--i;
		i++;
		
	  
	}
if(strcmp(c,d)==0)
{
	
	cout<<"\n\n\t\t\tSignin approved";
	cout<<"\n\t\t\t\tCongratulations\n";
	system("cls");
}
 
 else
 exit(1);	
cout<<"\n";
/**********************************************************************************************************************************************
														For Display Time																	
**********************************************************************************************************************************************/
	int a;
    time_t tt;
	struct tm * ti;
	time (&tt);
	ti = localtime(&tt);
    cout << "\nDay		Date		Time :\n\t" 
         <<asctime(ti);
         cout<<"\n\t";
	     {
//		 system("COLOR 4F");
		 int i;
		 for(i=0;i<20;i++)
	     {
		    cout<<"*";
            Sleep(35);
		 }
			cout<<"Fitness management system";
         }
            for(int j=0;j<20;j++)
         {
            	cout<<"*";
            	Sleep(35);
		 }
			cout<<"\n\n\t";
            {
            for(int b=0;b<25;b++)
           	{
      		cout<<"*";
			}
			cout<<"Body mass index";
			}
			for(int c=0;c<25;c++)
			{
				cout<<"*";
				Sleep(40);
			}
            cout<<"\n\n\t";
			Sleep(1000);
			
//	gotoxy(20,5);
char tempch;
do {
	cout<<"\n\t\tMain menu:\n";
	cout<<"\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\n";
     
     
      
//    gotoxy(20,5);
    
	cout<<"\n\t|  1:Add client:                                 |";
	
//	gotoxy(20,7);
	
	cout<<"\n\t|  2.Show client details:                        |";
	
	
	cout<<"\n\t|  3.Delete Details:                             |";
	
	
	cout<<"\n\t|  4.View Given Advice:                          |";
	
	
	cout<<"\n\t|  5.Program Details:                            |";
	
	
	cout<<"\n\t|  6.For more Contact us on our website          |";
	
	
	cout<<"\n\t|  7.logout:                                     |";
	
	
	cout<<"\n\t|  8.ESC:Exit                                    |";
	

	cout<<"\n\t\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB";
	
	switch(getch())
	{
		case '1':
			system("cls");
			b.clientdetails();
			break;
		case '2':
			system("cls");
			b.show();
			break;
		case '3':
			system("cls");
			b.deleting();
			break;
	    case '4':
	    	system("cls");
	    	b.advice();
	    case '5':
	    	system("cls");
	    	b.details();
	    	break;
	    case '6':
        	system("cls");
        	b.web();
		case '7':
			system("cls");
		     goto lg;  //For logout.....using goto function
             break;
		case '8':
			exit(0);
			break;
	}
	getch();
	system("cls");
	cout<<"Press 1 to start again..";
	
	cin>>tempch;
}	while(tempch=='1');
}
