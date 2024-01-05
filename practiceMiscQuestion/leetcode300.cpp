#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLIS(vector<int> &nums) { 
        int count=0;
        for(int i =0; i< nums.size(); i++){
             if(nums[i]<nums[i++])
             {count++;}
             else
             {cout<<"1"<<endl;}
        }
        return count;
    }
};
int main()
{
    vector <int> vec;
    for(int i=0; i<8; i++){
        int element;
        cin>>element;
        vec.push_back(element);
    }
    //10 9 2 5 3 7 101 18
    cout<<"enter elements of size 8"<<endl;
    Solution obj;
    cout<<obj.lengthOfLIS(vec);
    return 0;
}