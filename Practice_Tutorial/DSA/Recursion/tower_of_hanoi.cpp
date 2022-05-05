#include <iostream>
using namespace std;
void tower_of_hanoi(int n, char src, char dst, char helper){
    if(n==0) return;
    tower_of_hanoi(n-1, src, helper, dst);
    cout << "Move to "<< src << " to "<< dst << endl;
    tower_of_hanoi(n-1,helper,dst, src);
}
int main(int argc, char const *argv[])
{
    tower_of_hanoi(3, 'A', 'B', 'C');
    
    return 0;
}
