#include<iostream>
using namespace std;
int main(){
    // int *p = new int;
    // cin>>*p;
    // cout<<"your value is:"<<*p<<endl;
    // cout<<p;
    int size;
    cin>>size;
    int *p = new int[size];
    for(int i=0;i<size;i++){
        p[i] = i*5+1;
        cout<<*(p+i)<<" ";
    }
    delete [] p;

    return 0;
}