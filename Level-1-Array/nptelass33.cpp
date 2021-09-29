#include<iostream>
using namespace std;

int i=10;
class Data{
    int i;
    int elem1[5];
    int *elem2;
    public:
       Data():i(20),elem2(new int[20]){
           cout<<sizeof(elem2)<<endl;
       }
       int show(){
           int i=30;
           cout<<i<<" "<<endl;
           return this->i;
       }
};
int main(){
    Data d;
    cout<<d.show()<<" "<<sizeof(d);
    return 0;
}