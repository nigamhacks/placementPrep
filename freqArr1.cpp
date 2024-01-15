#include<bits/stdc++.h>
using namespace std;
int main()
{
    //n=9
    //test case 
    //1 2 2 3 1 4 4 5 6 
  
    int n;
    cin>>n;
    //input vector
    vector <int> in;

    for(int i=0;i<n; i++)
    {
       int element ;
       cin>>element;
       in.push_back(element);
    }
    int maxi=0;
    for(int i=0; i< n ; i++){
        maxi= max(maxi, in[i]);
    }
    //frequency vector
    vector<int> f(maxi+1,0);
    for(int i=0; i<n; i++){
        f[in[i]]++;
    }
    for(int i=0;i<maxi+1; i++)
    {
        if(f[i]!=0)
        cout<<i <<"->" <<f[i]<<endl;
    }

    return 0;
}