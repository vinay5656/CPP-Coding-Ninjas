#include<iostream>
#include<algorithm>
using namespace std;

int odd_times(int a[],int size){
    sort(a,a+size);
    for(int i=0;i<size;i++){
    	cout<<a[i]<<" ";
	}
    int count=0,j=0;
    for(int i=0;i<=size;){
        
    	if(a[j]==a[i]){
            if(j<size){
                cout<<a[i]<<" = "<<a[i]<<" ";
                count++;
        
                cout<<"count= "<<count<<" ";
    
                i++;
                cout<<"j= "<<j<<" "<<"i= "<<i<<endl;

            }
            // cout<<a[i]<<" = "<<a[i]<<" ";
            // count++;
        
            // cout<<"count= "<<count<<" ";
    
            // i++;
            // cout<<"j= "<<j<<" "<<"i= "<<i<<endl;
            
        }else{
            if(count%2!=0){
                cout<<a[j]<<endl;
            }
            j=j+count;
            count=0;
        }
	}
    return 0;

}

int main(){
    int a[] = {7, 3, 9, 9, 9, 2, 3, 5, 3, 2, 1};
    int size = sizeof(a)/sizeof(a[0]);
    cout<<size<<endl;
    odd_times(a,size);
    return 0;
}