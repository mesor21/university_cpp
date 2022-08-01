#include <iostream>
#include <cmath>
using namespace std;

char DecimalFromeOctal[10]; 
void SetIntToChar(int i, int x){
        switch(x){
            case 0:DecimalFromeOctal[i]='0';
            case 1:DecimalFromeOctal[i]='1';
            case 2:DecimalFromeOctal[i]='2';
            case 3:DecimalFromeOctal[i]='3';
            case 4:DecimalFromeOctal[i]='4';
            case 5:DecimalFromeOctal[i]='5';
            case 6:DecimalFromeOctal[i]='6';
            case 7:DecimalFromeOctal[i]='7';
            case 8:DecimalFromeOctal[i]='8';
            case 9:DecimalFromeOctal[i]='9';
        }
};
int getCharInt(int i){
    return DecimalFromeOctal[i]-48;
}

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int count_input=10;
    char o_class[10]={3,2,1,2,0,0,0,0,0,0};   
    char DecimalFromeOctal[10];    
    for(int i=0; i<count_input;i++){
        DecimalFromeOctal[i]='0';
    }
    int summ=0;
    for(int i=count_input-1; i!=-1; i--){
        int x=(int)o_class[i];
        if(x!=0){
            summ=pow(8, i)*x+summ;
        }
    }
    for(int i=count_input-1; i!=-1; i--){
        int t = summ/pow(10, i);
        if(t!=0){
            DecimalFromeOctal[i]=t+'0';
            summ=summ-t*pow(10,i);
            cout<<i<<":"<<summ<<":"<<t<<":"<<DecimalFromeOctal[i]<<endl;
        }
    }
    for(int i=0; i<count_input; i++){
        cout<<DecimalFromeOctal[i];
    }
}