#include<iostream>
using namespace std;
int main(){
    // string *str = new string;
    // *str  = "vinay singh chouhan";
    // cout<<str+4<<endl;
    // cout<<*str<<endl;
    string name;
    int id;
    cin>>id;
    // cin>>name;//it wiil take input and when it ancountered space it input upto that space

    getline(cin,name);//we overcome behaviour of the cin with space//it has specific behaviour with newline character '/n'
    /*cin>>id;
     getline(cin,name);
     cout<<"id = "<<id<<endl;
     cout<<name<<endl;*/
    cout<<"id = "<<id<<endl;
    getline(cin,name);
    cout<<"name = "<<name<<endl;
    return 0;
}