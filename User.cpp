#include <iostream>
#include <string>
#include "Meals.h"
#include "Sports.h"
#include "User.h"
using namespace std;

User::User() {
	//ctor
	name="";
	surname="";
	ID=0;
	age=0;
	weight=0;
	all_taken=0;
	all_given=0;
	week=0;
	monday_given=0;
	tuesday_given=0;
	wednesday_given=0;
	thursday_given=0;
	friday_given=0;
	saturday_given=0;
	sunday_given=0;
	monday_taken=0;
	tuesday_taken=0;
	wednesday_taken=0;
	thursday_taken=0;
	friday_taken=0;
	saturday_taken=0;
	sunday_taken=0;
	breaknum=0;
	lunchnum=0;
	dinnernum=0;
	basketnum=0;
	footnum=0;
	tennisnum=0;
	swimnum=0;
}
User::User(string n,string s,int i,int a,int wg,int at,int ag,int w) {
	name=n;
	surname=s;
	ID=i;
	age=a;
	weight=wg;
	all_taken=at;
	all_given=ag;
	week=w;
	monday_given=0;
	tuesday_given=0;
	wednesday_given=0;
	thursday_given=0;
	friday_given=0;
	saturday_given=0;
	sunday_given=0;
	monday_taken=0;
	tuesday_taken=0;
	wednesday_taken=0;
	thursday_taken=0;
	friday_taken=0;
	saturday_taken=0;
	sunday_taken=0;
	breaknum=0;
	lunchnum=0;
	dinnernum=0;
	basketnum=0;
	footnum=0;
	tennisnum=0;
	swimnum=0;
}
User::User(const User &other) {
	//copy ctor
	name=other.name;
	surname=other.surname;
	ID=other.ID;
	age=other.age;
	weight=other.weight;
	all_taken=other.all_taken;
	all_given=other.all_given;
	week=other.week;
	monday_taken=other.monday_taken;
	tuesday_taken=other.tuesday_taken;
	wednesday_taken=other.wednesday_taken;
	thursday_taken=other.thursday_taken;
	friday_taken=other.friday_taken;
	saturday_taken=other.saturday_taken;
	sunday_taken=other.sunday_taken;
	monday_given=other.monday_given;
	tuesday_given=other.tuesday_given;
	wednesday_given=other.wednesday_given;
	thursday_given=other.thursday_given;
	friday_given=other.friday_given;
	saturday_given=other.saturday_given;
	sunday_given=other.sunday_given;
	breaknum=other.breaknum;
	lunchnum=other.lunchnum;
	dinnernum=other.dinnernum;
	basketnum=other.basketnum;
	footnum=other.footnum;
	tennisnum=other.tennisnum;
	swimnum=other.swimnum;
}
User&User::operator=(const User &other) {
	//assignment operator
	name=other.name;
	surname=other.surname;
	ID=other.ID;
	age=other.age;
	weight=other.weight;
	all_taken=other.all_taken;
	all_given=other.all_given;
	week=other.week;
	monday_taken=other.monday_taken;
	tuesday_taken=other.tuesday_taken;
	wednesday_taken=other.wednesday_taken;
	thursday_taken=other.thursday_taken;
	friday_taken=other.friday_taken;
	saturday_taken=other.saturday_taken;
	sunday_taken=other.sunday_taken;
	monday_given=other.monday_given;
	tuesday_given=other.tuesday_given;
	wednesday_given=other.wednesday_given;
	thursday_given=other.thursday_given;
	friday_given=other.friday_given;
	saturday_given=other.saturday_given;
	sunday_given=other.sunday_given;
	breaknum=other.breaknum;
	lunchnum=other.lunchnum;
	dinnernum=other.dinnernum;
	basketnum=other.basketnum;
	footnum=other.footnum;
	tennisnum=other.tennisnum;
	swimnum=other.swimnum;

	return *this;
}
User User::operator+(User& x) {
	//+overloading
	User tmp;
	tmp.name=this->name+x.name;
	tmp.surname=this->surname+x.surname;
	tmp.ID=this->ID+x.ID;
	tmp.age=this->age+x.age;
	tmp.weight=this->weight+x.weight;
	tmp.all_taken=this->all_taken+x.all_taken;
	tmp.all_given=this->all_given+x.all_given;
	tmp.week=this->week+x.week;
	tmp.monday_given=this->monday_given+x.monday_given;
	tmp.tuesday_given=this->tuesday_given+x.tuesday_given;
	tmp.wednesday_given=this->wednesday_given+x.wednesday_given;
	tmp.thursday_given=this->thursday_given+x.thursday_given;
	tmp.friday_given=this->friday_given+x.friday_given;
	tmp.saturday_given=this->saturday_given+x.saturday_given;
	tmp.sunday_given=this->sunday_given+x.sunday_given;
	tmp.breaknum=this->breaknum+x.breaknum;
	tmp.lunchnum=this->lunchnum+x.lunchnum;
	tmp.dinnernum=this->dinnernum+x.dinnernum;
	tmp.basketnum=this->basketnum+x.basketnum;
	tmp.footnum=this->footnum+x.footnum;
	tmp.tennisnum=this->tennisnum+x.tennisnum;
	tmp.swimnum=this->swimnum+x.swimnum;
	
	return tmp;
}
int User::taken() {
	all_taken=monday_taken+tuesday_taken+wednesday_taken+thursday_taken+friday_taken+saturday_taken+sunday_taken;
	
	return all_taken;
}
int User::given() {
	all_given=monday_given+tuesday_given+wednesday_given+thursday_given+friday_given+saturday_given+sunday_given;
	
	return all_given;
}
int User::breakfast_num(Breakfast b){
	breaknum+=b.num;
	
	return breaknum;
}
int User::lunch_num(Lunch l){
	lunchnum+=l.num;
	
	return lunchnum;
}
int User::dinner_num(Dinner d){
	dinnernum+=d.num;
	
	return dinnernum;
}
int User::basketball_num(){
	basketnum+=1;
	
	return basketnum;
}
int User::football_num(){
	footnum+=1;
	
	return footnum;
}
int User::tennis_num(){
	tennisnum+=1;
	
	return tennisnum;
}
int User::swimming_num(){
	swimnum+=1;
	
	return swimnum;
}
ostream &operator<<(ostream&out,const User&us) {
	out<<"------------------------------------------------------------------\n";
	out<<"\nPERSONAL INFO"<<endl;
	out<<"Name:"<<us.name<<endl;
	out<<"Surname:"<<us.surname<<endl;
	out<<"ID:"<<us.ID<<endl;
	out<<"Age:"<<us.age<<endl;
	out<<"Weight:"<<us.weight<<endl;
	out<<"Week:"<<us.week<<endl;
	out<<"\nDAY BY DAY INFO"<<endl;
	out<<"Monday taken kcal:"<<us.monday_taken<<endl;
	out<<"Tuesday taken kcal:"<<us.tuesday_taken<<endl;
	out<<"Wednesday taken kcal:"<<us.wednesday_taken<<endl;
	out<<"Thursday taken kcal:"<<us.thursday_taken<<endl;
	out<<"Friday taken kcal:"<<us.friday_taken<<endl;
	out<<"Saturday taken kcal:"<<us.saturday_taken<<endl;
	out<<"Sunday taken kcal:"<<us.sunday_taken<<endl;
	out<<"Monday given kcal:"<<us.monday_given<<endl;
	out<<"Tuesday given kcal:"<<us.tuesday_given<<endl;
	out<<"Wednesday given kcal:"<<us.wednesday_given<<endl;
	out<<"Thursday given kcal:"<<us.thursday_given<<endl;
	out<<"Friday given kcal:"<<us.friday_given<<endl;
	out<<"Saturday given kcal:"<<us.saturday_given<<endl;
	out<<"Sunday given kcal:"<<us.sunday_given<<endl;
	out<<"\nWEEK INFO"<<endl;
	out<<"Number of breakfast for this week:"<<us.breaknum<<endl;
	out<<"Number of lunch for this week:"<<us.lunchnum<<endl;
	out<<"Number of dinner for this week:"<<us.dinnernum<<endl;
	out<<"Number of basketball exercise for this week:"<<us.basketnum<<endl;
	out<<"Number of football exercise for this week:"<<us.footnum<<endl;
	out<<"Number of tennis exercise for this week:"<<us.tennisnum<<endl;
	out<<"Number of swimming exercise for this week:"<<us.swimnum<<endl;

	return out;
}
void User::Monday(Breakfast bf,Lunch ln,Dinner dn,Basketball b,Football fb,Tennis tn,Swimming sw){
	monday_taken=bf.get+ln.get+dn.get;
	monday_given=b.get_spend()+fb.get_spend()+tn.get_spend()+sw.get_spend();
	all_taken+=monday_taken;
	all_given+=monday_given;
}
void User::Tuesday(Breakfast bf,Lunch ln,Dinner dn,Basketball b,Football fb,Tennis tn,Swimming sw){
	tuesday_taken=bf.get+ln.get+dn.get;
	tuesday_given=b.get_spend()+fb.get_spend()+tn.get_spend()+sw.get_spend();
	all_taken+=tuesday_taken;
	all_given+=tuesday_given;
}
void User::Wednesday(Breakfast bf,Lunch ln,Dinner dn,Basketball b,Football fb,Tennis tn,Swimming sw){
	wednesday_taken=bf.get+ln.get+dn.get;
	wednesday_given=b.get_spend()+fb.get_spend()+tn.get_spend()+sw.get_spend();
	all_taken+=wednesday_taken;
	all_given+=wednesday_given;
}
void User::Thursday(Breakfast bf,Lunch ln,Dinner dn,Basketball b,Football fb,Tennis tn,Swimming sw){
	thursday_taken=bf.get+ln.get+dn.get;
	thursday_given=b.get_spend()+fb.get_spend()+tn.get_spend()+sw.get_spend();
	all_taken+=thursday_taken;
	all_given+=thursday_given;
}
void User::Friday(Breakfast bf,Lunch ln,Dinner dn,Basketball b,Football fb,Tennis tn,Swimming sw){
	friday_taken=bf.get+ln.get+dn.get;
	friday_given=b.get_spend()+fb.get_spend()+tn.get_spend()+sw.get_spend();
	all_taken+=friday_taken;
	all_given+=friday_given;
}
void User::Saturday(Breakfast bf,Lunch ln,Dinner dn,Basketball b,Football fb,Tennis tn,Swimming sw){
	saturday_taken=bf.get+ln.get+dn.get;
	saturday_given=b.get_spend()+fb.get_spend()+tn.get_spend()+sw.get_spend();
	all_taken+=saturday_taken;
	all_given+=saturday_given;
}
void User::Sunday(Breakfast bf,Lunch ln,Dinner dn,Basketball b,Football fb,Tennis tn,Swimming sw){
	sunday_taken=bf.get+ln.get+dn.get;
	sunday_given=b.get_spend()+fb.get_spend()+tn.get_spend()+sw.get_spend();
	all_taken+=sunday_taken;
	all_given+=sunday_given;
}