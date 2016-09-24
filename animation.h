#include<iostream>
#include<fstream>
#include<iomanip>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#include<windows.h>

using namespace std;


class animation
			{
private:		void a();
			void b();
			void c();
			void d();
			void e();
			void f();
			void g();
			void h();
public:		void animate1();
			void animate2();
			};

void animation::animate1()
{
	int k=-1;
	while(1)
	{
		int t=time(0);
		if(t%3==0 && k==-1){k++;system("CLS");}
		if(t%3==1 && k==0){k++;a();cout<<"\n\n\t\t\t\t\t\t\t\tLOADING.\n\n\t\t\t\t\t\t\t\tPlease Wait.";}
		if(t%3==2 && k==1){k++;b();cout<<"\n\n\t\t\t\t\t\t\t\tLOADING..\n\n\t\t\t\t\t\t\t\tPlease Wait.";}
		if(t%3==0 && k==2){k++;c();cout<<"\n\n\t\t\t\t\t\t\t\tLOADING...\n\n\t\t\t\t\t\t\t\tPlease Wait.";}
		if(t%3==1 && k==3){k++;d();cout<<"\n\n\t\t\t\t\t\t\t\tLOADING.\n\n\t\t\t\t\t\t\t\tPlease Wait.";}
		if(t%3==2 && k==4){k++;e();cout<<"\n\n\t\t\t\t\t\t\t\tLOADING..\n\n\t\t\t\t\t\t\t\tPlease Wait.";}
		if(t%3==0 && k==5){k++;f();cout<<"\n\n\t\t\t\t\t\t\t\tLOADING...\n\n\t\t\t\t\t\t\t\tPlease Wait.";}
		if(t%3==1 && k==6){k++;g();cout<<"\n\n\t\t\t\t\t\t\t\tLOADING.\n\n\t\t\t\t\t\t\t\tPlease Wait.";}
		if(t%3==2 && k==7){k++;h();cout<<"\n\n\t\t\t\t\t\t\t\tLOADING..\n\n\t\t\t\t\t\t\t\tPlease Wait.";}
		if(t%3==0 && k==8){k++;system("CLS");}
		if(k==9)break;
	}
}

void animation::animate2()
{
	int k=-1;
	while(1)
	{
		int t=time(0);
		if(t%2!=0 && k==-1){k++;system("CLS");}
		if(t%2==0 && k==0){k++;h();cout<<"\n\n\t\t\t\t\t\t\t\tEXITING.\n\n\t\t\t\t\t\t\t\tPlease Wait.";}
		if(t%2!=0 && k==1){k++;g();cout<<"\n\n\t\t\t\t\t\t\t\tEXITING..\n\n\t\t\t\t\t\t\t\tPlease Wait.";}
		if(t%2==0 && k==2){k++;f();cout<<"\n\n\t\t\t\t\t\t\t\tEXITING...\n\n\t\t\t\t\t\t\t\tPlease Wait.";}
		if(t%2!=0 && k==3){k++;e();cout<<"\n\n\t\t\t\t\t\t\t\tEXITING.\n\n\t\t\t\t\t\t\t\tPlease Wait.";}
		if(t%2==0 && k==4){k++;d();cout<<"\n\n\t\t\t\t\t\t\t\tEXITING..\n\n\t\t\t\t\t\t\t\tPlease Wait.";}
		if(t%2!=0 && k==5){k++;c();cout<<"\n\n\t\t\t\t\t\t\t\tEXITING...\n\n\t\t\t\t\t\t\t\tPlease Wait.";}
		if(t%2==0 && k==6){k++;b();cout<<"\n\n\t\t\t\t\t\t\t\tEXITING.\n\n\t\t\t\t\t\t\t\tPlease Wait.";}
		if(t%2!=0 && k==7){k++;a();cout<<"\n\n\t\t\t\t\t\t\t\tEXITING..\n\n\t\t\t\t\t\t\t\tPlease Wait.";}
		if(t%2==0 && k==8){k++;system("CLS");}
		if(k==9)break;
	}
}

void animation::a()
{
	system("CLS");
	for(int i=1;i<=20;i++)cout<<endl;
	cout<<"\t\t\t\t"<<" "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<endl;
	cout<<"\t\t\t\t"<<" "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<endl;
}

void animation::b()
{
	system("CLS");
	for(int i=1;i<=20;i++)cout<<endl;
	cout<<"\t\t\t\t"<<" "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<" "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<endl;
}

void animation::c()
{
	system("CLS");
	for(int i=1;i<=20;i++)cout<<endl;
	cout<<"\t\t\t\t"<<" "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<"   "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<(char)219<<"  "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<" "<<(char)219<<" "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<"  "<<(char)219<<(char)219<<endl;
	cout<<"\t\t\t\t"<<" "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<"   "<<(char)219<<endl;

}

void animation::d()
{
	system("CLS");
	for(int i=1;i<=20;i++)cout<<endl;
	cout<<"\t\t\t\t"<<" "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<"   "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<(char)219<<"  "<<(char)219<<"     "<<(char)219<<(char)219<<"  "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<" "<<(char)219<<" "<<(char)219<<"     "<<(char)219<<" "<<(char)219<<" "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<"  "<<(char)219<<(char)219<<"     "<<(char)219<<"  "<<(char)219<<(char)219<<endl;
	cout<<"\t\t\t\t"<<" "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<"   "<<(char)219<<endl;

}

void animation::e()
{
	system("CLS");
	for(int i=1;i<=20;i++)cout<<endl;
	cout<<"\t\t\t\t"<<" "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<(char)219<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<(char)219<<"  "<<(char)219<<"     "<<(char)219<<(char)219<<"  "<<(char)219<<"     "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<" "<<(char)219<<" "<<(char)219<<"     "<<(char)219<<" "<<(char)219<<" "<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<"  "<<(char)219<<(char)219<<"     "<<(char)219<<"  "<<(char)219<<(char)219<<"     "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<" "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<(char)219<<(char)219<<endl;
}

void animation::f()
{
	system("CLS");
	for(int i=1;i<=20;i++)cout<<endl;
	cout<<"\t\t\t\t"<<" "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<(char)219<<(char)219<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<(char)219<<"  "<<(char)219<<"     "<<(char)219<<(char)219<<"  "<<(char)219<<"     "<<(char)219<<"         "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<" "<<(char)219<<" "<<(char)219<<"     "<<(char)219<<" "<<(char)219<<" "<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<"       "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<"  "<<(char)219<<(char)219<<"     "<<(char)219<<"  "<<(char)219<<(char)219<<"     "<<(char)219<<"         "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<" "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<(char)219<<(char)219<<(char)219<<endl;

}

void animation::g()
{
	system("CLS");
	for(int i=1;i<=20;i++)cout<<endl;
	cout<<"\t\t\t\t"<<" "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<(char)219<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<(char)219<<"  "<<(char)219<<"     "<<(char)219<<(char)219<<"  "<<(char)219<<"     "<<(char)219<<"         "<<(char)219<<"           "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<" "<<(char)219<<" "<<(char)219<<"     "<<(char)219<<" "<<(char)219<<" "<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<"       "<<(char)219<<"           "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<"  "<<(char)219<<(char)219<<"     "<<(char)219<<"  "<<(char)219<<(char)219<<"     "<<(char)219<<"         "<<(char)219<<"           "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<" "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<(char)219<<(char)219<<(char)219<<"       "<<(char)219<<endl;

}

void animation::h()
{
	system("CLS");
	for(int i=1;i<=20;i++)cout<<endl;
	cout<<"\t\t\t\t"<<" "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<(char)219<<(char)219<<"         "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<(char)219<<"  "<<(char)219<<"     "<<(char)219<<(char)219<<"  "<<(char)219<<"     "<<(char)219<<"         "<<(char)219<<"           "<<(char)219<<"          "<<(char)219<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<" "<<(char)219<<" "<<(char)219<<"     "<<(char)219<<" "<<(char)219<<" "<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<"       "<<(char)219<<"           "<<(char)219<<"         "<<(char)219<<" "<<(char)219<<endl;
	cout<<"\t\t\t\t"<<(char)219<<"        "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<"  "<<(char)219<<(char)219<<"     "<<(char)219<<"  "<<(char)219<<(char)219<<"     "<<(char)219<<"         "<<(char)219<<"           "<<(char)219<<"        "<<(char)219<<(char)219<<(char)219<<(char)219<<(char)219<<endl;
	cout<<"\t\t\t\t"<<" "<<(char)219<<(char)219<<(char)219<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<"   "<<(char)219<<"     "<<(char)219<<(char)219<<(char)219<<(char)219<<(char)219<<"      "<<(char)219<<(char)219<<(char)219<<(char)219<<"       "<<(char)219<<"           "<<(char)219<<"   ver. 3.0"<<endl;

}
