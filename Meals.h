#ifndef MEALS_H
#define MEALS_H
#include<iostream>
#include "Sports.h"
#include "User.h"

class Breakfast {
	private:
		int small;
		int medium;
		int large;
		//1=small,2=medium,3=large
		int type;
		int get;
		int num;
	public:
		Breakfast();//ctor
		Breakfast(int t,int n);//assignment ctor
		Breakfast(const Breakfast &other);//copy ctor
		Breakfast&operator=(const Breakfast &other);//assignment operator
		Breakfast operator+(Breakfast& x); //+overloading
		friend std::ostream &operator<<(std::ostream& out,const Breakfast& bf);//<<overloading
		friend class User;
};//end Breakfast class

std::ostream &operator<<(std::ostream& out,const Breakfast& bf);

class Lunch {
	private:
		int small;
		int medium;
		int large;
		//1=small,2=medium,3=large
		int type;
		int get;
		int num;
	public:
		Lunch();//ctor
		Lunch(int t,int n);//assignment ctor
		Lunch(const Lunch &other);//copy ctor
		Lunch&operator=(const Lunch &other);//assignment operator
		Lunch operator+(Lunch& x);//+overloading
		friend std::ostream &operator<<(std::ostream& out,const Lunch& ln);//<<overloading
		friend class User;
};//end Lunch class

std::ostream &operator<<(std::ostream& out,const Lunch& ln);

class Dinner {
	private:
		int small;
		int medium;
		int large;
		//1=small,2=medium,3=large
		int type;
		int get;
		int num;
	public:
		Dinner();//ctor
		Dinner(int t,int n);//assignment ctor
		Dinner(const Dinner& other);//copy ctor
		Dinner&operator=(const Dinner &other);//assignment operator
		Dinner operator+(Dinner&x);//+overloading
		friend std::ostream &operator<<(std::ostream& out,const Dinner& dn);//<<overloading
		friend class User;
};//end Dinner class

std::ostream &operator<<(std::ostream& out,const Dinner& dn);

#endif