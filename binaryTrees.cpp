#include <bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *left;
    node *right;
    node (int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node* root){
    cout<<"enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if (data==-1){
        return NULL; 
    }
    cout<<"Enter data for inserting in left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right of " <<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void levelOrderTraversal(node* root){
queue<node*> q;
q.push(root);
q.push(NULL);

while(!q.empty()){
    //copying element of the queue before popping
    node *temp=q.front();
    
    q.pop();

    if(temp==NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
    }
    else{
        cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
    }
        if(temp->right){
            q.push(temp->right);
    }
    }
   
}
}
//LNR Left Node Right || Node means root node
void inorder(node *root){
    //base case
    if(root==NULL){return;}

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
//NLR Node Left Right
void preorder(node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
//LRN Left Right Node
void postorder(node *root){
    if(root==NULL){
        return;
    }
    
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    // 1 3 7 -1 -1 11 -1 -1 5  17 -1 -1 -1
    node *root=NULL;
    root=buildTree(root);
    cout<<"printing the levele order traversal output "<<endl;
    levelOrderTraversal(root);

    cout<<"inorder traversal is: "<<endl;
    inorder(root);
    cout<<endl;
    cout<<"preorder traversal is :"<<endl;
    preorder(root);
    cout<<endl;
    cout<<"postorder traversal is :"<<endl;
    postorder(root);
    return 0;
}
