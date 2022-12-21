#include <iostream>
#include <queue>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *build_tree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if (data == -1)
        return NULL;
    cout << "Enter the data for inserting in left: " << data << endl;
    root->left = build_tree(root->left);
    cout << "Enter the data for inserting in right: " << data << endl;
    root->right = build_tree(root->right);
    return root;
}

void level_order_tree(node *root)
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
            {
                q.push(NULL);
            }
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

void level_order_build(node *&root)
{
    queue<node *> q;
    int data;
    cout << "Enter the data for inserting in root" << endl;
    cin >> data;
    root = new node(data);
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter data for left node: " << temp->data;
        int left_data;
        cin >> left_data;

        if (left_data != -1)
        {
            temp->left = new node(left_data);
            q.push(temp->left);
        }

        cout << "Enter data for righ node: " << temp->data;
        int right_data;
        cin >> left_data;

        if (right_data != -1)
        {
            temp->right = new node(right_data);
            q.push(temp->right);
        }
    }
}

int main(int argc, char const *argv[])
{

    node *root = NULL;

    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    level_order_build(root);
    level_order_tree(root);

    return 0;
}