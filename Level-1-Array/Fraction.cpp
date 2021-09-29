#include<iostream>
using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;
    void simpilify(){
        int gcd =1;
        int j = min(numerator,denominator);
        for(int i=1;i<=j;i++){
            if((numerator%i==0)&&(denominator%i==0)){
                gcd = i;
            }
        }
        numerator = numerator/gcd;
        denominator = denominator/gcd;

    }
public:
    Fraction(int Numerator,int Denominator):numerator(Numerator),denominator(Denominator){
        cout<<endl;
    }
    void print(){
        cout<<numerator<<" / "<<denominator<<endl;
    }
    // void simpilify(){
    //     int gcd =1;
    //     int j = min(numerator,denominator);
    //     for(int i=1;i<=j;i++){
    //         if((numerator%i==0)&&(denominator%i==0)){
    //             gcd = i;
    //         }
    //     }
    //     numerator = numerator/gcd;
    //     denominator = denominator/gcd;

    // }
    void add(Fraction const &f){
        int lms = denominator*f.denominator;
        int x = lms/denominator;
        int y = lms/f.denominator;
        int num = numerator*x+f.numerator*y;
        this->numerator = num;
        this->denominator = lms;
        simpilify();
    }
    
};
int main(){
    Fraction f1(10,2);
    Fraction f2(14,4);
    f1.print();
    f2.print();
    f1.add(f2);
    f1.print();
    f2.add(f1);
    f2.print();
    
    return 0;
}


