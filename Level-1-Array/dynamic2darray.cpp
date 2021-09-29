#include<iostream>
using namespace std;
int main(){
    int m,n;
    int size =0;
    cin>>m>>n;
    int ** p = new int*[m];
    for(int i=0;i<m;i++){
        p[i]= new int[n];
    }
    for(int j = 0; j < m; j++){
        for(int i = 0;i<n;i++){
            size = size+sizeof(p[j][i]);
            p[j][i] = i*9+1+j*2;
            cout<<p[j][i]<<" "<<&p[i][j]<<" ";
    }
    size = size+sizeof(p[j]);
    cout<<endl;
    }
    size = size+sizeof(p);
    cout<<size;
    for(int i = 0; i < n; i++)
        delete [] p[i];
        delete[] p; 
    cout<<sizeof(p);
    // for(int j = 0; j < m; j++){
    //     for(int i = 0;i<n;i++){
    //         p[j][i] = i*9+1+j*2+1;
    //         cout<<p[j][i]<<" "<<p[i]<<" ";
    // }
    // cout<<endl;
    // }  


    return 0;


    
}