#include<iostream>
using namespace std;
int main(){
    int a = 46;
    char ch;
    ch = a;
    cout<<ch<<endl;
    int * p =&a;
    char *c = (char *)p;
    cout<<p<<endl;
    cout<<c<<endl;
    cout<<*p<<endl;
    cout<<*c<<endl;
    
    return 0;
}