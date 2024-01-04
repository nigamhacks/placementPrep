#include<bits/stdc++.h>
using namespace std;
int main(){
     string s ="{}";
     stack<char>stk;
       for(char c: s){
            if(c=='(' || c=='{' || c=='['){
             stk.push(c);
             }
            else{

             if(stk.empty())cout<< "f";
             if(c==')'&& stk.top()!='(' )cout<< "f";
             if(c=='}'&& stk.top()!='{' )cout<< "f";
             if(c==']'&& stk.top()!='[' )cout<< "f";

            
         
            stk.pop();
            
            }
            
        }
       
    cout<< stk.empty();
  

return 0;
}