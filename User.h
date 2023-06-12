#ifndef USER_H
#define USER_H
#include<iostream>
#include<string>
#include "Meals.h"
#include "Sports.h"

class User {
	private:
		std::string name;
		std::string surname;
		int ID;
		int age;
		int weight;
		int all_taken;
		int all_given;
		int week;
		int monday_given;
		int tuesday_given;
		int wednesday_given;
		int thursday_given;
		int friday_given;
		int saturday_given;
		int sunday_given;
		int monday_taken;
		int tuesday_taken;
		int wednesday_taken;
		int thursday_taken;
		int friday_taken;
		int saturday_taken;
		int sunday_taken;
		int breaknum;
		int lunchnum;
		int dinnernum;
		int basketnum;
		int footnum;
		int tennisnum;
		int swimnum;

	public:
		User();//ctor
		User(std::string n,std::string s,int i,int a,int wg,int at,int ag,int w);//assignment ctor
		User(const User &other);//copy ctor
		User&operator=(const User &other);//assignment operator
		int breakfast_num(Breakfast b);//to calculate number of breakfast
		int lunch_num(Lunch l);//to calculate number of lunch
		int dinner_num(Dinner d);//to calculate number of dinner
		int basketball_num();//to calculate number of basketball
		int football_num();//to calculate number of football
		int swimming_num();//to calculate number of swimming
		int tennis_num();//to calculate number of tennis
		void Monday(Breakfast bf,Lunch ln,Dinner dn,Basketball b,Football fb,Tennis tn,Swimming sw);//to calculate Monday kcal
		void Tuesday(Breakfast bf,Lunch ln,Dinner dn,Basketball b,Football fb,Tennis tn,Swimming sw);//to calculate Monday kcal
		void Wednesday(Breakfast bf,Lunch ln,Dinner dn,Basketball b,Football fb,Tennis tn,Swimming sw);//to calculate Monday kcal
		void Thursday(Breakfast bf,Lunch ln,Dinner dn,Basketball b,Football fb,Tennis tn,Swimming sw);//to calculate Monday kcal
		void Friday(Breakfast bf,Lunch ln,Dinner dn,Basketball b,Football fb,Tennis tn,Swimming sw);//to calculate Monday kcal
		void Saturday(Breakfast bf,Lunch ln,Dinner dn,Basketball b,Football fb,Tennis tn,Swimming sw);//to calculate Monday kcal
		void Sunday(Breakfast bf,Lunch ln,Dinner dn,Basketball b,Football fb,Tennis tn,Swimming sw);//to calculate Monday kcal
		int taken();//total taken calori for a week
		int given();//total given calori for a week
		User operator+(User& x); //+overloading
		friend std::ostream &operator<<(std::ostream& out,const User& us);//<<overloading
};//end User class

std::ostream &operator<<(std::ostream& out,const User& us);



#endif