#include <iostream>
using namespace std;

class TrieNode
{
public:
    char data;
    TrieNode *children[26];
    bool isTerminal;
    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('/0');
    }
    void insertFun(TrieNode *root, string word)
    {
        if (word.length() == 0)
            root->isTerminal = true;
        int index = word[0] - 'A';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        insertFun(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertFun(root, word);
    }

    bool searchFun(TrieNode *root, string word)
    {
        if (word.length() == 0)
            return root->isTerminal;
        int index = word[0] - 'A';
        TrieNode *child;
        if (root->children[index] != NULL)
            child = root->children[index];
        else
            return false;
        searchFun(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchFun(root, word);
    }
};

int main(int argc, char const *argv[])
{

    return 0;
}