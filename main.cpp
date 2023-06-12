#include <iostream>
#include <string>
#include "Meals.h"
#include "Sports.h"
#include "User.h"
using namespace std;


int main() {
	char mode,lib,meal,sport,choice;
	int ID,age,weight,week,breakf,lnch,dnr,size,min,basketnum,footnum,tennum,swimnum;
	string name,surname;
mode:
	cout<<"Which mode you want to use(Enter D:developer or U:user):";
	cin>>mode;
	if(mode == 'D' || mode=='d') {
		cout<<"\n\t\tWELCOME DEVELOPER MODE"<<endl<<endl;
library:
		cout<<"Which library you want to control(M:Meals,S:Sport,U:User):";
		cin>>lib;
		if(lib=='M' || lib=='m') {
meal:
			cout<<"Which meal you want to control(B:Breakfast,L:Lunch,D:Dinner):";
			cin>>meal;
			if(meal=='B' || meal=='b') {
				//breakfast class memver function controls
				cout<<"\tBREAKFAST CTOR CONTROL"<<endl;
				Breakfast b1;
				cout<<b1;
				cout<<"\tBREAKFAST ASSIGNMENT CTOR CONTROL"<<endl;
				cout<<"Object is created as type:1 and num:1 "<<endl;
				Breakfast b2(1,1);
				cout<<b2;
				cout<<"\tBREAKFAST + OVERLOADING CTOR CONTROL"<<endl;
				cout<<"Object is created as type:1 and num:2 and add with another object as type:1 and num:1 "<<endl;
				Breakfast b3(1,2);
				Breakfast b4;
				b4=b3+b2;
				cout<<b4;
				cout<<"\tBREAKFAST COPY CTOR CONTROL"<<endl;
				cout<<"Object is created as copy of object which is type:1 and num:1  "<<endl;
				Breakfast b5=b2;
				cout<<b5;
				cout<<"\tBREAKFAST ASSIGNMENT OPERATOR CONTROL"<<endl;
				cout<<"Object which is type:1 and num:1 assigned to another object created by default ctor"<<endl;
				Breakfast b6;
				b6=b2;
				cout<<b6;
			} else if(meal=='L' || meal=='l') {
				//lunch class member function controls
				cout<<"\tLUNCH CTOR CONTROL"<<endl;
				Lunch l1;
				cout<<l1;
				cout<<"\tLUNCH ASSIGNMENT CTOR CONTROL"<<endl;
				cout<<"Object is created as type:2 and num:3 "<<endl;
				Lunch l2(2,3);
				cout<<l2;
				cout<<"\tLUNCH + OVERLOADING CTOR CONTROL"<<endl;
				cout<<"Object is created as type:2 and num:5 and add with another object as type:2 and num:3 "<<endl;
				Lunch l3(2,5);
				Lunch l4;
				l4=l3+l2;
				cout<<l4;
				cout<<"\tLUNCH COPY CTOR CONTROL"<<endl;
				cout<<"Object is created as copy of object which is type:2 and num:3  "<<endl;
				Lunch l5=l2;
				cout<<l5;
				cout<<"\tLUNCH ASSIGNMENT OPERATOR CONTROL"<<endl;
				cout<<"Object which is type:2 and num:3 assigned to another object created by default ctor"<<endl;
				Lunch l6;
				l6=l2;
				cout<<l6;
			} else if(meal=='D' || meal=='d') {
				//dinner class member function controls
				cout<<"\tDINNER CTOR CONTROL"<<endl;
				Dinner d1;
				cout<<d1;
				cout<<"\tDINNER ASSIGNMENT CTOR CONTROL"<<endl;
				cout<<"Object is created as type:3 and num:2 "<<endl;
				Dinner d2(3,2);
				cout<<d2;
				cout<<"\tDINNER + OVERLOADING CTOR CONTROL"<<endl;
				cout<<"Object is created as type:3 and num:4 and add with another object as type:3 and num:2"<<endl;
				Dinner d3(3,4);
				Dinner d4;
				d4=d3+d2;
				cout<<d4;
				cout<<"\tDINNER COPY CTOR CONTROL"<<endl;
				cout<<"Object is created as copy of object which is type:3 and num:2  "<<endl;
				Dinner d5=d2;
				cout<<d5;
				cout<<"\tDINNER ASSIGNMENT OPERATOR CONTROL"<<endl;
				cout<<"Object which is type:3 and num:2 assigned to another object created by default ctor"<<endl;
				Dinner d6;
				d6=d2;
				cout<<d6;
			} else {
				cout<<"ERROR: INVALID"<<endl<<endl;
				goto meal;
			}
		} else if(lib=='S'||lib=='s') {
sport:
			cout<<"Which sports you want to control(B:Basketball,F:Football,T:Tennis,S:Swimming):";
			cin>>sport;
			if(sport=='B' || sport=='b') {
				//basketball class member function controls
				cout<<"\tBASKETBALL CTOR CONTROL"<<endl;
				Basketball bl1;
				cout<<bl1;
				cout<<"\tBASKETBALL ASSIGNMENT CTOR CONTROL"<<endl;
				cout<<"Object is created as min:30 "<<endl;
				Basketball bl2(30);
				cout<<bl2;
				cout<<"\tBASKETBALL + OVERLOADING CTOR CONTROL"<<endl;
				cout<<"Object is created as min:20 and add to another object as min:30 "<<endl;
				Basketball bl3(20);
				Basketball bl4;
				bl4=bl3+bl2;
				cout<<bl4;
				cout<<"\tBASKETBALL COPY CTOR CONTROL"<<endl;
				cout<<"Object is created as copy of object which is min:30  "<<endl;
				Basketball bl5=bl2;
				cout<<bl5;
				cout<<"\tBASKETBALL ASSIGNMENT OPERATOR CONTROL"<<endl;
				cout<<"Object which is min:30 assigned to another object created by default ctor"<<endl;
				Basketball bl6;
				bl6=bl2;
				cout<<bl6;
				cout<<"\tBASKETBALL GET_SPEND CONTROL"<<endl;
				cout<<"Min of object:30"<<endl;
				cout<<"------------------------------------------------------------------\n";
				cout<<"Spend kcal:"<<bl2.get_spend()<<endl;
				cout<<"\tBASKETBALL SET_MIN CONTROL"<<endl;
				cout<<"Object is created by default ctor,then set min:50 "<<endl;
				Basketball bl7;
				bl7.set_min(50);
				cout<<bl7;
			} else if(sport=='F' || sport=='f') {
				//football class member function controls
				cout<<"\tFOOTBALL CTOR CONTROL"<<endl;
				Football fl1;
				cout<<fl1;
				cout<<"\tFOOTBALL ASSIGNMENT CTOR CONTROL"<<endl;
				cout<<"Object is created as min:10 "<<endl;
				Football fl2(10);
				cout<<fl2;
				cout<<"\tFOOTBALL + OVERLOADING CTOR CONTROL"<<endl;
				cout<<"Object is created as min:240 and add to another object as min:10 "<<endl;
				Football fl3(240);
				Football fl4;
				fl4=fl3+fl2;
				cout<<fl4;
				cout<<"\tFOOTBALL COPY CTOR CONTROL"<<endl;
				cout<<"Object is created as copy of object which is min:10  "<<endl;
				Football fl5=fl2;
				cout<<fl5;
				cout<<"\tFOOTBALL ASSIGNMENT OPERATOR CONTROL"<<endl;
				cout<<"Object which is min:10 assigned to another object created by default ctor"<<endl;
				Football fl6;
				fl6=fl2;
				cout<<fl6;
				cout<<"\tFOOTBALL GET_SPEND CONTROL"<<endl;
				cout<<"Min of object:10"<<endl;
				cout<<"------------------------------------------------------------------\n";
				cout<<"Spend kcal:"<<fl2.get_spend()<<endl;
				cout<<"\tFOOTBALL SET_MIN CONTROL"<<endl;
				cout<<"Object is created by default ctor,then set min:50 "<<endl;
				Football fl7;
				fl7.set_min(50);
				cout<<fl7;
			} else if(sport=='T' || sport=='t') {
				//tennis class member function controls
				cout<<"\tTENNIS CTOR CONTROL"<<endl;
				Tennis t1;
				cout<<t1;
				cout<<"\tTENNIS ASSIGNMENT CTOR CONTROL"<<endl;
				cout<<"Object is created as min:15 "<<endl;
				Tennis t2(15);
				cout<<t2;
				cout<<"\tTENNIS  + OVERLOADING CTOR CONTROL"<<endl;
				cout<<"Object is created as min:40 and add to another object as min:15 "<<endl;
				Tennis t3(40);
				Tennis t4;
				t4=t3+t2;
				cout<<t4;
				cout<<"\tTENNIS  COPY CTOR CONTROL"<<endl;
				cout<<"Object is created as copy of object which is min:15  "<<endl;
				Tennis t5=t2;
				cout<<t5;
				cout<<"\tTENNIS ASSIGNMENT OPERATOR CONTROL"<<endl;
				cout<<"Object which is min:15 assigned to another object created by default ctor"<<endl;
				Tennis t6;
				t6=t2;
				cout<<t6;
				cout<<"\tTENNIS GET_SPEND CONTROL"<<endl;
				cout<<"Min of object:15"<<endl;
				cout<<"------------------------------------------------------------------\n";
				cout<<"Spend kcal:"<<t2.get_spend()<<endl;
				cout<<"\tTENNIS SET_MIN CONTROL"<<endl;
				cout<<"Object is created by default ctor,then set min:50 "<<endl;
				Tennis t7;
				t7.set_min(50);
				cout<<t7;
			} else if(sport=='S' || sport=='s') {
				//swimm class member function controls
				cout<<"\tSWIMMING CTOR CONTROL"<<endl;
				Swimming s1;
				cout<<s1;
				cout<<"\tSWIMMING ASSIGNMENT CTOR CONTROL"<<endl;
				cout<<"Object is created as min:15 "<<endl;
				Swimming s2(15);
				cout<<s2;
				cout<<"\tSWIMMING  + OVERLOADING CTOR CONTROL"<<endl;
				cout<<"Object is created as min:70 and add to another object as min:15 "<<endl;
				Swimming s3(70);
				Swimming s4;
				s4=s3+s2;
				cout<<s4;
				cout<<"\tSWIMMING  COPY CTOR CONTROL"<<endl;
				cout<<"Object is created as copy of object which is min:15  "<<endl;
				Swimming s5=s2;
				cout<<s5;
				cout<<"\tSWIMMING ASSIGNMENT OPERATOR CONTROL"<<endl;
				cout<<"Object which is min:15 assigned to another object created by default ctor"<<endl;
				Swimming s6;
				s6=s2;
				cout<<s6;
				cout<<"\tSWIMMING  GET_SPEND CONTROL"<<endl;
				cout<<"Min of object:15"<<endl;
				cout<<"------------------------------------------------------------------\n";
				cout<<"Spend kcal:"<<s2.get_spend()<<endl;
				cout<<"\tSWIMMING  SET_MIN CONTROL"<<endl;
				cout<<"Object is created by default ctor,then set min:50 "<<endl;
				Swimming s7;
				s7.set_min(50);
				cout<<s7;
			} else {
				cout<<"ERROR: INVALID"<<endl<<endl;
				goto sport;
			}
		} else if(lib=='U' || lib=='u') {
			//user class member function controls
			cout<<"\tUSER CTOR CONTROL"<<endl;
			User u1;
			cout<<u1;
			cout<<"\tUSER ASSIGNMENT CTOR CONTROL"<<endl;
			cout<<"Object is created as name:Sude,surname:Fidan,ID:1,age:19,weight:55,week:21"<<endl;
			User u2("Sude","Fidan",1,19,55,0,0,21);
			cout<<u2;
			cout<<"\tUSER + OVERLOADING CTOR CONTROL"<<endl;
			cout<<"Object is created as name:Tuba,surname:Gozel,ID:2,age:30,weight:65,week:2 and add to another object as name:Sude,surname:Fidan,ID:1,age:19,weight:55,week:21 " <<endl;
			User u3("Tuba","Gozel",2,30,65,0,0,2);
			User u4;
			u4=u3+u2;
			cout<<u4;
			cout<<"\tUSER COPY CTOR CONTROL"<<endl;
			cout<<"Object is created as copy of object which is name:Sude,surname:Fidan,ID:1,age:19,weight:55,week:21 "<<endl;
			User u5=u2;
			cout<<u5;
			cout<<"\tUSER ASSIGNMENT OPERATOR CONTROL"<<endl;
			cout<<"Object which is name:Sude,surname:Fidan,ID:1,age:19,weight:55,week:21 assigned to another object created by default ctor"<<endl;
			User u6;
			u6=u2;
			cout<<u6;
			cout<<"\tUSER BREAKFAST NUM CONTROL"<<endl;
			cout<<"Object which is name:Selim,surname:Sahin,ID:3,age:24,weight:75,week:1 and breakfast num:2"<<endl;
			cout<<"------------------------------------------------------------------\n";
			User u7("Selim","Sahin",3,24,75,0,0,1);
			Breakfast bctrl(1,2);
			cout<<"Breakfast num:"<<u7.breakfast_num(bctrl)<<endl;
			cout<<"\tUSER LUNCH NUM CONTROL"<<endl;
			cout<<"Object which is name:Selim,surname:Sahin,ID:3,age:24,weight:75,week:1 and lunch num:4"<<endl;
			cout<<"------------------------------------------------------------------\n";
			Lunch lctrl(1,4);
			cout<<"Lunch num:"<<u7.lunch_num(lctrl)<<endl;
			cout<<"\tUSER DINNER NUM CONTROL"<<endl;
			cout<<"Object which is name:Selim,surname:Sahin,ID:3,age:24,weight:75,week:1 and dinner num:1"<<endl;
			cout<<"------------------------------------------------------------------\n";
			Dinner dctrl(1,1);
			cout<<"Dinner num:"<<u7.dinner_num(dctrl)<<endl;
			cout<<"\tUSER BASKETBALL NUM CONTROL"<<endl;
			cout<<"Object which is name:Selim,surname:Sahin,ID:3,age:24,weight:75,week:1 and basketball num:5"<<endl;
			cout<<"------------------------------------------------------------------\n";
			for(int i=0; i<5; i++) {
				basketnum=u7.basketball_num();
			}
			cout<<"Basketball num:"<<basketnum<<endl;
			cout<<"\tUSER FOOTBALL NUM CONTROL"<<endl;
			cout<<"Object which is name:Selim,surname:Sahin,ID:3,age:24,weight:75,week:1 and football num:2"<<endl;
			cout<<"------------------------------------------------------------------\n";
			for(int i=0; i<2; i++) {
				footnum=u7.football_num();
			}
			cout<<"Football num:"<<footnum<<endl;
			cout<<"\tUSER TENNIS NUM CONTROL"<<endl;
			cout<<"Object which is name:Selim,surname:Sahin,ID:3,age:24,weight:75,week:1 and tennis num:7"<<endl;
			cout<<"------------------------------------------------------------------\n";
			for(int i=0; i<7; i++) {
				tennum=u7.tennis_num();
			}
			cout<<"Tennis num:"<<tennum<<endl;
			cout<<"\tUSER SWIMMING NUM CONTROL"<<endl;
			cout<<"Object which is name:Selim,surname:Sahin,ID:3,age:24,weight:75,week:1 and swimming num:1"<<endl;
			cout<<"------------------------------------------------------------------\n";
			swimnum=u7.swimming_num();
			cout<<"Swimming num:"<<swimnum<<endl;
			//create object to control week functions
			Breakfast bweek(1,1);
			Lunch lweek(1,1);
			Dinner dweek(1,1);
			Basketball bsweek(10);
			Football fweek(10);
			Tennis tweek(10);
			Swimming sweek(10);
			cout<<"\tUSER WEEK FUNCTIONS CONTROL"<<endl;
			cout<<"Ever meal type:1,num:1 and every sport min:10 for each day"<<endl;
			User u8;
			u8.Monday(bweek,lweek,dweek,bsweek,fweek,tweek,sweek);
			u8.Tuesday(bweek,lweek,dweek,bsweek,fweek,tweek,sweek);
			u8.Wednesday(bweek,lweek,dweek,bsweek,fweek,tweek,sweek);
			u8.Thursday(bweek,lweek,dweek,bsweek,fweek,tweek,sweek);
			u8.Friday(bweek,lweek,dweek,bsweek,fweek,tweek,sweek);
			u8.Saturday(bweek,lweek,dweek,bsweek,fweek,tweek,sweek);
			u8.Sunday(bweek,lweek,dweek,bsweek,fweek,tweek,sweek);
			cout<<u8;
		} else {
			cout<<"ERROR: INVALID"<<endl<<endl;
			goto library;
		}
	} else if(mode == 'U' || mode=='u') {
		cout<<"\n\t\tWELCOME USER MODE"<<endl;
		//user info
		cout<<"Please enter name:";
		cin>>name;
		cout<<"Please enter surname:";
		cin>>surname;
		cout<<"Please enter ID:";
		cin>>ID;
		cout<<"Please enter age:";
		cin>>age;
		cout<<"Please enter weight:";
		cin>>weight;
		cout<<"Please enter week:";
		cin>>week;
		User user(name,surname,ID,age,weight,0,0,week);


		//monday kcals
		cout<<"\n\t\tMonday Meal Calculation"<<endl;
		cout<<"\n\nEnter the number of breakfast(1,2 etc.)on Monday:";
		cin>>breakf;
		cout<<"Enter your breakfast size(1:small,2:medium,3:large):";
		cin>>size;
		Breakfast mb(size,breakf);
		user.breakfast_num(mb);
		size=0;
		breakf=0;
		cout<<"\n\nEnter the number of lunch(1,2 etc.)on Monday:";
		cin>>lnch;
		cout<<"Enter your lunch size(1:small,2:medium,3:large):";
		cin>>size;
		Lunch ml(size,lnch);
		user.lunch_num(ml);
		size=0;
		lnch=0;
		cout<<"\n\nEnter the number of dinner(1,2 etc.)on Monday:";
		cin>>dnr;
		cout<<"Enter your dinner size(1:small,2:medium,3:large):";
		cin>>size;
		Dinner md(size,dnr);
		user.dinner_num(md);
		size=0;
		dnr=0;
mex:
		cout<<"\n\nWhich exercise have you done on Monday(B:Basketball,F:Football,T:Tennis,S:Swimming):";
		cin>>choice;
		cout<<"Enter your exercise min:";
		cin>>min;
		//create sport class objects as default
		Basketball mbl;
		Football mf;
		Tennis mt;
		Swimming ms;
		switch(choice) {
			case 'B':
			case 'b': {
				//set time
				mbl.set_min(min);
				user.basketball_num();
				break;
			}
			case 'F':
			case 'f': {
				//set time
				mf.set_min(min);
				user.football_num();
				break;
			}
			case 'T':
			case 't': {
				//set time
				mt.set_min(min);
				user.tennis_num();
				break;
			}
			case 'S':
			case 's': {
				//set time
				ms.set_min(min);
				user.swimming_num();
				break;
			}
			default:
				cout<<"ERROR: INVALID"<<endl<<endl;
				goto mex;
		}
		min=0;
		choice=0;
		//add monday infos
		user.Monday(mb,ml,md,mbl,mf,mt,ms);


		//tuesday kcals
		cout<<"\n\t\tTuesday Meal Calculation"<<endl;
		cout<<"\n\nEnter the number of breakfast(1,2 etc.)on Tuesday:";
		cin>>breakf;
		cout<<"Enter your breakfast size(1:small,2:medium,3:large):";
		cin>>size;
		Breakfast tsb(size,breakf);
		user.breakfast_num(tsb);
		size=0;
		breakf=0;
		cout<<"\n\nEnter the number of lunch(1,2 etc.)on Tuesday:";
		cin>>lnch;
		cout<<"Enter your lunch size(1:small,2:medium,3:large):";
		cin>>size;
		Lunch tsl(size,lnch);
		user.lunch_num(tsl);
		size=0;
		lnch=0;
		cout<<"\n\nEnter the number of dinner(1,2 etc.)on Tuesday:";
		cin>>dnr;
		cout<<"Enter your dinner size(1:small,2:medium,3:large):";
		cin>>size;
		Dinner tsd(size,dnr);
		user.dinner_num(tsd);
		size=0;
		dnr=0;
tsex:
		cout<<"\n\nWhich exercise have you done on Tuesday(B:Basketball,F:Football,T:Tennis,S:Swimming):";
		cin>>choice;
		cout<<"Enter your exercise min:";
		cin>>min;
		//create sport objects as default
		Basketball tsbl;
		Football tsf;
		Tennis tst;
		Swimming tss;
		switch(choice) {
			case 'B':
			case 'b': {
				//set time
				tsbl.set_min(min);
				user.basketball_num();
				break;
			}
			case 'F':
			case 'f': {
				//set time
				tsf.set_min(min);
				user.football_num();
				break;
			}
			case 'T':
			case 't': {
				//set time
				tst.set_min(min);
				user.tennis_num();
				break;
			}
			case 'S':
			case 's': {
				//set time
				tss.set_min(min);
				user.swimming_num();
				break;
			}
			default:
				cout<<"ERROR: INVALID"<<endl<<endl;
				goto tsex;
		}
		min=0;
		choice=0;
		//add tuesday infos
		user.Tuesday(tsb,tsl,tsd,tsbl,tsf,tst,tss);


		//wednesday kcals
		cout<<"\n\t\tWednesday Meal Calculation"<<endl;
		cout<<"\n\nEnter the number of breakfast(0,1,2 etc.)on Wednesday:";
		cin>>breakf;
		cout<<"Enter your breakfast size(1:small,2:medium,3:large):";
		cin>>size;
		Breakfast wb(size,breakf);
		user.breakfast_num(wb);
		size=0;
		breakf=0;
		cout<<"\n\nEnter the number of lunch(1,2 etc.)on Wednesday:";
		cin>>lnch;
		cout<<"Enter your lunch size(1:small,2:medium,3:large):";
		cin>>size;
		Lunch wl(size,lnch);
		user.lunch_num(wl);
		size=0;
		lnch=0;
		cout<<"\n\nEnter the number of dinner(1,2 etc.)on Wednesday:";
		cin>>dnr;
		cout<<"Enter your dinner size(1:small,2:medium,3:large):";
		cin>>size;
		Dinner wd(size,dnr);
		user.dinner_num(wd);
		size=0;
		dnr=0;
wex:
		cout<<"\n\nWhich exercise have you done on Wednesday(B:Basketball,F:Football,T:Tennis,S:Swimming):";
		cin>>choice;
		cout<<"Enter your exercise min:";
		cin>>min;
		//create sport objects as default
		Basketball wbl;
		Football wf;
		Tennis wt;
		Swimming ws;
		switch(choice) {
			case 'B':
			case 'b': {
				//set time
				wbl.set_min(min);
				user.basketball_num();
				break;
			}
			case 'F':
			case 'f': {
				//set time
				wf.set_min(min);
				user.football_num();
				break;
			}
			case 'T':
			case 't': {
				//set time
				wt.set_min(min);
				user.tennis_num();
				break;
			}
			case 'S':
			case 's': {
				//set time
				ws.set_min(min);
				user.swimming_num();
				break;
			}
			default:
				cout<<"ERROR: INVALID"<<endl<<endl;
				goto wex;
		}
		min=0;
		choice=0;
		// add wednesday infos
		user.Wednesday(wb,wl,wd,wbl,wf,wt,ws);


		//thursday kcals
		cout<<"\n\t\tThursday Meal Calculation"<<endl;
		cout<<"\n\nEnter the number of breakfast(1,2 etc.)on Thursday:";
		cin>>breakf;
		cout<<"Enter your breakfast size(1:small,2:medium,3:large):";
		cin>>size;
		Breakfast thb(size,breakf);
		user.breakfast_num(thb);
		size=0;
		breakf=0;
		cout<<"\n\nEnter the number of lunch(1,2 etc.)on Thursday:";
		cin>>lnch;
		cout<<"Enter your lunch size(1:small,2:medium,3:large):";
		cin>>size;
		Lunch thl(size,lnch);
		user.lunch_num(thl);
		size=0;
		lnch=0;
		cout<<"\n\nEnter the number of dinner(1,2 etc.)on Thursday:";
		cin>>dnr;
		cout<<"Enter your dinner size(1:small,2:medium,3:large):";
		cin>>size;
		Dinner thd(size,dnr);
		user.dinner_num(thd);
		size=0;
		dnr=0;
thex:
		cout<<"\n\nWhich exercise have you done on Thursday(B:Basketball,F:Football,T:Tennis,S:Swimming):";
		cin>>choice;
		cout<<"Enter your exercise min:";
		cin>>min;
		//create sports objects as default
		Basketball thbl;
		Football thf;
		Tennis tht;
		Swimming ths;
		switch(choice) {
			case 'B':
			case 'b': {
				//set time
				thbl.set_min(min);
				user.basketball_num();
				break;
			}
			case 'F':
			case 'f': {
				//set time
				thf.set_min(min);
				user.football_num();
				break;
			}
			case 'T':
			case 't': {
				//set time
				tht.set_min(min);
				user.tennis_num();
				break;
			}
			case 'S':
			case 's': {
				//set time
				ths.set_min(min);
				user.swimming_num();
				break;
			}
			default:
				cout<<"ERROR: INVALID"<<endl<<endl;
				goto thex;
		}
		min=0;
		choice=0;
		//add thursday infos
		user.Thursday(thb,thl,thd,thbl,thf,tht,ths);

		//friday kcals
		cout<<"\n\t\tFriday Meal Calculation"<<endl;
		cout<<"\n\nEnter the number of breakfast(1,2 etc.)on Friday:";
		cin>>breakf;
		cout<<"Enter your breakfast size(1:small,2:medium,3:large):";
		cin>>size;
		Breakfast fb(size,breakf);
		user.breakfast_num(fb);
		size=0;
		breakf=0;
		cout<<"\n\nEnter the number of lunch(1,2 etc.)on Friday:";
		cin>>lnch;
		cout<<"Enter your lunch size(1:small,2:medium,3:large):";
		cin>>size;
		Lunch fl(size,lnch);
		user.lunch_num(fl);
		size=0;
		lnch=0;
		cout<<"\n\nEnter the number of dinner(1,2 etc.)on Friday:";
		cin>>dnr;
		cout<<"Enter your dinner size(1:small,2:medium,3:large):";
		cin>>size;
		Dinner fd(size,dnr);
		user.dinner_num(fd);
		size=0;
		dnr=0;
fex:
		cout<<"\n\nWhich exercise have you done on Friday(B:Basketball,F:Football,T:Tennis,S:Swimming):";
		cin>>choice;
		cout<<"Enter your exercise min:";
		cin>>min;
		//create sport objects as default
		Basketball fbl;
		Football ff;
		Tennis ft;
		Swimming fs;
		switch(choice) {
			case 'B':
			case 'b': {
				//set time
				fbl.set_min(min);
				user.basketball_num();
				break;
			}
			case 'F':
			case 'f': {
				//set time
				ff.set_min(min);
				user.football_num();
				break;
			}
			case 'T':
			case 't': {
				//set time
				ft.set_min(min);
				user.tennis_num();
				break;
			}
			case 'S':
			case 's': {
				//set time
				fs.set_min(min);
				user.swimming_num();
				break;
			}
			default:
				cout<<"ERROR: INVALID"<<endl<<endl;
				goto fex;
		}
		min=0;
		choice=0;
		//add friday infos
		user.Friday(fb,fl,fd,fbl,ff,ft,fs);


		//saturday kcals
		cout<<"\n\t\tSaturday Meal Calculation"<<endl;
		cout<<"\n\nEnter the number of breakfast(1,2 etc.)on Saturday:";
		cin>>breakf;
		cout<<"Enter your breakfast size(1:small,2:medium,3:large):";
		cin>>size;
		Breakfast stb(size,breakf);
		user.breakfast_num(stb);
		size=0;
		breakf=0;
		cout<<"\n\nEnter the number of lunch(1,2 etc.)on Saturday:";
		cin>>lnch;
		cout<<"Enter your lunch size(1:small,2:medium,3:large):";
		cin>>size;
		Lunch stl(size,lnch);
		user.lunch_num(stl);
		size=0;
		lnch=0;
		cout<<"\n\nEnter the number of dinner(1,2 etc.)on Saturday:";
		cin>>dnr;
		cout<<"Enter your dinner size(1:small,2:medium,3:large):";
		cin>>size;
		Dinner std(size,dnr);
		user.dinner_num(std);
		size=0;
		dnr=0;
stex:
		cout<<"\n\nWhich exercise have you done on Saturday(B:Basketball,F:Football,T:Tennis,S:Swimming):";
		cin>>choice;
		cout<<"Enter your exercise min:";
		cin>>min;
		//create sport objects as default
		Basketball stbl;
		Football stf;
		Tennis stt;
		Swimming sts;
		switch(choice) {
			case 'B':
			case 'b': {
				//set time
				stbl.set_min(min);
				user.basketball_num();
				break;
			}
			case 'F':
			case 'f': {
				//set time
				stf.set_min(min);
				user.football_num();
				break;
			}
			case 'T':
			case 't': {
				//set time
				stt.set_min(min);
				user.tennis_num();
				break;
			}
			case 'S':
			case 's': {
				//set time
				sts.set_min(min);
				user.swimming_num();
				break;
			}
			default:
				cout<<"ERROR: INVALID"<<endl<<endl;
				goto stex;
		}
		min=0;
		choice=0;
		//add saturday infos
		user.Saturday(stb,stl,std,stbl,stf,stt,sts);


		//sunday kcals
		cout<<"\n\t\tSunday Meal Calculation"<<endl;
		cout<<"\n\nEnter the number of breakfast(1,2 etc.)on Sunday:";
		cin>>breakf;
		cout<<"Enter your breakfast size(1:small,2:medium,3:large):";
		cin>>size;
		Breakfast snb(size,breakf);
		user.breakfast_num(snb);
		size=0;
		breakf=0;
		cout<<"\n\nEnter the number of lunch(1,2 etc.)on Sunday:";
		cin>>lnch;
		cout<<"Enter your lunch size(1:small,2:medium,3:large):";
		cin>>size;
		Lunch snl(size,lnch);
		user.lunch_num(snl);
		size=0;
		lnch=0;
		cout<<"\n\nEnter the number of dinner(1,2 etc.)on Sunday:";
		cin>>dnr;
		cout<<"Enter your dinner size(1:small,2:medium,3:large):";
		cin>>size;
		Dinner snd(size,dnr);
		user.dinner_num(snd);
		size=0;
		dnr=0;
snex:
		cout<<"\n\nWhich exercise have you done on Sunday(B:Basketball,F:Football,T:Tennis,S:Swimming):";
		cin>>choice;
		cout<<"Enter your exercise min:";
		cin>>min;
		//create sport objects as default
		Basketball snbl;
		Football snf;
		Tennis snt;
		Swimming sns;
		switch(choice) {
			case 'B':
			case 'b': {
				//set time
				snbl.set_min(min);
				user.basketball_num();
				break;
			}
			case 'F':
			case 'f': {
				//set time
				snf.set_min(min);
				user.football_num();
				break;
			}
			case 'T':
			case 't': {
				//set time
				snt.set_min(min);
				user.tennis_num();
				break;
			}
			case 'S':
			case 's': {
				//set time
				sns.set_min(min);
				user.swimming_num();
				break;
			}
			default:
				cout<<"ERROR: INVALID"<<endl<<endl;
				goto snex;
		}
		min=0;
		choice=0;
		//add sunday infos
		user.Sunday(snb,snl,snd,snbl,snf,snt,sns);
		
		
		//print
		cout<<user;
		cout<<"Total taken calori for a week:"<<user.taken()<<endl;
		cout<<"Total given calori for a week:"<<user.given()<<endl;
	} else {
		cout<<"ERROR: INVALID"<<endl<<endl;
		goto mode;
	}
	
	system("pause");
	return 0;
}
