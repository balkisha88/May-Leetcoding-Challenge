class Node {
 public:   
        vector<int> child;
        bool flag;
        Node()
        {
            for(int i=0;i<26;i++)
                child.push_back(NULL);
            flag=false;
        }
      
    };
    

class Trie {

    /** Initialize your data structure here. */
   
    
    Node root;
    public Trie() {
        root=new Node();
        
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Node temp=root;
        for(int i=0;i<word.length();i++)
        {
            int index=word.charAt(i)-'a';
            if(temp.child[index]==NULL)
            {
                temp.child[index]=new Node();
            }
            temp=temp.child[index];
        }
        temp.flag=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        alpha temp=root;
        for(int i=0;i<word.length();i++)
        {
            int index=word.charAt(i)-'a';
            while(temp.child[index]!=NULL)
            {
                temp=temp.child[index];
            }
            
        }
       return temp.flag;
        
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
