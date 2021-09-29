#include<iostream>
#include<algorithm>
using namespace std;
int missing_num(int a[],int size){
    sort(a,a+size);
    for(int i=1;i<=size;i++){
        if(a[i-1]!=i){
            cout<<a[i-1]<<" "<<i<<endl;
            cout<<i<<endl;
            break;}
        // }else{
        //     break;
        // }
    }
    return 0;
}
int main(){
    int a[]= {9, 4, 6, 5, 8, 2, 3, 1};
    int size= sizeof(a)/sizeof(a[0]);
    missing_num(a,size);
}