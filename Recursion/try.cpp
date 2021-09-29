#include<iostream>
using namespace std;
int main(){
    int ** p = new int*[1];
    p[0] = new int[0];
    cout<<endl;
    cout<<*p[0]<<endl;
    return 0;
}