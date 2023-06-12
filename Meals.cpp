#include <iostream>
#include <string>
#include "Meals.h"
#include "Sports.h"
#include "User.h"
using namespace std;

Breakfast::Breakfast() {
	//ctor
	small=200;
	medium=400;
	large=600;
	type=0;
	get=0;
	num=0;
}
Breakfast::Breakfast(int t,int n) {
	//assignment ctor
	small=200;
	medium=400;
	large=600;
	num=n;
	type=t;
	if(type==1) {
		get=small*num;
	} else if(type==2) {
		get=medium*num;
	} else if(type==3) {
		get=large*num;
	}
}
Breakfast::Breakfast(const Breakfast &other) {
	//copy ctor
	small = other.small;
	medium = other.medium;
	large = other.large;
	type = other.type;
	get=other.get;
	num=other.num;
}
Breakfast&Breakfast::operator=(const Breakfast &other) {
	//assignment operator
	small = other.small;
	medium = other.medium;
	large = other.large;
	type = other.type;
	get=other.get;
	num=other.num;

	return *this;
}
Breakfast Breakfast::operator+(Breakfast& x) {
	//+overloading
	Breakfast tmp;
	//kcal for size and type stay same
	tmp.type=type;
	tmp.num=this->num+x.num;
	if(type==1) {
		tmp.get=small*tmp.num;
	} else if(type==2) {
		tmp.get=medium*tmp.num;
	} else if(type==3) {
		tmp.get=large*tmp.num;
	}

	return tmp;
}
ostream &operator<<(ostream&out,const Breakfast&bf) {
	out<<"------------------------------------------------------------------\n";
	out<<"Small kcal:"<<bf.small<<endl;
	out<<"Medium kcal:"<<bf.medium<<endl;
	out<<"Large kcal:"<<bf.large<<endl;
	out<<"Type:"<<bf.type<<endl;
	out<<"Number of breakfast:"<<bf.num<<endl;
	out<<"Totall kcal:"<<bf.get<<endl;

	return out;
}
Lunch::Lunch() {
	//ctor
	small=400;
	medium=600;
	large=800;
	type=0;
	get=0;
	num=0;
}
Lunch::Lunch(int t,int n) {
	//assignment ctor
	small=400;
	medium=600;
	large=800;
	num=n;
	type=t;
	if(type==1) {
		get=small*n;
	} else if(type==2) {
		get=medium*n;
	} else if(type==3) {
		get=large*n;
	}
}
Lunch::Lunch(const Lunch &other) {
	//copy ctor
	small = other.small;
	medium = other.medium;
	large = other.large;
	type = other.type;
	get=other.get;
	num=other.num;

}
Lunch&Lunch::operator=(const Lunch &other) {
	//assignment operator
	small = other.small;
	medium = other.medium;
	large = other.large;
	type = other.type;
	get=other.get;
	num=other.num;

	return *this;
}
Lunch Lunch::operator+(Lunch& x) {
	//+overloading
	Lunch tmp;
	//kcal for size and type stay same
	tmp.type=type;
	tmp.num=this->num+x.num;
	if(type==1) {
		tmp.get=small*tmp.num;
	} else if(type==2) {
		tmp.get=medium*tmp.num;
	} else if(type==3) {
		tmp.get=large*tmp.num;
	}

	return tmp;
}
ostream &operator<<(ostream&out,const Lunch&ln) {
	out<<"------------------------------------------------------------------\n";
	out<<"Small kcal:"<<ln.small<<endl;
	out<<"Medium kcal:"<<ln.medium<<endl;
	out<<"Large kcal:"<<ln.large<<endl;
	out<<"Type:"<<ln.type<<endl;
	out<<"Number of lunch:"<<ln.num<<endl;
	out<<"Totall kcal:"<<ln.get<<endl;

	return out;
}
Dinner::Dinner() {
	//ctor
	small=400;
	medium=600;
	large=800;
	type=0;
	get=0;
	num=0;
}
Dinner::Dinner(int t,int n) {
	//assignment ctor
	small=400;
	medium=600;
	large=800;
	num=n;
	type=t;
	if(type==1) {
		get=small*n;
	} else if(type==2) {
		get=medium*n;
	} else if(type==3) {
		get=large*n;
	}
}
Dinner::Dinner(const Dinner &other) {
	//copy ctor
	small = other.small;
	medium = other.medium;
	large = other.large;
	type = other.type;
	get=other.get;
	num=other.num;
}
Dinner&Dinner::operator=(const Dinner &other) {
	//assignment operator
	small = other.small;
	medium = other.medium;
	large = other.large;
	type = other.type;
	get=other.get;
	num=other.num;

	return *this;
}
Dinner Dinner::operator+(Dinner& x) {
	//+overloading
	Dinner tmp;
	//kcal for size and type stay same
	tmp.type=type;
	tmp.num=this->num+x.num;
	if(type==1) {
		tmp.get=small*tmp.num;
	} else if(type==2) {
		tmp.get=medium*tmp.num;
	} else if(type==3) {
		tmp.get=large*tmp.num;
	}
	
	return tmp;
}
ostream &operator<<(ostream&out,const Dinner&dn) {
	out<<"------------------------------------------------------------------\n";
	out<<"Small kcal:"<<dn.small<<endl;
	out<<"Medium kcal:"<<dn.medium<<endl;
	out<<"Large kcal:"<<dn.large<<endl;
	out<<"Type:"<<dn.type<<endl;
	out<<"Number of lunch:"<<dn.num<<endl;
	out<<"Totall kcal:"<<dn.get<<endl;

	return out;
}