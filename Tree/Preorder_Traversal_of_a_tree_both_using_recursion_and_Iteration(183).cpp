//Recursive way
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left ,*right;
};
//create a new node
Node* newnode(int data)
{
    Node* temp = new Node;
    temp -> data = data;
    temp -> left = temp -> right =NULL;
    return temp;
}
//Inorder
void preorder(struct Node* node)
{
    if(node == NULL)
    {
        return ;
    }
    cout<<node -> data<< ' ';
    preorder(node -> left);
    preorder(node -> right);
}
int main()
{
    struct Node* root = newnode(1);
    root -> left = newnode(2);
    root -> right = newnode(3);
    root -> left -> left = newnode(4);
    root -> left -> right = newnode(5);
    preorder(root);
}




//Iterative