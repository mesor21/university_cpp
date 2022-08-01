#include <iostream>
#include <string>

using namespace std;

/*
сложение сумм, вычитание сумм, деление сумм,
деление суммы на дробное число, умножение на дробное число и операции сравнения.
*/


struct Money{
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
	double first_summ;
	double second_summ;
	double numb;
	double resoult;
};
void read(Money &a){
		cout<<"rub001"<<endl;cin>>a.rub001;
		cout<<"rub005"<<endl;cin>>a.rub005;
		cout<<"rub01"<<endl;cin>>a.rub01;
		cout<<"rub05"<<endl;cin>>a.rub05;
		cout<<"rub1"<<endl;cin>>a.rub1;
		cout<<"rub2"<<endl;cin>>a.rub2;
		cout<<"rub5"<<endl;cin>>a.rub5;
		cout<<"rub10"<<endl;cin>>a.rub10;
		cout<<"rub50"<<endl;cin>>a.rub50;
		cout<<"rub100"<<endl;cin>>a.rub100;
		cout<<"rub500"<<endl;cin>>a.rub500;
		cout<<"rub1000"<<endl;cin>>a.rub1000;
		cout<<"rub5000"<<endl;cin>>a.rub5000;
	};
	void read_numb(Money &a){
		cin>>a.numb;
	};
	void discplay_all(Money &a){
		cout<<a.rub001<<endl;
		cout<<a.rub005<<endl;
		cout<<a.rub01<<endl;
		cout<<a.rub05<<endl;
		cout<<a.rub1<<endl;
		cout<<a.rub5<<endl;
		cout<<a.rub10<<endl;
		cout<<a.rub50<<endl;
		cout<<a.rub100<<endl;
		cout<<a.rub500<<endl;
		cout<<a.rub1000<<endl;
		cout<<a.rub5000<<endl;
	};
	void summ_a(Money &a){
		a.first_summ=a.rub001*0.01+a.rub005*0.05+a.rub01*0.1+a.rub05*0.5+a.rub1*1+a.rub2*2+a.rub5*5+a.rub10*10+a.rub50*50+a.rub100*100+a.rub500*500+a.rub1000*1000+a.rub5000*5000;
	};
	void summ_b(Money &a){
		a.second_summ=a.rub001*0.01+a.rub005*0.05+a.rub01*0.1+a.rub05*0.5+a.rub1*1+a.rub2*2+a.rub5*5+a.rub10*10+a.rub50*50+a.rub100*100+a.rub500*500+a.rub1000*1000+a.rub5000*5000;
	};
//two sums
	void summ_summs(Money &a){
		a.resoult = a.first_summ+a.second_summ;
	};
	void subtraction_of_sums(Money &a){
		a.resoult=a.first_summ-a.second_summ;
	};
	void division_of_sums(Money &a){
		a.resoult=a.first_summ/a.second_summ;
	};
	void comparison(Money &a){
		if(a.first_summ>a.second_summ){
			cout<<"first"<<endl;
		}
		else if(a.first_summ==a.second_summ){
			cout<<"равны"<<endl;
		}
		else{
			cout<<"second"<<endl;
		}
	};

//summ and number
	void dividing_a_sum_by_a_number(Money &a){
		a.resoult=a.first_summ/a.numb;
	};
	void multiplication_a_sum_dy_a_number(Money &a){
		a.resoult=a.first_summ*a.numb;
	};
//
	void discplay(Money &a){
		cout<<a.resoult<<endl;
		double one = a.resoult/1;
		int two = (a.resoult-one)*100;
		double three = two%100;
		cout<<one<<":"<<two<<":"<<three<<endl;
	};

int main(){
	setlocale(LC_ALL, "ru");
	double output, x, y;
	Money a;
	int what_do;
	cout<<"Что вы хотите сделать?"<<endl;
	cin>>what_do;
	switch(what_do){
		case 1:	//summ
			cout<<"Введите первое число: "<<endl;
			read(a);
			summ_a(a);
			cout<<"Введите второе число: "<<endl;
			read(a);
			summ_b(a);
			summ_summs(a);
			discplay(a);
			break;
		case 2: //subtraction
			cout<<"Введите первое число: "<<endl;
			read(a);
			summ_a(a);
			cout<<"Введите второе число: "<<endl;
			read(a);
			summ_b(a);
			subtraction_of_sums(a);
			discplay(a);
			break;
		case 3:
			cout<<"Введите первое число: "<<endl;
			read(a);
			summ_a(a);
			cout<<"Введите второе число: "<<endl;
			read(a);
			summ_b(a);
			division_of_sums(a);
			discplay(a);
			break;
		case 4:
			cout<<"Введите первое число: "<<endl;
			read(a);
			summ_a(a);
			cout<<"Введите второе число: "<<endl;
			read(a);
			summ_b(a);
			comparison(a);
			break;
		//
		case 5:
			cout<<"Введите первое число: "<<endl;
			read(a);
			summ_a(a);
			cout<<"Введите второе число: "<<endl;
			read_numb(a);
			dividing_a_sum_by_a_number(a);
			discplay(a);
			break;
		case 6:
			cout<<"Введите первое число: "<<endl;
			read(a);
			summ_a(a);
			cout<<"Введите второе число: "<<endl;
			read_numb(a);
			multiplication_a_sum_dy_a_number(a);
			discplay(a);
			break;
	}
}