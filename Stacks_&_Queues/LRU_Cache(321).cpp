#include <bits/stdc++.h>
using namespace std;

class LRUCache
{
    private:

    public:
    class Node{
    public:
    int key;
    int val;
    Node* next;
    Node* prev;
    Node(int _key,int _val)
    {
        key = _key;
        val = _val;
    }
};
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    
    int capacity;
    unordered_map<int,Node*> m;
    
    //Constructor for initializing the cache capacity with the given value.
    LRUCache(int cap)
    {
        capacity = cap;
        head -> next = tail;
        tail -> prev = head;
    }
    
    void addnode(Node* newnode)
    {
        Node* temp = head -> next;
        newnode -> next = temp;
        newnode -> prev = head;
        head -> next = newnode;
        temp -> prev =newnode;
    }
     void deletenode(Node* delnode)
     {
         Node* delprev = delnode -> prev;
         Node* delnext = delnode -> next;
         delprev -> next = delnext;
         delnext -> prev = delprev;
     }
    
    //Function to return value corresponding to the key.
    int get(int key)
    {
        if(m.find(key) != m.end())
        {
            Node* resnode = m[key];
            int res = resnode -> val;
            m.erase(key);
            deletenode(resnode);
            addnode(resnode);
            m[key] = head -> next;
            return res;
        }
        return -1;
    }
    
    //Function for storing key-value pair.
    void set(int key, int value)
    {
          if(m.find(key) != m.end())
          {
              Node* exsistingnode = m[key];
              m.erase(key);
              deletenode(exsistingnode);
          }
          if(m.size() == capacity)
          {
              m.erase(tail -> prev -> key);
              deletenode(tail -> prev);
          }
          Node* newnode = new Node(key,value);
          addnode(newnode);
           m[key] = head -> next;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int capacity;
        cin >> capacity;
        LRUCache *cache = new LRUCache(capacity);
        
        int queries;
        cin >> queries;
        while (queries--)
        {
            string q;
            cin >> q;
            if (q == "SET")
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                cache->set(key, value);
            }
            else
            {
                int key;
                cin >> key;
                cout << cache->get(key) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}