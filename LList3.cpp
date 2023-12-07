#include <iostream>
using namespace std;
class Node
{
public:
    int Value;
    Node *Next;
};
// n is head element
void printList(Node *n)
{
    while (n != NULL)
    {
        cout << n->Value << endl;
        n = n->Next;
    }
}

void insertAtTheFront(Node **head, int newValue)
{
    // 1. Prepare a newNode
    Node *newNode = new Node();
    newNode->Value = newValue;
    // 2. Put it in front of current head
    newNode->Next = *head; //pointing to existed head
    // 3. move head pointer of the list point to the newNode
    *head = newNode; 
}

void insertAtTheEnd(Node **head, int newValue){
    //1. Prepare a newNode
     Node *newNode = new Node();
     newNode->Value= newValue;
     newNode->Next=NULL;
    //2. If Linked list is empty , newNode will be a head node 
     if(*head ==NULL){
        *head= newNode;
        return;
    }
    //3. find the last node
    Node *last = *head; 
    while(last->Next!=NULL){
        last=last->Next;  //last-> Next pointing to the node pointing to NULL 

    }
    //4. Insert newNode after last node (at the end)
   last->Next=newNode;



}

// Illustration of insertAfter
//                |  newNode |
//             #                 #    
//            #                   # 
//           #                     #
// | node A |                       | node B |

void insertAfter(Node *previous , int newValue){
    //1. check if previous node is NULL
    if(previous==NULL){
        cout<<"Previous can not be NULL ";
        return ;
    }
    //2. prepare a newNode
    Node *newNode = new Node();
    newNode->Value=newValue;
    //3. Insert newNode after previous node 
    newNode->Next=previous->Next;
    previous->Next=newNode;



}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    head->Value = 1;
    head->Next = second;
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = NULL;

    insertAtTheFront(&head, 0);

    insertAtTheEnd(&head, 4);
    insertAtTheEnd(&head, 5);

    insertAfter(head,-1);

    printList(head);
    
    return 0;
}