#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int subArray(int a[],int size){
    vector<int> arr;
    
    for(int i=0;i<size;i++){
        int sum=0;
        for(int j=i;j<size;j++){
            cout<<"sum"<<i<<j<<" ="<<sum<<endl;
            sum=sum+a[j];
            arr.push_back(sum);
        }
    }
   
    int lenght = arr.size();
    sort(arr.begin(), arr.end());
    for(int i=0;i<lenght;i++){
        cout<<arr[i]<<" ";
    }
    int index = lenght-1;
    cout<<endl<<arr[index];
    return 0;
}
int main(){
    int a[] = {-2, -3, 4, -1, -2, 5, -3};
    int size = sizeof(a)/sizeof(a[0]);
    subArray(a,size);
    return 0;
}