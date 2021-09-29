#include<iostream>
#include<cstring>
using namespace std;
void replacePi(char input[]) {
	int size = strlen(input);
    cout<<"size = "<<size<<endl;
    if(size ==1){
        cout<<"size==1"<<endl;
        return;
    }else if(size == 0){
        cout<<"size==0"<<endl;
        return;
    }
    replacePi(input+1);
    size = strlen(input);
    cout<<"after = "<<size<<endl;
    if(input[0]=='p'){
        if(input[1]=='i'){
           
            for(int i=size-1;i>=0;i--){
                input[i+2] = input[i];
            } 
           input[0]='3';
           input[1]='.';
           input[2]='1';
           input[3]='4';
        }
       
    }
    cout<<"r = "<<input<<endl;
    return;

}
int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
