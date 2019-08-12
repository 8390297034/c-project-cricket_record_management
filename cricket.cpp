#include<iostream>
#include<string>
using namespace std;


class Cricket
 {

protected:
 
public:
string name;      
   
   
void setdata();
int a,b,c;

  };

void Cricket::setdata()
{
cout<<"\n Enter the player name\n";
cin>>name;

cout<<"\n "<<name <<" allow for Test  1.yes,0.no\n";
cin>>a;

cout<<"\n "<<name <<" allow for Oneday 1.yes,0.no\n";
cin>>b;

cout<<"\n "<<name <<" allow for T-20  1.yes,0.no\n";
cin>>c;
}

class Test:virtual public Cricket
  {
  protected:
     int matche[100];
     int ball[100];
     int run[100];
     int matchesb[100];
     int ballb[100];
     int runb[100];
     int wicket[100];
     int p,p1;

 public:
    void  gettest();
    void  puttest();
    void  gettestb();
    void  puttestb();
  Test()
  {
  p1=p=0; 
  }


  };

  void Test::gettest()
  {
  
   cout<<"\n Enter the matches number\n";
   cin>>matche[p];
   cout<<"\n Enter the balls  \n";
   cin>>ball[p];
   cout<<"\n Enter the run\n";
   cin>>run[p];
   p++;
  

 }

void Test::gettestb()
  {
  
   cout<<"\n Enter the matches number\n";
   cin>>matchesb[p1];
   cout<<"\n Enter the balls  \n";
   cin>>ballb[p1];
   cout<<"\n Enter the run\n";
   cin>>runb[p1];
   cout<<"\nenter the nuber of wicket\n";
   cin>>wicket[p1];
   p1++;
  

 }


  

 void Test::puttest()
 {

 if(a)
{
cout<<"\n ==============FOR TEST MATCHES====================  \n";
cout<<"\n matches   run    ball\n";
for(int i=0;i<p;i++) 
{
cout<<"  "<<matche[i]<<"         "<<run[i]<<"       "<<ball[i]<<"\n";
}  

 cout<<"\n...............................\n";

}

 }


 void Test::puttestb()
 {

 if(a)
{
cout<<"\n ==============FOR TEST MATCHES====================  \n";
cout<<"\n matches   run    ball\n";
for(int i=0;i<p;i++) 
{
cout<<"  "<<matche[i]<<"         "<<run[i]<<"       "<<ball[i]<<"\n";
}  

 cout<<"\n...............................\n";

}

 }

class One_Day:virtual public Cricket
  {
protected:
 int matcheo[4];
 int runo[4];
 int ballo[4];
 int p1;
public:
 void getoneday();
 void putoneday();
 
 One_Day()
  {
  p1=0;
  }

  };

 void One_Day::getoneday()
  {
    cout<<"\nEnter the matches \n";
    cin>>matcheo[p1];
    cout<<"\nEnter the runs \n";
     cin>>runo[p1];
    cout<<"\n Enetr the ball\n";
    cin>>ballo[p1];

   p1++;
   }
  
  void One_Day::putoneday()
  {

  
   cout<<"\n=============FOR ONE DAY RECORD============== \n";
   cout<<"\n matches   run    ball\n";
for(int i=0;i<p1;i++) 
{
cout<<"  "<<matcheo[i]<<"         "<<runo[i]<<"       "<<ballo[i]<<"\n";
}  

 cout<<"\n...............................\n";
 }

  
 
class T_20 :public virtual Cricket
{
protected:
 int matche20[4];
 int run20[4];
 int ball20[4];
 int p2;

public:

void gett20();
void putt20();

T_20()
{
p2=0;
}
 

};


void T_20::gett20()
{
   cout<<"\n Enter the matches number\n";
   cin>>matche20[p2];
   cout<<"\n Enter the run \n";
   cin>>run20[p2];
  cout<<"\n Enter the Balls\n";
  cin>>ball20[p2];
p2++;
}



void T_20::putt20()
{

cout<<"\n=============FOR T-20 MATCHES===============\n";
cout<<"\n matches   run    ball\n";
for(int i=0;i<p2;i++) 
{
cout<<"  "<<matche20[i]<<"         "<<run20[i]<<"       "<<ball20[i]<<"\n";
}  


 cout<<"\n................................\n";
 


}
class Final :public Test,public One_Day,public T_20
{
public:
void record();


};


void Final::record()
{

int c;
cout<<"\nenter choice \n";
cout<<"\n1 for oneday matches  record\n";
cout<<"\n2 for test matches record\n";
cout<<"\n3 for T 20 mathces record\n";
cout<<"\n4 for all record\n ";
cin>>c;

    switch(c)
            {

             case 1:
                 {
                puttest();
                    break;
                 }
           
                case 2:
                  {
                  putoneday(); 

                  break;
                    }
                       case 3:
                        {
                       putt20();
                         break;
                           }

                          case 4:
                          {
                            puttest();
                             putoneday();
                                  putt20();
                                      break;
                         }

                    }
}

int main()
{
;
int c,w1,w2,w3,w4,w5;
int g,d;

int p;



  
cout<<"\n-------- ENTER THE TOTAL NUMBER OF PLAYERS------\n";
cin>>g;
Final F[g];
int c1;
int c2;
do{

cout<<"\n***** WELCOME TO CRICKET WORLD ***** \n";
cout<<"\n Enter your choice\n";
cout<<"\n1. For maintaining the record of player\n";
cout<<"\n2. For desplaying the record of all player\n";
cin>>c1;

switch(c1)

{

case 1:
{


for(int i=0;i<g;i++)
{
F[i].setdata();

do
{
cout<<"\n-------Enter choice-----\n";
cout<<"\n 1.Mataining test matches  record of "<<F[i].name<<"------ \n";
cout<<"\n 2.Maintaing T-20 matches record of "<<F[i].name<<"------\n";
cout<<"\n 3.Mainting Oneday matches record of "<<F[i].name<<"-----\n";
cout<<"\n 4.For displaying record  of "<< F[i].name<<"...\n ";
cin>>c;
switch(c)
 {
  case 1:
  {     
       do
       {
 if(F[i].a)
{
    F[i].gettest();
}
else
{
cout<<"\n Sorry player is not allows for this matches\n";
}
    cout<<"\n do you want to continue "<<F[i].name<<"again with this manches record"<<" 1.yes,0.no\n";
  cin>>d;
    }while(d!=0);
      
  break;
 }

 
    case 2:
   {  
 
    do
   {

if(F[i].b)
{
    F[i].getoneday();
}
else
{
cout<<"\n sorry player is not allowed for this matches\n";
}
    cout<<"\n do you want to continue "<<F[i].name<<"again with this match record "<<"1.yes,0.no\n";
    cin>>w3;
     }while(w3!=0);
 
   break;
   }
 
 
case 3:
{  
 
    do
   {
  if(F[i].c)
{
    F[i].gett20();
}
else
{
cout<<"\n Sorry player is not allows for this matches \n";
}
    cout<<"\n do you want to continue "<<F[i].name<<"again with this match record"<<" 1.yes,0.no\n";
    cin>>w4;
     }while(w4!=0);
 
   break;
   }

case 4:

{  
 
    do
   {
    
   
     F[i].record();
  
    cout<<"\n do you want to continue"<<F[i].name<<"again with this matchrecord"<<" 1.yes,0.no\n";
    cin>>w5;
     }while(w5!=0);
 
   break;
   }}

cout<<"\n do you want to continue with another matches record with same palyer 1.yes,0.no\n";
cin>>w1;

}while(w1!=0);

}
break;
}

case 2:

{
string l;
cout<<"\n enter the name of player\n";
cin>>l;
for(int i=0;i<g;i++)
{
if(F[i].name==l)
{
cout<<"\n Record of "<<F[i].name<<"\n:-";
F[i].record();
cout<<"\n___________________________________________________________________________ \n";
}
else
{
cout<<"\nplayer is not found\n";
}
}
break;
}

}
cout<<"\n do you want to continue for another player record 1.yes ,0.no\n";
cin>>c2;
}while(c2!=0);


}

