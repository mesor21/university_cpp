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
	double first_summ;
	double second_summ;
	double numb;
	double resoult;
public:
	void read(){
		cout<<"rub001"<<endl;cin>>rub001;
		cout<<"rub005"<<endl;cin>>rub005;
		cout<<"rub01"<<endl;cin>>rub01;
		cout<<"rub05"<<endl;cin>>rub05;
		cout<<"rub1"<<endl;cin>>rub1;
		cout<<"rub2"<<endl;cin>>rub2;
		cout<<"rub5"<<endl;cin>>rub5;
		cout<<"rub10"<<endl;cin>>rub10;
		cout<<"rub50"<<endl;cin>>rub50;
		cout<<"rub100"<<endl;cin>>rub100;
		cout<<"rub500"<<endl;cin>>rub500;
		cout<<"rub1000"<<endl;cin>>rub1000;
		cout<<"rub5000"<<endl;cin>>rub5000;
	}
	void read_numb(){
		cin>>numb;
	}
	void discplay_all(){
		cout<<rub001<<endl;
		cout<<rub005<<endl;
		cout<<rub01<<endl;
		cout<<rub05<<endl;
		cout<<rub1<<endl;
		cout<<rub5<<endl;
		cout<<rub10<<endl;
		cout<<rub50<<endl;
		cout<<rub100<<endl;
		cout<<rub500<<endl;
		cout<<rub1000<<endl;
		cout<<rub5000<<endl;
	}
	void summ_a(){
		first_summ=rub001*0.01+rub005*0.05+rub01*0.1+rub05*0.5+rub1*1+rub2*2+rub5*5+rub10*10+rub50*50+rub100*100+rub500*500+rub1000*1000+rub5000*5000;
	}
	void summ_b(){
		second_summ=rub001*0.01+rub005*0.05+rub01*0.1+rub05*0.5+rub1*1+rub2*2+rub5*5+rub10*10+rub50*50+rub100*100+rub500*500+rub1000*1000+rub5000*5000;
	}
//two sums
	void summ_summs(){
		resoult = first_summ+second_summ;
	}
	void subtraction_of_sums(){
		resoult=first_summ-second_summ;
	}
	void division_of_sums(){
		resoult=first_summ/second_summ;
	}
	void comparison(){
		if(first_summ>second_summ){
			cout<<"first"<<endl;
		}
		else if(first_summ==second_summ){
			cout<<"равны"<<endl;
		}
		else{
			cout<<"second"<<endl;
		}
	}

//summ and number
	void dividing_a_sum_by_a_number(){
		resoult=first_summ/numb;
	}
	void multiplication_a_sum_dy_a_number(){
		resoult=first_summ*numb;
	}
//
	void discplay(){
		cout<<resoult<<endl;
		double one = resoult/1;
		int two = (resoult-one)*100;
		double three = two%100;
		cout<<one<<":"<<two<<":"<<three<<endl;
	}
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
			a.read();
			a.summ_a();
			cout<<"Введите второе число: "<<endl;
			a.read();
			a.summ_b();
			a.summ_summs();
			a.discplay();
			break;
		case 2: //subtraction
			cout<<"Введите первое число: "<<endl;
			a.read();
			a.summ_a();
			cout<<"Введите второе число: "<<endl;
			a.read();
			a.summ_b();
			a.subtraction_of_sums();
			a.discplay();
			break;
		case 3:
			cout<<"Введите первое число: "<<endl;
			a.read();
			a.summ_a();
			cout<<"Введите второе число: "<<endl;
			a.read();
			a.summ_b();
			a.division_of_sums();
			a.discplay();
			break;
		case 4:
			cout<<"Введите первое число: "<<endl;
			a.read();
			a.summ_a();
			cout<<"Введите второе число: "<<endl;
			a.read();
			a.summ_b();
			a.comparison();
			break;
		//
		case 5:
			cout<<"Введите первое число: "<<endl;
			a.read();
			a.summ_a();
			cout<<"Введите второе число: "<<endl;
			a.read_numb();
			a.dividing_a_sum_by_a_number();
			a.discplay();
			break;
		case 6:
			cout<<"Введите первое число: "<<endl;
			a.read();
			a.summ_a();
			cout<<"Введите второе число: "<<endl;
			a.read_numb();
			a.multiplication_a_sum_dy_a_number();
			a.discplay();
			break;
	}
}
