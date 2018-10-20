#include <iostream>
using namespace std;
void Mariusz::insert(s,a,b,c){
	surname=s;
	strenght=a;
	agility=b;
	endurance=c;
}
void Jaroslaw::insert(s,a,b,c){
	surname=s;
	proc_timing=a;
	connection_speed=b;
	programming skills=c;
}
void Zbyszek::insert(s,a,b,c){
	surname=s;
	horsepower=a;
	driving_skills=b;
	alcohol promiles=c;
}
int Mariusz::power()
	return strenght+agility+(endurance--);
int Jaroslaw::power()
	return proc_timing+programming_skills+(connection_speed--);
int Zbyszek::power()
	return horsepower+driving_skills+(alcohol_promiles--);
