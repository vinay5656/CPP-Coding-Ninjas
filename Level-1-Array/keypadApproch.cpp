#include<iostream>
using namespace std;

int keypadApproch(string output[],int num){
    if(num==0 ||num==1){
        output[0] = "";
        return 1;
    }
    

    int numOf = keypadApproch(output,num/10);
    int subsquencesize = numOf;
    num = num%10;
    string str;
    if(num==2){
        str = "ABC";
    }else if(num==3){
        str = "DEF";
    }else if(num==4){
        str = "GHI";
    }else if(num==5){
        str = "JKL";
    }else if(num==6){
        str = "MNO";
    }else if(num==7){
        str = "PQRS";
    }else if(num==8){
        str = "TUV";
    }else if(num==9){
        str = "WXYZ";
    }
    int sizeOfStr = str.length();
    for(int i=1;i<sizeOfStr;i++){
        for(int j=0;j<numOf;j++){
            output[subsquencesize+j] = output[j];
        }
        subsquencesize = subsquencesize+numOf;
    }
    int i=0;
    for(;i<sizeOfStr;){
        for(int j=1;j<=subsquencesize;j++){
            output[j-1] = output[j-1]+str[i];
            if(j % numOf ==0){
                i++;
            }
        }
    }
    return subsquencesize;

}
int main(){
    int number;
    string output[1000];
    cin>>number;

    int size = keypadApproch(output,number);
    cout<<"size = "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<output[i]<<" "<<endl;
    }
    return 0;
}