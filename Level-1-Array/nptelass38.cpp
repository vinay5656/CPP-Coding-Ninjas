#include<iostream>
using namespace std;

class Data{
    private:
       int i;
    public:
        Data(int i=0){ this->i = i;}
        Data(Data& t){this->i = t.i;}
        void print(){
            cout<<"data = "<<i<<endl;
        }
};
int main(){
    Data s1(10);
    Data s2(s1);
    s1.print();
    s2.print();
    return 0;
}