#include <iostream>
using namespace std;

class Triad {
protected:
	int x, y, z; 
public:
	void add_x() {				//метод увеличения часов.
		if (x==24) {
			x=0;
		}
		else{
			x++;
		}
	}
	void add_y() {				//метод увеличения минут.
		if(y==59) {
			add_x();
			y=0;
		}
		else{
			y++;
		}
	}
	void add_z() {				//метод увеличения секунд.
		if(z==59) {
			add_y();
			z=0;
		}
		else {
			z++;
		}
	}
	void set_hours(int& x){
		this->x=x;
	}
	void set_minuts(int& y){
		this->y=y;
	}
	void set_second(int& z){
		this->z=z;	
	}
	int get_hours(){
		return x;
	}
	int get_minuts(){
		return y;
 	}
 	int get_second(){
 		return z;
 	}
};
