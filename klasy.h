#include <iostream>
#include <string>
using namespace std;
class Mariusz{
	public:
	string surname;
	int strenght;
	int agility;
	int endurance;
	void insert(string s,int a, int b,int c);
	int power();
};
class Jaroslaw{
	public:
	string surname;
	int proc_timing;
	int connection_speed;
	int programming_skills;
	void insert(string s,int a,int b,int c);
	int power();
};
class Zbyszek{
	public:
	string surname;
	int horsepower;
	int driving_skills;
	int alcohol_promiles;
	void insert(string s,int a,int b,int c);
	int power();
};
