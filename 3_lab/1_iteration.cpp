#include <iostream>
#include <string>

using namespace std; 


class Date{
public: 
	int year;
	int month;
	int day;
	int x;

	Date(int start_year, int start_month, int start_day, int xy){ 
		year=start_year;
		month=start_month;
		day=start_day;
		x=xy;
		
	}
	void print(){
		a.up();
		cout<<"Date:"<<year<<"."<<month<<"."<<day<<endl;
	}

	friend class Triad;

};

class Triad{
	Date worked;
	void chitnoe(){
		worked.day++;
		if(worked.day==31){
			worked.month=worked.month+1;
			worked.day=1;
		}
		if(month==13){
			worked.month=1;
			worked.year++;
		}
	}
	void nechitnoe(){
		worked.day++;
		if(worked.day==32){
			worked.month=worked.month+1;
			worked.day=1;
		}
		if(worked.month==13){
			worked.month=1;
			worked.year++;
		}
	}
	void february_vis(){
		worked.day++;
		if(worked.day==30){
			worked.month++;
			worked.day=1;
		}
	}
	void february_ne_vis(){
		worked.day++;
		if(worked.day==29){
			worked.month++;
			worked.day=1;
		}	
	}
	void tru(){
		switch(worked.month){
				case(1):nechitnoe();
				case(2):february_ne_vis();
				case(3):nechitnoe();
				case(4):chitnoe();
				case(5):nechitnoe();
				case(6):chitnoe();
				case(7):nechitnoe();
				case(8):chitnoe();
				case(9):nechitnoe();
				case(10):chitnoe();
				case(11):nechitnoe();
				case(12):chitnoe();
			}
	}


	void up(){
		for(int i=0; i<x; i++){
			if(worked.year%400==0){
				if(worked.year%100!=100){
					if(worked.year%4==0){
						switch(worked.month){
							case(1):nechitnoe();
							case(2):february_vis();
							case(3):nechitnoe();
							case(4):chitnoe();
							case(5):nechitnoe();
							case(6):chitnoe();
							case(7):nechitnoe();
							case(8):chitnoe();
							case(9):nechitnoe();
							case(10):chitnoe();
							case(11):nechitnoe();
							case(12):chitnoe();
					
						}
					}
					else{tru();}
				}
				else{tru();}
			}
			else{tru();}
		}
		
	}

};

int main(){
	int d, m, y, xui;
	cout<<"Установите дату:"<<endl;
	cout<<"Введите год: ";
	cin>>y;
	cout<<"Введите месяц: ";
	cin>>m;
	cout<<"Введите день: ";
	cin>>d;
	cout<<"\nНа сколько вы хотите увеличить: ";
	cin>>xui;
	Date qwer(y, m, d, xui);
	up();
}