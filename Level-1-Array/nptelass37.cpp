#include<iostream>
using namespace std;

class Integer{
    private:
      int i;
    public:
      Integer(const int& _i):i(_i){}
      void change_i(const int& _i) const {
          i = _i;
      }
      int get_i() const {
          return i;
      }
};
int main(){
    Integer s(10);
    s.change_i(5);
    cout<<s.get_i();
    return 0;
}