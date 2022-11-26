#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &inputStack, int cnt, int N)
{
    if (cnt == N / 2)
    {
        inputStack.pop();
        return;
    }

    int top_element = inputStack.top();
    inputStack.pop();
    solve(inputStack, cnt + 1, N);
    inputStack.push(top_element);
}

void deleteMiddle(stack<int> &inputStack, int N)
{
    int cnt = 0;

    solve(inputStack, cnt, N);
}
int main(int argc, char const *argv[])
{

    stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);

    deleteMiddle(stack, 4);

    return 0;
}
