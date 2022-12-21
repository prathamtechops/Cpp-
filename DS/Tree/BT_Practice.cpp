#include <iostream>
#include <queue>
#include <vector>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;
    node(int data)
    {
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};

node *buildTree(node *root)
{
    int data;
    cout << "Enter the data for root: " << endl;
    cin >> data;
    root = new node(data);
    if (data == -1)
        return NULL;
    cout << "Enter the data for left of the tree for node data " << data << ": " << endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for right of the tree for node data " << data << ": " << endl;
    root->right = buildTree(root->right);
    return root;
}

void leverOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }

        else
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}

void zigZag(node *root)
{
    queue<node *> q;
    q.push(root);

    bool leftRight = true;
    while (!q.empty())
    {
        int size = q.size();
        vector<int> temp(size);
        for (int i = 0; i < size; i++)
        {
            node *front = q.front();
            q.pop();

            int index = leftRight ? i : size - 1 - i;
            temp[index] = front->data;
            cout << " " << temp[index];
            if (front->left)
                q.push(front->left);
            if (front->right)
                q.push(front->right);
        }
        leftRight = !leftRight;
    }
}

void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    inorder(root->left);
    inorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    inorder(root->right);
    cout << root->data << " ";
}

void buildFromLevelOrder(node *&root)
{
    queue<node *> q;
    int data;
    cout << "Enter the data for root: " << endl;
    cin >> data;
    root = new node(data);
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "Enter the data for left node: " << temp->data << endl;
        int leftData;
        cin >> leftData;
        if (leftData != -1)
        {
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout << "Enter the data for right node: " << temp->data << endl;
        int rightData;
        cin >> rightData;
        if (rightData != -1)
        {
            temp->right = new node(rightData);
            q.push(temp->right);
        }
    }
}

int main(int argc, char const *argv[])
{
    node *root = NULL;
    buildFromLevelOrder(root);

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    leverOrderTraversal(root);
    zigZag(root);

    return 0;
}