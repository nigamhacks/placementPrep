#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

class stack{
     int top;
    public:
   
    int a[MAX];
    stack(){
         top=-1;
         }

    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();

};

bool stack ::  push(int x)
{
    if(top>=MAX-1){
    cout<<"stack overflow"<<endl;
    return false;
    }
    else{
        a[++top]=x;
        cout<<"element pushed successfully"<<endl;
        return true;
    }
}


int stack :: pop(int x){
    if(top ==-1){
        cout<<"stack is empty"<<endl;
        return 0;
    }
    else{
        int x=a[top--];
       return x;
    }
}

int stack :: peek(){
    if(top ==-1){
        cout<<"stack is empty "<<endl;
        return false;
    }
    else{
        int x = a[top];
        return x;
    }
}

   bool stack :: isEmpty(){
    if(a[top]==-1){
        cout<<"stack is empty"<<endl;
        return false;
    }
    else
    return true;
   }




int main()
{

    return 0;
}