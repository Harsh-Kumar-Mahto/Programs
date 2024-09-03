// Implement insertion,deletion and searching in a trie
// Trie is a data structure that can be used to store data like in a dictionary which takes lesser space as in hashmaps every word will need as different space
// However in this, if the initials of different words are same they are stored as nodes of the same tree thereby optimizing the space as well as speed 
#include <iostream>
using namespace std;

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    TrieNode(char val) {
        data = val;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

// Time complexity for each of these is O(l) where l is the length of the word
class Trie {
public:
    TrieNode* root;
    Trie() {
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root,string word)
    {
        if(word.length()==0)
        {
            root->isTerminal=true;
            return;
        }
        // Assuming words are in capitals
        int index=word[0]-'A';  //finding index at which a particular char of string is to be filled or may be already filled
        TrieNode* child;    //child node is the immediate successor of root
        if(root->children[index]!=NULL)   //Checking if the root has children with that char already or not
        {
            child=root->children[index];  //if children is already present,we need not to add it just make that children as the child
        }
        else
        {
            child= new TrieNode(word[0]);   //if not present,make the child as a new TrieNode with char as the start of the word
            root->children[index]=child;   //update the child as the children of the root
        }
        insertUtil(child,word.substr(1));   //recursively call for the next char using new child as the root and substring of word by removing first char
    }


    void insertWord(string word) {
        insertUtil(root, word);
    }

    //This function is implemented using recursion in video 
    bool search(string word) {
        TrieNode* temp = root;
        int n = word.length();
        for (int i = 0; i < n; i++) {
            int idx = word[i] - 'A';
            if (temp->children[idx] == NULL) {
                return false;
            }
            temp = temp->children[idx];
        }
        return temp->isTerminal;
    }

    //For deletion we just need to find the word and set its isTerminal to false so next time if we search it,it can't be found
    void deletion(string word)
    {
        TrieNode* temp = root;
        int n = word.length();
        for (int i = 0; i < n; i++) {
            int idx = word[i] - 'A';
            if (temp->children[idx] == NULL) {
                cout<<"Word not present"<<endl;
            }
            temp = temp->children[idx];
        }
        if(temp->isTerminal==true)
        {
            temp->isTerminal=false;
            cout<<"Word Deleted"<<endl;
        }
        else
        {
            cout<<"Word not present"<<endl;
        }
    }
};

int main() {
    Trie* t = new Trie();
    t->insertWord("ABCD");
    t->insertWord("ARM");
    t->insertWord("DO");
    t->insertWord("BABBAR");
    if (t->search("DO")) {
        cout << "Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    t->deletion("DO");
    t->deletion("DO");
    if (t->search("DO")) {
        cout << "Found"<<endl;
    }
    else
    {
        cout<<"Not Found"<<endl;
    }
    return 0;
}
