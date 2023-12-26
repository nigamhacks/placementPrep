#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

Node(int d){
    this->data=d;
    this->next=NULL;
}
~Node(){
    int value=this->data;
    //freed memory 
    if(this->next!=NULL){
        delete next;
        this->next=NULL;
    }
    cout<<"memory is free for node with data "<< value <<endl;
}
};

void insertNode(Node* &tail, int element, int d ){


//empty list 
if(tail ==NULL){
    Node *newNode=new Node(d);
    tail=newNode;
    newNode->next =newNode;

}
else{
    //non empty list 
    //assuming that the element is present in the linked list 
    Node * curr=tail;
    while(curr->data!=element){
        curr=curr->next;

    }
    //element found ->curr is representing element node
    Node *temp=new Node(d);
    temp->next=curr->next;
    curr->next= temp;
}
}

void print(Node* &tail){
    Node *temp=tail;
    do {
        cout<<tail->data<<" ";
        tail=tail->next;
        
    }
    
    while(tail!=temp);
    cout<<endl;
}

void deletion(Node *&tail, int value){
    //empty list 
    if(tail==NULL){
        cout<<"list is empty :"<<endl;
        return;
    }
    else{
        //non empty 
        Node *prev=tail;
        Node *curr=tail->next;

        while(curr->data != value ){

            //moving forward gradually for finding desired element 
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        
        //one node linked list
        if(curr==prev){
            tail=NULL;
        }
        // node >=2 linked list 
        else if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

int main()
{
    Node *tail=NULL;
    //inserting in empty list 
    //for first execution of the insertNode function
    //only once element doesn't matter since it is an empty list
    insertNode(tail,2,1);
    print(tail);
    insertNode(tail,1,2);
    print(tail);
    insertNode(tail,2,3);
    print(tail);

    deletion(tail, 3);
    print(tail);
    return 0;
}