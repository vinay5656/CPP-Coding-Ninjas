#include<iostream>
#include<string>
using namespace std;
// int p = 0;
void keypadString(int num,string output,string options[10]){
    if(num==0){
        cout<<output<<endl;
        //output = output.substr(1);
        return;
    }
    int lastdigit = num%10;
    // string str;
    // if(lastdigit==2){
    //     str = "abc";
    // }else if(lastdigit==3){
    //     str = "def";
    // }else if(lastdigit==4){
    //     str = "ghi";
    // }else if(lastdigit==5){
    //     str = "jkl";
    // }else if(lastdigit==6){
    //     str = "mno";
    // }else if(lastdigit==7){
    //     str = "pqrs";
    // }else if(lastdigit==8){
    //     str = "tuv";
    // }else if(lastdigit==9){
    //     str = "wxyz";
    // } 
    
    // int sizeOfStr = str.length();
    
    for(int i=1;i<=sizeOfStr;i++){
        // if(p==0){
        //     output = "";
        // }
        
        // output = str[i-1] + output;
        // p++;
        keypadString(num/10,output);
        // p--;
    }
    return;
}

void printKeypad(int num){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    string output = "";
    keypadString(num,output);
    
    return;
 }


int main(){
    int number;
    cin>>number;
    // totalDigit = numOfDigit(number);
    printKeypad(number);
    return 0;

}