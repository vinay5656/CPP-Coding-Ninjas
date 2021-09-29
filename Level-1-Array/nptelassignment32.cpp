#include<iostream>
//#include<string>
using namespace std;
int data =0;

class A{
    int roll;
    string name;
    int semester;
    public:
       A(int roll_,string name_,int semester_):roll(roll_),name(name_),semester(semester_){
           cout<<"hi i am "<<name<<endl;
       }
       void promote(){
        //    ++semester;
        this->semester++;
        // this->(++semester); error
       } 
       void show(){
           cout<<"name = "<<name<<" "<<"roll = "<<roll<<" "<<"semester = "<<semester<<endl;
       }
};
int main(){
    A s(10,"vinay",6);
    s.promote();
    s.show();
    return 0;
}