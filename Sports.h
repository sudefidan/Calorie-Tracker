#ifndef SPORTS_H
#define SPORTS_H
#include<iostream>
#include "Meals.h"
#include "User.h"

class Basketball {
	private:
		int kcal;
		int min;
		int spend;
	public:
		Basketball();//ctor
		Basketball(int m);//assignment ctor
		Basketball(const Basketball &other);//copy ctor
		Basketball&operator=(const Basketball &other);//assignment operator
		int get_spend();//return to spend kcal
		void set_min(int x);//assign min
		Basketball operator+(Basketball& x); //+overloading
		friend std::ostream &operator<<(std::ostream& out,const Basketball& bb);//<<overloading
		friend class User;
};//end Basketball class

std::ostream &operator<<(std::ostream& out,const Basketball& bb);

class Football {
	private:
		int kcal;
		int min;
		int spend;
	public:
		Football();//ctor
		Football(int m);//assignment ctor
		Football(const Football &other);//copy ctor
		Football&operator=(const Football &other);//assignment operator
		int get_spend();//return to spend kcal
		void set_min(int x);//assign min
		Football operator+(Football& x); //+overloading
		friend std::ostream &operator<<(std::ostream& out,const Football& fb);//<<overloading
		friend class User;
};//end Football class

std::ostream &operator<<(std::ostream& out,const Football& fb);

class Tennis {
	private:
		int kcal;
		int min;
		int spend;
	public:
		Tennis();//ctor
		Tennis(int m);//assignment ctor
		Tennis(const Tennis &other);//copy ctor
		Tennis&operator=(const Tennis &other);//assignment operator
		int get_spend();//return to spend kcal
		void set_min(int x);//assign min
		Tennis operator+(Tennis& x); //+overloading
		friend std::ostream &operator<<(std::ostream& out,const Tennis& tn);//<<overloading
		friend class User;
};//end Tennis class

std::ostream &operator<<(std::ostream& out,const Tennis& tn);

class Swimming {
	private:
		int kcal;
		int min;
		int spend;
	public:
		Swimming();//ctor
		Swimming(int m);//assignment ctor
		Swimming(const Swimming &other);//copy ctor
		Swimming&operator=(const Swimming &other);//assignment operator
		int get_spend();//return to spend kcal
		void set_min(int x);//assign min
		Swimming operator+(Swimming& x); //+overloading
		friend std::ostream &operator<<(std::ostream& out,const Swimming& sm);//<<overloading
		friend class User;
};//end Swimming class

std::ostream &operator<<(std::ostream& out,const Swimming& sm);

#endif