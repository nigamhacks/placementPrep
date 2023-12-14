// Concept Practice Question
// key notes-> head is the first node of the linked...
// list which stores only the address next node which contains values. 
#include<iostream>
using namespace std;

class node{
    public :
    node *next;
    int data;

    node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void insertAtHead(node *&head, int val){
    node *n=new node(val);
    n->next=head; //n->next=NULL;
    head=n;
}

void append(node *&head, int val){
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node *n= new node(val);
    node *temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    temp->next=n;
}


void display(node *head)
{

    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout<<"NULL";
    cout << endl;
}

int main()
{

    node *head=NULL;
    int arr[]={1,2,3,4,5,6};
    for (int i=0;i<6;i++){
        append(head,arr[i]);
    }
    display(head);
    return 0;
}