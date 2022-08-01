#include <iostream>
#include <cstring> 
#include <string>
#include <cmath>
using namespace std;


void print(unsigned char c, int i){
    cout<<c<<endl;
}
    

struct Array{
protected:
    int const count_input = 100;
    unsigned char summ[100];
    unsigned char d_class[100];
    unsigned char o_class[100];
public:
    Array(Array*p=0):parant(p){
        for(int i=0; i<count_input;i++){
            d_class[i]=0;
            o_class[i]=0;
        }
        cout<<"A "<<&p<<endl;
    }
    Array *parant;
    void set_d_class(unsigned char s,int i){
        d_class[i]=s;
    }
    void set_o_class(unsigned char s, int i){
        o_class[i]=s;
    }

    unsigned char DecimalFromeOctal[100];
    virtual void DecimalToOctal(){
        int count_upper_octal;
        for(int i=0; i<count_input; i++){
            unsigned char decimalNumber = d_class[i], octlaNamber;
            if(decimalNumber!=0){
                if(decimalNumber/8==0){
                    octlaNamber = decimalNumber%8; 
                }
                else{
                    if(count_upper_octal=1){
                        octlaNamber=decimalNumber%8+1;
                        count_upper_octal = decimalNumber/8;
                    }
                    else{   
                        octlaNamber=decimalNumber%8+1;
                        count_upper_octal = decimalNumber/8;
                        count_upper_octal--;
                    }
                }
            }
            else{
                octlaNamber=decimalNumber;
            }
            octlaNamber=octlaNamber+0;
            DecimalFromeOctal[i] = octlaNamber;
        }
        for(int i=0; i<count_input; i++){
            cout<<DecimalFromeOctal[i];
        }
    }
    virtual void test(){
        for(int i=0; i<count_input; i++){
            cout<<d_class[i];
        }
    }
    /*unsigned char OctelFormeDecimal[100];
    void OctalToDecimal(){
        for(int i=0; i<count_input; i++){
            
        }
    }*/
    virtual void summ_of_element_arr(){
        for(int i; i<count_input; i++){
            summ[i]=o_class[i]+d_class[i];
        }
    }
    virtual void out(){
        for(int i=0; i<count_input; i++){
            cout<<summ[i]<<":"<<i<<endl;
        }
    }
    virtual ~Array(){
        cout<<"~A"<<endl;
    }
};

struct Decimal:public Array
{
private:
    unsigned char sing;
    int decimal_count_input;
public:
    Decimal(Array*p):Array(p){
        cout<<"D "<<&p<<endl;
    }
    void set_decimal(string q){
                      // развернуть
        decimal_count_input= q.length();
        if(q[0]=='-'){
            sing='-';
            decimal_count_input--;
            for(int i=decimal_count_input; i>0; i--){
                d_class[i-1]=q[decimal_count_input-i+1];
            }
        }
        else{
            for (int i = decimal_count_input; i>0; i--) {
                d_class[i-1] = q[decimal_count_input-i];
            }
        }
    }
    void get_d_class(){
        for(int i=0; i<count_input; i++){
            set_d_class(d_class[i], i);
        }
    }
    ~Decimal(){
        cout<<"~D"<<endl;
    }
};

struct Octal:public Array
{
private:    
    int octal_count_input;
public:
    Octal(Array*p):Array(p){
        cout<<"O "<<&p<<endl;
    }
    void set_octal(string q){ // TODO развернуть
        octal_count_input= q.length();
        for(int i=octal_count_input; i>0; i--){
            o_class[i-1]=q[octal_count_input-i];
        }
    }
    void get_o_class(){
        for(int i=0; i<count_input; i++){
            set_o_class(o_class[i], i);
        }
    }
    ~Octal(){
        cout<<"~O"<<endl;
    }
};


int main(){
    //сценарий при сложении десятичной с восьмерично через десятичную
    Array * arr=new Array;
    Decimal*x=new Decimal(arr);
    Octal*y=new Octal(arr);
    x->parant;
    y->parant;
    x->set_decimal("12345");
    y->set_octal("12345");
    x->get_d_class();
    y->get_o_class();
    arr->test();
}