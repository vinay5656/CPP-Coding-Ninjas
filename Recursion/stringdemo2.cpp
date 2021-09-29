#include<iostream>
using namespace std;
int main(){
    string str = "vinay";
    cout<<str<<endl;
    cout<<str[2]<<endl;
    cout<<str.substr(1)<<endl;
    string str1 = str.substr(1);
    cout<<str1<<endl;
    cout<<str1.substr(1)<<endl;
    return 0;
}
