#include<iostream>
#include<algorithm>
using namespace std;

int bineaySearch(int a[],int left,int right,int num){
    if(right<left){
        return -1;
    }
    int mid = (left+right)/2+1;
    if(a[mid]==num){
        cout<<mid+1<<endl;
        return num;
    }else if(a[mid]>num){
        right = mid-1;
        return bineaySearch(a,left,right,num);
    }else if(a[mid]<num){
        left = mid+1;
        return bineaySearch(a,left,right,num);
    }else{
        return -1;
    }


}
int main(){
    int a[] = {2, 5, 11, 7, 6, 9, 10};
    int size = sizeof(a)/sizeof(a[0]);
    sort(a,a+size);
    int l = 0;
    int r = size-1;
    int key = bineaySearch(a,l,r,9);
    cout<<key;
    return 0;
}