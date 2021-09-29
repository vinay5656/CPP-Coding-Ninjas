#include<iostream>
using namespace std;
int main(){
    string str,str2;
    getline(cin,str);
    getline(cin,str2);
    cout<<str<<endl;
    cout<<str2<<endl;
    string str1 = str+str2;
    cout<<str1<<endl;
    str +=str2;
    cout<<str<<endl;
    return 0;
}