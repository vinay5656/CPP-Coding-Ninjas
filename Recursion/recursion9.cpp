#include<iostream>
using namespace std;

int lastIndex(int input[], int size, int x){
    int index;
    if(size ==0){
        return -1;
    }else if(size == 1){
        if(input[0] != x){
            return -1;
        }
    }
    index  = lastIndex(input+1, size-1, x);
    if(index<0){
        if(input[0]==x){
            return 0;
        }
    }
    if(index != -1){
        index++;
        //it will only increamented when element is present in the array
    }
    
    return index;
}
int main(){
    int input[] = {5,5,9,3,4,9,3,4};
    cout<<lastIndex(input,8,2);
}