#include<iostream>
#include<cmath>
using namespace std;

double geometricSum(int k) {
    if(k==0){
        return 1;
    }else if(k>1000){
        return 2;
    }
    double result = geometricSum(k-1);
    cout<<k<<" "<<result<<" "<<endl;
    return result+(1/pow(2,k));

}
int main(){
    int k;
    cin>>k;
    cout<<geometricSum(k);
}