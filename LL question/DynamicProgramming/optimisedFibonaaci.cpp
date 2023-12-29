#include<iostream>
using namespace std;
int main()
{

    int n;
    cin>>n;
// 0 1 1 2 3 5 6
//let say we assume 
//0 as prev2
//1 as prev1 
//2 as current 
    int prev1=1;
    int prev2=0;
    if(n==0){
        return 0;
    }
    for(int i =2; i<=n; i++){
        int curr=prev1+prev2;
//shift 

    prev2=prev1;
    prev1=curr;

    }
    cout<<prev1<<endl;
    return 0;
}