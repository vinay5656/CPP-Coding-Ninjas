#include<iostream>
using namespace std;
int LengthOfString(char str[]){
    if(str[0]=='\0'){
        return 0;
    }
    int len = LengthOfString(str+1);
    return ++len;

}
int main(){
    char str[100];
    cin>>str;
    cout<<LengthOfString(str);
}