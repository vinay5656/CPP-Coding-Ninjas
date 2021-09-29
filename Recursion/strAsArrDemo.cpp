#include<iostream>
using namespace std;
int main(){
    string  str;
    getline(cin,str);
    cout<<str<<endl;
    cout<<&str<<endl;
    cout<<str[0]<<endl;
    cout<<str[1]<<endl;
    cout<<str[2]<<endl;
    cout<<str[3]<<endl;
    cout<<str[4]<<endl;
    str[0] = 'R';
    cout<<str<<endl;
    return 0;
}