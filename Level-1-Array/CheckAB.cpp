#include<iostream>
#include<cstring>
using namespace std;
bool checkab(char input[],bool what) {
     int size = strlen(input);
     if(input == ""){
         return false;
     }
     if(size == 0){
         return false;
     }else if(size == 1){
         if(input[0] == 'a' && input[1]=='\0'){
             return true;
         }
         return false;
     }
    // bool what = true;// = checkAB(input+1);
     cout<<endl;
     cout<<what<<endl;
     if(what != false){
        if(input[0]=='a'){
            if(input[1]=='a'||input[1]=='\0'){
                return true;
            }else if(input[1] == 'b'&&input[2]=='b'){
                
                   if(input[3] == 'a' || input[3] == '\0'){
                       return true;
                   }else{
                       return false;
                   }
                
            }
        }else if(input[0]=='b' && input[1] == 'b'){
                if(input[2] == 'a'|| input[2]== '\0'){
                   return true;
                }else if(input[3]=='b'){
                    return false;
                }
                else{
                   return false;
               }  
            
        }else{
            return false;
        }
     }
     what = checkab(input+1,what);
     cout<<endl;
     cout<<what<<endl;
     return what;
    //bool what = checkAB(input+1);
	
}


int main() {
    char input[100];
    bool ans;
    cin >> input;
    ans=checkab(input,true);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}