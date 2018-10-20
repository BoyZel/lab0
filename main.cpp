#include <iostream>
#include "klasy.h"
using namespace std;
int main(){
	Jaroslaw p1;
	string s;
	int a,b,c;
	cout<<"Czesc. Wpisz dane pierwszego bohatera"<<endl;
	cin>>s>>a>>b>>c;
	p1.insert(s,a,b,c);
	cout<<p1.power()<<endl;
	return 0;
}
