#include <iostream>
#include <string>

using namespace std;

/*
сложение сумм, вычитание сумм, деление сумм,
деление суммы на дробное число, умножение на дробное число и операции сравнения.
*/


class Money{
private:
	double rub001;
	double rub005;
	double rub01;
	double rub05;
	double rub1;
	double rub2;
	double rub5;
	double rub10;
	double rub50;
	double rub100;
	double rub500;
	double rub1000;
	double rub5000;
	double first;
	double second;
	double numb;
	double summs_summs, subtraction_sums, division_sums, dividing_sum_number, multiplication_sum__number;

	void init(){	
		cout<<"rub001"<<endl;
		cin>>rub001;
		cout<<"rub005"<<endl;
		cin>>rub005;
		cout<<"rub01"<<endl;
		cin>>rub01;
		cout<<"rub05"<<endl;
		cin>>rub05;
		cout<<"rub1"<<endl;
		cin>>rub1;
		cout<<"rub2"<<endl;
		cin>>rub2;
		cout<<"rub5"<<endl;
		cin>>rub5;
		cout<<"rub10"<<endl;
		cin>>rub10;
		cout<<"rub50"<<endl;
		cin>>rub50;
		cout<<"rub100"<<endl;
		cin>>rub100;
		cout<<"rub500"<<endl;
		cin>>rub500;
		cout<<"rub1000"<<endl;
		cin>>rub1000;
		cout<<"rub5000"<<endl;
		cin>>rub5000;
	}
	void first_summ(){
		init();
		first=rub001*0.01+rub005*0.05+rub01*0.1+rub05*0.5+rub1*1+rub2*2+rub5*5+rub10*10+rub50*50+rub100*100+rub500*500+rub1000*1000+rub5000*5000;
	}

	void second_summ(){
		init();
		second=rub001*0.01+rub005*0.05+rub01*0.1+rub05*0.5+rub1*1+rub2*2+rub5*5+rub10*10+rub50*50+rub100*100+rub500*500+rub1000*1000+rub5000*5000;
	}
	void number(){
		cout<<"number"<<endl;
		cin>>numb;	
	}
	

//	две суммы 
	void  summ_of_summs(){
		summs_summs=first+second;
		cout<<summs_summs;
	}
	void subtraction_of_sums(){
		subtraction_sums=first+second;
		cout<<subtraction_sums;
	}
	void division_of_sums(){
		division_sums=first/second;
		cout<<division_sums;
	}
	void comparison(){
		if(first>second){
			cout<<"first"<<endl;
		}
		else if(first==second){
			cout<<"равны"<<endl;
		}
		else{
			cout<<"second"<<endl;
		}
	}

//	сумма и число
	void dividing_a_sum_by_a_number(){
		dividing_sum_number=first/numb;
		cout<<dividing_sum_number;
	}
	void multiplication_a_sum_dy_a_number(){
		multiplication_sum__number=first*numb;
		cout<<multiplication_sum__number;
	}

public:
	Money(int x){
		if(x = 1){
			summ_and_double();
		}
		else if(x == 2){
			two_summs();
		}
		else{
			cout<<"EROR"<<endl;
		}
	}

	void summ_and_double()
		{
		int what_do;
		cout<<"Что хотите сделать? "<<endl;
		cout<<"1 = деление суммы на число"<<endl;
		cout<<"2 = умножение суммы на дробное число"<<endl;
		cin>>what_do; 
		cout<<"Введите первое число:"<<endl;
		first_summ();
		cout<<"Введите второе число:"<<endl;
		number();
		if(what_do==1){
			dividing_a_sum_by_a_number();
		}
		else if(what_do==2){
			multiplication_a_sum_dy_a_number();
		}
		else{
		    cout<<"EROR"<<endl;
		}

	}

	void two_summs(){
		cout<<"Введите первое число:"<<endl;
		first_summ();
		cout<<"Введите второе число:"<<endl;
		second_summ();
		int what_do;
		cout<<"Что хотите сделать?"<<endl;
		cout<<"1 = сложение сумм"<<endl;
		cout<<"2 = вычитание сумм"<<endl;
		cout<<"3 = деление сумм"<<endl;
		cout<<"4 = сравнение сумм"<<endl;
		cin>>what_do;
		if(what_do==1){
			summ_of_summs();
		}
		else if(what_do==2){
			subtraction_of_sums();
		}
		else if(what_do==3){
			division_of_sums();
		}
		else if(what_do==4){
			comparison();
		}
		else{
			cout<<"EROR"<<endl;
		}
	}
};

int main(){
	setlocale(LC_ALL, "ru");
	int what_do = 0;
	cout<<"Выберите что вы хотите сделать?"<<endl;
	cout<<"1 = сумма и число"<<endl;
	cout<<"2 = cумма и сумма"<<endl;
	cin>>what_do;
	Money a(what_do);
}