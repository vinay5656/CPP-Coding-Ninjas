#include<iostream>
#include<cstring>
#include<cmath>
#include <typeinfo>
using namespace std;
int num = 0;
int stringToNumber(char input[]) {
    int size = strlen(input);
    if(size == 0){
        return num;
    }
    
    cout<<"num = "<<num<<endl;
    num= num*10;
    num = ((int)input[0]-48)+num;
    
    num  = stringToNumber(input+1);
    return num;
}
int main() {
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
