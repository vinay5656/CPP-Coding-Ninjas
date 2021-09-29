#include<iostream>
using namespace std;
int i = 0;
int allIndexes(int input[], int size, int x, int output[]){
    if(size==0){
        return 0;
    }
    
    int os = allIndexes(input,size-1,x,output);
    // for(int i=os;i<=os;i++){
    //     output[i] = output[i]+1;
    // }
    
    
    if(input[i]==x){
        // if(os>=1){
        //     for(int i = os-1;i>=0;i--){
        //         output[i+1] = output[i];
        // }
        // }
        output[os] = i;
        os++;
    }
    i++;

    cout<<" i = "<<i<<" "<<endl;
    cout<<"os = "<<os<<" "<<endl;
    return os;   

    // int n =size;
    // if(size==0){
    //     return 0;
    // }
    // int os = allIndexes(input+1,size-1,x,output);
    // n--;
    // for(int i=os;i<=os;i++){
    //     output[i] = output[i]+1;
    // }
    
    // // for(int i=0;i<os;i++){
    // //     output[i] = output[i]+1;
    // // }
    // if(input[0]==x){
    //     if(os>=1){
    //         for(int i = os-1;i>=0;i--){
    //             output[i+1] = output[i];
    //     }
    //     }
    //     output[0] = n;
    //     os++;
    //     }
    //     for(int i=0;i<os;i++){
    //         cout<<output[i]<<" ";
    //     }
    //     cout<<endl;
        
    //    return os;   
    }

int main(){
    int a[] = {5,6,5,6,7,8,5,3};
    int *p = new int[8];
    int sizeP = allIndexes(a,8,5,p);
    cout<<sizeP<<endl;
    for(int i=0;i<sizeP;i++){
        cout<<p[i]<<" ";
    }
}