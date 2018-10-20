#include <iostream>
#include "klasy.h"
using namespace std;
void Mariusz::insert(string s,int a,int b,int c){
	surname=s;
	strenght=a;
	agility=b;
	endurance=c;
}
void Jaroslaw::insert(string s,int a,int b,int c){
	surname=s;
	proc_timing=a;
	connection_speed=b;
	programming_skills=c;
}
void Zbyszek::insert(string s,int a,int b,int c){
	surname=s;
	horsepower=a;
	driving_skills=b;
	alcohol_promiles=c;
}
int Mariusz::power(){
	return strenght+agility+(endurance--);
}
int Jaroslaw::power(){
	return proc_timing+programming_skills+(connection_speed--);
}
int Zbyszek::power(){
	return horsepower+driving_skills+(alcohol_promiles--);
}
