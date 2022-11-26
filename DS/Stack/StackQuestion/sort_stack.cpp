#include <iostream>
#include <stack>
using namespace std;

void sortInsert(stack<int> &stack, int num)
{
    if (!stack.empty() || !stack.empty() && stack.top() < num)
        stack.push(num);

    int n = stack.top();
    stack.pop();

    sortInsert(stack, num);
    stack.push(num);
}

void sortStack(stack<int> &stack)
{
    if (stack.empty())
        return;
    int num = stack.top();
    stack.pop();

    sortStack(stack);
    sortInsert(stack, num);
}

int main(int argc, char const *argv[])
{

    stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);

    return 0;
}
