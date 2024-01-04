#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name="sachin";
    stack <char> stk;
    for(char c : name){
        stk.push(c);
    }

    for(char c : name){
        cout<<stk.top()<<" ";
        stk.pop();
    }
    
    return 0;
}