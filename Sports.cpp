#include <iostream>
#include <string>
#include "Meals.h"
#include "Sports.h"
#include "User.h"
using namespace std;

Basketball::Basketball() {
	//ctor
	kcal=6;
	min=0;
	spend=0;
}
Basketball::Basketball(int m) {
	//assignment ctor
	kcal=6;
	min=m;
	spend=kcal*min;
}
Basketball::Basketball(const Basketball &other) {
	//copy ctor
	kcal=other.kcal;
	min=other.min;
	spend=other.spend;
}
Basketball&Basketball::operator=(const Basketball &other) {
	//assignment operator
	kcal=other.kcal;
	min=other.min;
	spend=other.spend;

	return *this;
}
int Basketball::get_spend() {
	return spend;
}
void Basketball::set_min(int x) {
	//spend should change with changing minute
	min=x;
	spend=min*kcal;
}
Basketball Basketball::operator+(Basketball& x) {
	//+overloading
	Basketball tmp;
	//kcal per min stay same
	tmp.min=this->min+x.min;
	tmp.spend=(tmp.min)*kcal;
	
	return tmp;
}
ostream &operator<<(ostream&out,const Basketball&bb) {
	out<<"------------------------------------------------------------------\n";
	out<<"Kcal per min:"<<bb.kcal<<endl;
	out<<"Minute:"<<bb.min<<endl;
	out<<"Totall spend calori(kcal):"<<bb.spend<<endl;

	return out;
}
Football::Football() {
	//ctor
	kcal=5;
	min=0;
	spend=0;
}
Football::Football(int m) {
	//assignment ctor
	kcal=5;
	min=m;
	spend=kcal*min;
}
Football::Football(const Football &other) {
	//copy ctor
	kcal=other.kcal;
	min=other.min;
	spend=other.spend;
}
Football&Football::operator=(const Football &other) {
	//assignment operator
	kcal=other.kcal;
	min=other.min;
	spend=other.spend;

	return *this;
}
int Football::get_spend() {
	return spend;
}
void Football::set_min(int x) {
	//spend should change with changing minute
	min=x;
	spend=min*kcal;
}
Football Football::operator+(Football& x) {
	//+overloading
	Football tmp;
	//kcal per min stay same
	tmp.min=this->min+x.min;
	tmp.spend=(tmp.min)*kcal;
	
	return tmp;
}
ostream &operator<<(ostream&out,const Football&fb) {
	out<<"------------------------------------------------------------------\n";
	out<<"Kcal per min:"<<fb.kcal<<endl;
	out<<"Minute:"<<fb.min<<endl;
	out<<"Totall spend calori(kcal):"<<fb.spend<<endl;

	return out;
}
Tennis::Tennis() {
	//ctor
	kcal=5;
	min=0;
	spend=0;
}
Tennis::Tennis(int m) {
	//assignment ctor
	kcal=5;
	min=m;
	spend=kcal*min;
}
Tennis::Tennis(const Tennis &other) {
	//copy ctor
	kcal=other.kcal;
	min=other.min;
	spend=other.spend;
}
Tennis&Tennis::operator=(const Tennis&other) {
	//assignment operator
	kcal=other.kcal;
	min=other.min;
	spend=other.spend;

	return *this;
}
int Tennis::get_spend() {
	return spend;
}
void Tennis::set_min(int x) {
	//spend should change with changing minute
	min=x;
	spend=min*kcal;
}
Tennis Tennis::operator+(Tennis& x) {
	//+overloading
	Tennis tmp;
	//kcal per min stay same
	tmp.min=this->min+x.min;
	tmp.spend=(tmp.min)*kcal;
	return tmp;
}
ostream &operator<<(ostream&out,const Tennis&tn) {
	out<<"------------------------------------------------------------------\n";
	out<<"Kcal per min:"<<tn.kcal<<endl;
	out<<"Minute:"<<tn.min<<endl;
	out<<"Totall spend calori(kcal):"<<tn.spend<<endl;

	return out;
}

Swimming::Swimming() {
	//ctor
	kcal=7;
	min=0;
	spend=0;
}
Swimming::Swimming(int m) {
	//assignment ctor
	kcal=7;
	min=m;
	spend=kcal*min;
}
Swimming::Swimming(const Swimming &other) {
	//copy ctor
	kcal=other.kcal;
	min=other.min;
	spend=other.spend;
}
Swimming&Swimming::operator=(const Swimming&other) {
	//assignment operator
	kcal=other.kcal;
	min=other.min;
	spend=other.spend;

	return *this;
}
int Swimming::get_spend() {
	return spend;
}
void Swimming::set_min(int x) {
	//spend should change with changing minute
	min=x;
	spend=min*kcal;
}
Swimming Swimming::operator+(Swimming& x) {
	//+overloading
	Swimming tmp;
	//kcal per min stay same
	tmp.min=this->min+x.min;
	tmp.spend=(tmp.min)*kcal;
	
	return tmp;
}
ostream &operator<<(ostream&out,const Swimming&sm) {
	out<<"------------------------------------------------------------------\n";
	out<<"Kcal per min:"<<sm.kcal<<endl;
	out<<"Minute:"<<sm.min<<endl;
	out<<"Totall spend calori(kcal):"<<sm.spend<<endl;

	return out;
}