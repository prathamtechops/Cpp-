#include <iostream>
#include <queue>
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

node *buildBST(node *&root, int data)
{
    if (!root)
    {
        root = new node(data);
        return root;
    }
    if (data < root->data)
        root->left = buildBST(root->left, data);
    else
        root->right = buildBST(root->right, data);
    return root;
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
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

void levelOrderTraveral(node *root)
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

bool searchInBST(node *root, int key)
{
    while (root)
    {
        if (root->data == key)
            return true;
        if (root->data > key)
            root = root->left;
        else
            root = root->right;
    }
    return false;
}

node *deleteFromBST(node *&root, int val)
{
    // null root
    if (root == NULL)
        return NULL;
    if (root->data == val)
    {
        if (root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }
        if (root->left == NULL && root->right != NULL)
        {
            node *temp = root->right;
            delete root;
            return temp;
        }
        if (root->left != NULL && root->right == NULL)
        {
            node *temp = root->left;
            delete root;
            return temp;
        }
        if (root->right != NULL && root->left != NULL)
        {
            int min = minVal(root->right)->data;
            root->data = min;
            root->right = deleteFromBST(root->right, min);
            return root;
        }
    }
    else if (root->data > val)
    {
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else
    {
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}
node *minVal(node *root)
{
    while (root->left)
    {
        root = root->left;
    }
    return root;
}

node *maxVal(node *root)
{
    while (root->right)
    {
        root = root->right;
    }
    return root;
}

void takeInput(node *&root)
{
    int data;
    cin >> data;
    while (data != -1)
    {
        root = buildBST(root, data);
        cin >> data;
    }
}

int main(int argc, char const *argv[])
{

    node *root = NULL;
    cout << "Enter the element to create BST: " << endl;
    takeInput(root);
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    levelOrderTraveral(root);
    return 0;
}