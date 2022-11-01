// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Pair{
  int num1;
  int num2;
  public:
  Pair(int num1, int num2){
      this->num1 = num1;
      this->num2 = num2;
  }
  
  int sum(){
      return num1 + num2;
  }
  
  int max(){
      return num1>num2?num1:num2;
  }
};

int main() {
    
    Pair *p = new Pair(10,45);
    cout << p->max() << endl;
    cout << p->sum();
    return 0;
}
