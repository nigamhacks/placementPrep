#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &arr, int n)
{
    string ans="";  
//  vector <string> v={"geeks , geeksss, geezar"};
//  int n =3;
 
    for(int i=0; i<arr[0].length(); i++){
        char ch= arr[0][i];
        bool match=true;
        //comparing first string to remaining strings 
        for(int j =1; j<n ; j++ ){
            //not match

            if(arr[j].size()<i || ch!=arr[j][i] ){
                match=false;
                break;
            }
        }
        if(match==false)
        break;
    else 
        ans.push_back(ch);
    }

return ans ;// Write your code here
}
int main()
{
vector <string> v={"geeks" , "geeksss", "geezar"};
cout<<longestCommonPrefix(v, 3);
 
    return 0;
}