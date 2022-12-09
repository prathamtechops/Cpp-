// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Stack{
    public:
    int top;
    int *arr;
    int size;
    
    public:
    Stack(int size)
    {
        this->size =  size;
        top = -1;
        arr= new int[size];
    }
    
    void push(int data)
    {
        if(top>=size-1)
        {
            cout<<"Stack Overflow"<< endl;
            return;
        }
        else
        {
            cout<<"Inserted Element is: " <<data <<endl;
            arr[++top] = data;
        }
    }
    
    void pop()
    {
        if(top < 0)
        {
            cout<<"Stack Underflow"<< endl;
            return;
        }
        else
        {
            cout<<"Deleted Element is: "<< arr[top] << endl;
            top--;
        }
    }
    
    void peek()
    {
        cout << arr[top]<<endl;
    }
    
};

int main() {
    
    
    int stackSize;
    Stack s(stackSize);
    cout<<"Enter size of the Stack: ";
    cin>> stackSize;
    
    cout<<"1. To Push element in the Stack" << endl;
    cout<<"2. To Pop element in the Stack" << endl;
    cout<<"3. To see the top element in the Stack" << endl;
    cout<<"4. To exit the Stack" << endl;
     int ch;
    do{
        cin >> ch;
        switch(ch){
            case 1:{
                int data;
                cout<<"Enter the data to push: ";
                cin >> data;
                s.push(data);
                break;
            }
            case 2:{
                s.pop();
               break;
            }
            case 3:{
                s.peek();
                break;
            }
            case 4:{
                cout<<"You have exited the program!!";
                break;
            }
        }
    }while(ch!=4);

    return 0;
}
