#include <iostream>
using namespace std;
class b {
   public :
    b() {
      cout << " constrctor  " ;
   }
   
};
class Base {
   public :
   static b B;
};
b B;
int main() {
    Base b;
   return 0;
}