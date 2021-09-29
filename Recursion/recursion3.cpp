#include<iostream>
using namespace std;

int count(int n){
   
    if(n >= 0 && n <= 9){
        return 1;
    }
    n= n/10;
    int smallAns = count(n);
    cout<<"smallAns = "<<smallAns<<endl;
    cout<<"n = "<<n<<endl;
    return smallAns + 1;
}
int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}