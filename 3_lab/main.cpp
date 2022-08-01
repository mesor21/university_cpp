#include <iostream>
#include <string>
using namespace std; 

struct Triad{
public: // https://www.youtube.com/watch?v=jfBkqXE5qjQ
	int day, mounth, year;
	void chitnoe(){
		day++;
		if(day==31){
			mounth=mounth+1;
			day=1;
		}
		if(mounth==13){
			mounth=1;
			year++;
		}
	}
	void nechitnoe(){
		day++;
		if(day==32){
			mounth=mounth+1;
			day=1;
		}
		if(mounth==13){
			mounth=1;
			year++;
		}
	}
	void february_vis(){
		day++;
		if(day==30){
			mounth++;
			day=1;
		}
	}
	void february_ne_vis(){
		day++;
		if(day==29){
			mounth++;
			day=1;
		}	
	}
	void tru(){
		switch(mounth){
				case(1):nechitnoe();
				break;
				case(2):february_ne_vis();
				break;
				case(3):nechitnoe();
				break;
				case(4):chitnoe();
				break;
				case(5):nechitnoe();
				break;
				case(6):chitnoe();
				break;
				case(7):nechitnoe();
				break;
				case(8):nechitnoe();
				break;
				case(9):chitnoe();
				break;
				case(10):nechitnoe();
				break;
				case(11):chitnoe();
				break;
				case(12):nechitnoe();
				break;
			}
	}
	void up(){
		if(year%400==0){
			if(year%100!=100){
				if(year%4==0){
					switch(mounth){
						case(1):nechitnoe();
						break;
						case(2):february_vis();
						break;
						case(3):nechitnoe();
						break;
						case(4):chitnoe();
						break;
						case(5):nechitnoe();
						break;
						case(6):chitnoe();
						break;
						case(7):nechitnoe();
						break;
						case(8):nechitnoe();
						break;
						case(9):chitnoe();
						break;
						case(10):nechitnoe();
						break;
						case(11):chitnoe();
						break;
						case(12):nechitnoe();
						break;
					}
				}
				else{tru();}
			}
			else{tru();}
		}
		else{tru();}
	}	
};
struct Date: public Triad{
public: 
	int upper;
	Triad qaz;
	Date(int d, int m, int y, int x){
		qaz.day = d;
		qaz.mounth = m;
		qaz.year = y;
		upper = x;
	}
	void up_too(){
		for(int i=0; i<upper; i++){
			qaz.up();
		}
	}
	void print(){
		cout<<"Date:"<<qaz.year<<"."<<qaz.mounth<<"."<<qaz.day<<endl;
	}
};

int main (){
	int da, mo, ye, xui;
	cout<<"Установите дату:"<<endl;
	cout<<"Введите год: ";
	cin>>ye;
	cout<<"Введите месяц: ";
	cin>>mo;
	if(mo>12){
		cout<<"Incorrect value"<<endl;
		return 0;
	}
	cout<<"Введите день: ";
	cin>>da;
	switch(mo){
		case(1):
		if(da>31){
			cout<<"Incorrect value"<<endl;
			break;
			return 0;
		}
		break;
		case(2):
		if(da>29){
			cout<<"Incorrect value"<<endl;
			break;
			return 0;
		}
		break;
		case(3):
		if(da>31){
			cout<<"Incorrect value"<<endl;
			break;
			return 0;
		}
		break;
		case(4):
		if(da>30){
			cout<<"Incorrect value"<<endl;
			break;
			return 0;
		}
		break;
		case(5):
		if(da>31){
			cout<<"Incorrect value"<<endl;
			break;
			return 0;
		}
		break;
		case(6):
		if(da>30){
			cout<<"Incorrect value"<<endl;
			break;
			return 0;
		}
		break;
		case(7):
		if(da>31){
			cout<<"Incorrect value"<<endl;
			break;
			return 0;
		}
		break;
		case(8):
		if(da>31){
			cout<<"Incorrect value"<<endl;
			break;
			return 0;
		}
		break;
		case(9):
		if(da>30){
			cout<<"Incorrect value"<<endl;
			break;
			return 0;
		}
		break;
		case(10):
		if(da>31){
			cout<<"Incorrect value"<<endl;
			break;
			return 0;
		}
		break;
		case(11):
		if(da>30){
			cout<<"Incorrect value"<<endl;
			break;
			return 0;
		}
		break;
		case(12):
		if(da>31){
			cout<<"Incorrect value"<<endl;
			break;
			return 0;
		}
		break;
		case(13):
		cout<<"Incorrect value"<<endl;
		break;
	}
	cout<<"\nНа сколько вы хотите увеличить: ";
	cin>>xui;

	Date qwer(da, mo, ye, xui); 
	qwer.up_too();
	qwer.print();
}