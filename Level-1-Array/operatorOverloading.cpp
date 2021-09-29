#include<iostream>
using namespace std;

class Fraction{
    private:
    int numerator;
    int denominator;
    void simplify(){
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
    Fraction(int numerator,int denominator):numerator(numerator),denominator(denominator){
        //    cout<<endl;
    }
    Fraction operator+(Fraction const &f) const{
        int lms =   denominator*f.denominator;
        int x = lms/denominator;
        int y = lms/f.denominator;
        int num = numerator*x+y*f.numerator;
        Fraction fnew(num,lms);
        fnew.simplify();
        return fnew;
    }
    void print(){
        cout<<numerator<<" "<<denominator<<endl;
    }
};
int main(){
    Fraction f1(10,2);
    Fraction f2(14,4);
    f1.print();
    f2.print();
    // f1.add(f2);
    // f1.print();
    // f2.add(f1);
    // f2.print();
    Fraction f = f1 + f2;
    f.print();
    return 0;
}
