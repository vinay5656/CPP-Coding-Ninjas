#include<iostream>
using namespace std;

bool isSOrted(int a[], int size){
    if(size == 1||size == 0){
        return true;
    }
    if(a[0]>a[1]){
        return false;
    }
    bool what = isSOrted(a+1,size-1);
    
    return what;
}
int main(){
    int a[] = {4,9,5,19};
    cout<<isSOrted(a,4);
    return 0;
}