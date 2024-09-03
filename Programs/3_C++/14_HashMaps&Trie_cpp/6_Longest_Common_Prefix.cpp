#include <iostream>
using namespace std;

class TrieNode
{
public:
    char data;
    int childCount;
    TrieNode *children[26];
    bool isTerminal;
    TrieNode(char val)
    {
        data = val;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
        childCount=0;
    }
};

class Trie
{
public:
    TrieNode *root;
    Trie()
    {
        root = new TrieNode('\0');
    }

    void insert(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isTerminal = true;
            return;
        }
        int idx = word[0] - 'a';
        TrieNode *child;
        if (root->children[idx] != NULL)
        {
            child = root->children[idx];
        }
        else
        {
            root->childCount++;
            child = new TrieNode(word[0]);
            root->children[idx] = child;
        }
        insert(child, word.substr(1));
    }

    void in(string word)
    {
        insert(root, word);
    }
};

// Time and space complexity O[m*n];
string longestCommonPrefix(string arr[], int n)
{
    Trie *t = new Trie();
    for(int i=0;i<n;i++)
    {
        t->in(arr[i]);
    }
    string ans="";
    for(int i=0;i<arr[0].length();i++)
    {
        char ch=arr[0][i];
        if(t->root->childCount==1)
        {
            ans.push_back(ch);
            int idx=ch-'a';
            t->root=t->root->children[idx];
        }
        else
        {
            break;
        }
        if(t->root->isTerminal)
        {
            break;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter number of words: ";
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter word: ";
        cin >> arr[i];
    };
    cout <<"Longest common prefix is: "<< longestCommonPrefix(arr, n);
    return 0;
}