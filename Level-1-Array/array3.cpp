#include<iostream>
using namespace std;

int main(){
    int arr[10] = {5, 2, 9, 3, 8, 13, 16, 19, 12, 89};
    int x;
    cin>>x;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(arr[j]==x-arr[i]){
                cout<<i<<j<<endl;
            }

        }

    } 
    return 0;
}