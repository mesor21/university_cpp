#include <iostream>
#include <cmath>
#include <string>
using namespace std;


class Triangle {
protected:
	double a, b, c, A, B, C, P;
public:
	Triangle(double a, double b, double c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	Triangle(const Triangle& second) {
		this->a = second.a;
		this->b = second.b;
		this->c = second.c;
	}
	Triangle() {
		this->a = 0;
		this->b = 0;
		this->c = 0;
	}
	void input(Triangle ABC) {
		cout << "~ Введите длину сторон ~" << endl;
		cout << " Введите длину AB: "; cin >> ABC.c;
		cout << " Введите длину AC: "; cin >> ABC.b;
		cout << " Введите длину BC: "; cin >> ABC.a;
		Triangle(ABC.a, ABC.b, ABC.c);
	}
	void check(Triangle ABC) {
		if ( ((ABC.a + ABC.b) >= ABC.c) and ((ABC.a + ABC.c) >= ABC.b) and ((ABC.b + ABC.c) >= ABC.a) ) {
			cout << "Треугольник существует"<<endl;
		}
		else {
			cout << "Треугольник не существует."<<endl;
			
		}
	}
	void side(Triangle ABC,int y) {
		
	}
	void perimeter(Triangle ABC) {
		double P = ABC.a + ABC.b + ABC.c;
		cout << "Периметр треугольника равен: " << P << endl;
		
	}
	void angle(Triangle ABC) {
		ABC.A = acos((pow(ABC.b, 2) + pow(ABC.c, 2) - pow(ABC.a, 2)) / (2 * ABC.b * ABC.c));
		ABC.B = acos((pow(ABC.a, 2) + pow(ABC.c, 2) - pow(ABC.b, 2)) / (2 * ABC.a * ABC.c));
		ABC.C = acos((pow(ABC.a, 2) + pow(ABC.b, 2) - pow(ABC.c, 2)) / (2 * ABC.a * ABC.b));

	}
	void display(Triangle ABC) {
		cout << " " << endl;
		cout << " Угол при вершине А равен: " << ABC.A << endl;
		cout << " Угол при вершине B равен: " << ABC.B << endl;
		cout << " Угол при вершине C равен: " << ABC.C << endl;
	}
	void set_a(int x){
		a=x;
	}
	void set_b(int x){
		b=x;
	}
	void set_c(int x){
		c=x;
	}
	double get_a(){
		return a;
	}
	double get_b(){
		return b;
	}
	double get_c(){
		return c;
	}
	double get_perimeter(){
		return P;
	}
}; 
class Equilateral: public Triangle{
private:
	double square;
public:
	Equilateral(){
		Triangle ABC;
		ABC.input(ABC);
		ABC.check(ABC);
		ABC.perimeter(ABC);
	}
	void set_square(Triangle ABC){
		double p=ABC.get_perimeter();
		double a=ABC.get_a();
		double b=ABC.get_b();
		double c=ABC.get_c();
		square=sqrt(p*(p-a)*(p-b)*(p-c));
	}
	double get_square(){
		return square;
	}
};
	
int main() {
	Equilateral X;
	double S=X.get_square();
	cout << "Площадь треугольника равна: " << S << endl; 
	system("PAUSE");
	return 0;
}