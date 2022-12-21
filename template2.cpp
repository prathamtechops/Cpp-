#include <iostream>
using namespace std;

template <typename t, typename s>
void fun(t a, s b)
{
   cout<<a<<endl;
   cout<<b<<endl;
}

int main()
{
   
  fun(3.5, 6);
  fun(3, 6.8);
  return 0;
}
