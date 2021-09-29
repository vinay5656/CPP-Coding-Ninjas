#include<iostream>
using namespace std;
// static data member may exist and will exist even when no object is consturcted
// static data member are associate with the class not with the object
// need to define outside the class scope to avoid linker error
//---imp--- must be initialize in a source file
//---imp ---constructed before main start and destructed after main end
// can be private and public 
class  available_balance{
    private:
       static int balance;
    public:
       available_balance(){
           cout<<"Current amount = "<<balance<<endl;
       }
       void withdraw(int amount){
           string check;
           balance = balance - amount;
           cin>>check;cout<<"yes/no";
           if(check=="yes"){
               cout<<"Current amount = "<<balance<<endl;
           }
       }
       void credited(int amount){
           balance = balance+amount;
           cout<<"Current balance = "<<balance;
           
       }

};
int available_balance::balance = 2000;
int main(){
     available_balance vinay;
     vinay.withdraw(2000);
     vinay.credited(5000);
     available_balance papa;
     papa.credited(8000);
     return 0;
    
}