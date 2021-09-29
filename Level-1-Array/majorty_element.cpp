#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int majortyelement(int a[],int size){
    sort(a,a+size);
    for(int i=0;i<size;i++){
    	cout<<a[i]<<" ";
	}
    vector<int> arr;
    
    for(int i=0;i<size;i=i+4){
    	int count =0;
        for(int j=0;j<size;j++){
            if(a[i]==a[j]){
                count++;
            }else{
                continue;
            }
        }
        
        if(count>=4){
            cout<<endl<<a[i]<<endl;
            arr.push_back(a[i]);
        }
    }
    return 0;
}
int main(){
    int a[] = {1, 5, 6, 7, 1, 1, 2, 2, 2, 1,2, 3, 3, 3, 3, 7, 7, 7, 8, 11, 11, 11, 11};
    int n = sizeof(a) / sizeof(a[0]);
    majortyelement(a,23);
    return 0;
}