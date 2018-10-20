#include <iostream>
#include "klasy.h"
using namespace std;
int main(){
	Jaroslaw p[10];
	Mariusz r[10];
	Zbyszek q[10];
	string s,sa,sb,sc,sd;
	int a,b,c,e,p1,p2,e1,e2,e3;
	cout<<"Hello. Welcome to octagon. There are three types of characters:"<<endl<<" Warrior Mariusz, Programmist Jaroslaw and uberdriver Zbyszek"<<endl;
	cout<<"How many warriors do you wanna create?"<<endl;
	cin>>e1;
	for(int i=0;i<e1;i++){
		cout<<"Warrior Mariusz number "<<i<<endl;
		cout<<"What is his surname?"<<endl;
		cin>>s;
		cout<<"What is his strentgh?"<<endl;
		cin>>a;
		cout<<"What is his agility?"<<endl;
		cin>>b;
		cout<<"What is his endurance?"<<endl;
		cin>>c;
		r[i].insert(s,a,b,c);
	}
	cout<<"How many programmists do you wanna create?"<<endl;
	cin>>e2;
	for(int i=0;i<e2;i++){
		cout<<"Programmist Jaroslaw number "<<i<<endl;
		cout<<"What is his surname?"<<endl;
		cin>>s;
		cout<<"What is his proc timing?"<<endl;
		cin>>a;
		cout<<"What is his connection speed?"<<endl;
		cin>>b;
		cout<<"What are his programming skills?"<<endl;
		cin>>c;
		p[i].insert(s,a,b,c);
	}
	cout<<"How many uberdrivers do you wanna create?"<<endl;
	cin>>e3;
	for(int i=0;i<e3;i++){
		cout<<"Uberdriver Zbyszek number "<<i<<endl;
		cout<<"What is his surname?"<<endl;
		cin>>s;
		cout<<"What is his horsepower?"<<endl;
		cin>>a;
		cout<<"How many alcohol promiles does he have in blood?"<<endl;
		cin>>b;
		cout<<"What are his driving skills?"<<endl;
		cin>>c;
		q[i].insert(s,a,b,c);
	}
	cout<<"How many battles do you want to occur?"<<endl;
	cin>>e;
	for(int i=0;i<e;i++){
		cout<<"Battle number "<<i<<endl;
		cout<<"What is fighter nr1 name?"<<endl;
		cin>>sa>>sb;
		if(sa=="Mariusz")
			for(int j=0;j<e1;j++){
				if(sb==r[j].surname)
						p1=r[j].power();
				break;
			}
		if(sa=="Jaroslaw")
			for(int j=0;j<e2;j++){
				if(sb==p[j].surname)
						p1=p[j].power();
				break;
			}
		if(sa=="Zbyszek")
			for(int j=0;j<e3;j++){
				if(sb==q[j].surname)
						p1=q[j].power();
				break;
			}
		cout<<"What is fighter nr2 name?"<<endl;
		cin>>sc>>sd;
		if(sc=="Mariusz")
			for(int j=0;j<e1;j++){
				if(sd==r[j].surname)
						p2=r[j].power();
				break;
			}
		if(sc=="Jaroslaw")
			for(int j=0;j<e2;j++){
				if(sd==p[j].surname)
						p2=p[j].power();
				break;
			}
		if(sc=="Zbyszek")
			for(int j=0;j<e3;j++){
				if(sd==q[j].surname)
						p2=q[j].power();
				break;
			}
		cout<<sa<<" "<<sb<<" "<<p1<<":"<<p2<<" "<<sc<<" "<<sd<<endl;
		if(p1<p2)
			cout<<sc<<" "<<sd<<" has won"<<endl;
		else
			cout<<sa<<" "<<sb<<" has won"<<endl;
	}
	return 0;
}
