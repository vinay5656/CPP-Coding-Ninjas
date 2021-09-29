#include<iostream>
using namespace std;

int data = 0;
class Data{
    public:
      Data(){
          data++;
      }
      ~Data(){
          data++;
      }
};
int increament(){
    data++;
    {Data d;}
    cout<<" "<<data<<" "<<endl;
    return data++;
}
int main(){
    cout<<increament()<<endl;
    cout<<data<<endl;
    return 0;
}