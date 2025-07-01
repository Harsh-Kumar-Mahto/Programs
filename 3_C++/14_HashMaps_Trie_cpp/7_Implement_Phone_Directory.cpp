// Incomplete

#include <iostream>
#include<vector>
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

    vector<vector<string>>getSuggestions(string str)
    {
       TrieNode* prev=root;
        vector<vector<string>>output;
        string prefix="";
        for(int i=0;i<str.length();i++)
        {
            char ch=str[i];
            prefix.push_back(ch);
        }
    }
};

vector<vector<string>> phoneDirectory(vector<string> &contactList,string &queryStr)
{
    Trie *t=new Trie();
    for(int i=0;i<contactList.size();i++)
    {
        t->in(contactList[i]);
    }
    return t->getSuggestions(queryStr);
}

int main()
{
     
}