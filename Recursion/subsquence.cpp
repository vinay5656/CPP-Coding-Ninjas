#include<iostream>
using namespace std;
int subsquence(string str, string output[]){
    if(str == ""){
        output[0] = "";
        return 1;
    }
    int numOf = subsquence(str.substr(1),output);
    int size = numOf;
    for(int i=1;i<=numOf;i++){
        output[i+numOf-1]=str[0]+output[i-1];
        size = size+1; 
    }
    return size;
}
int main(){
    string str;
    string output[100];
    getline(cin,str);
    int size = subsquence(str,output);
    cout<<"size = "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<output[i]<<" "<<i<<endl;
    }
    return 0;
}
