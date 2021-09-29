#include<iostream>
#include<cstring>
using namespace std;
void removeX(char input[]) {
    int size  = strlen(input);
    if(size==0){
        return;
    }
    removeX(input+1);
    if(input[0]=='x'){
        for(int i=0;i<size;i++){
            input[i]=input[i+1];
        }
    }
    return;

}

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
