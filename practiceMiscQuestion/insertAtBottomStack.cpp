#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack <int> &stk , int element )
{
    if(stk.empty()){
    stk.push(element);
    return ;
    }
    int num = stk.top();
    stk.pop();

    //recursive call
    insertAtBottom(stk,element);
    stk.push(num);

}


void printStack(stack<int> s){
    if(s.empty())
    return;

    int temp = s.top();
    s.pop();

    printStack(s);
    cout<<temp<<endl;

    s.push(temp);
}

int main()
{

    stack<int> stk;
  
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.push(6);
    stk.push(7);
    printStack(stk);
    
    insertAtBottom(stk, 0);
    cout<<"@@@@@@@@@@@@@@@"<<endl;

    printStack(stk);
    
    return 0;
}