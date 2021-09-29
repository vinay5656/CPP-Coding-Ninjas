#include<iostream>
using namespace std;

bool checkNumber(int input[], int size, int x){
    if(size==0){
        return false;
    }
    if(size==1){
        if(input[0]==x){
        return true;
        }else{
            return false;
        }
    }
    
    bool what = checkNumber(input+1, size-1, x);
    if(what==false){
        if(input[0]==x){
            return true;
        }else{
            return false;
        }
    }
    return what;
}
int main(){
    int a[] = {5,4,3,8,1,9};
    cout<<checkNumber(a,6,7);
    
}