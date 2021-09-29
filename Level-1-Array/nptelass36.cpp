#include<iostream>
using namespace std;

class Data{
    private:
      double d;
    public:
      Data():d(0.0){cout<<"Double::Double()";}
      Data(double _d):d(_d){cout<<"Double::Double(double)";}
      Data(const Data& _od):d(_od.d){
          cout<<"Double::Double(Double&)";
      }
      ~Data(){
          cout<<d<<" ";
      }
};
int main(){
    Data d1(43.33);
    Data d2;
    Data d3 = 53.33;
    Data d4 = d3;
    return 0;
}