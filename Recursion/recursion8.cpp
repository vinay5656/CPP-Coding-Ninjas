#include<iostream>
using namespace std;

int firstIndex(int input[], int size, int x){
    // int index = 0;
    // if(size==0){
    //     return -1;
    // }
    // if(size == 1){
    //     if(input[0] != x){
    //         return -1;
    //     }
    // }
    // if(input[0]==x){
    //     return 0;
    // }
    
    // index = firstIndex(input+1, size-1, x);
    // // if(input[0]==x){
    // //     return 0;
    // // }
    // if(index != -1){
    //     index++;
    // }
    // return index;
    int index = 0;
    //if size is zero, array will not contain any element
    if(size==0){
        return -1;
    }
    //when size =1 and checking that element is present or not
    else if(size == 1){
        if(input[0] != x){
            return -1;
        }
    }
    else if(input[0]==x){
        return 0;
    }
    
    index = firstIndex(input+1, size-1, x);
    // if(input[0]==x){
    //     return 0;
    // }

    if(index != -1){
        index++;
        //it will only increamented when element is present in the array
    }
    return index;

}
int main(){
    int input[] = {5,5,7,8,9,9,3,4};
    cout<<firstIndex(input,8,2);
}