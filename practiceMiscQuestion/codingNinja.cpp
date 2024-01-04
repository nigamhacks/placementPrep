//You are given an integer array 'A' of size 'N',
// sorted in non-decreasing order. You are also given an integer 'target'.
//Note:

//You must write an algorithm whose time complexity is O(LogN)

//output -> always return index
#include<bits/stdc++.h>
using namespace std;


int search(vector<int> &nums, int target) {
    // Write your code here.
    int s=nums.size();
    int first=0;
    int last=s;
    int mid;
    while(first<=last){
        mid = first+(last-first)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]<target){
           first=mid+1;
        } 
        else
            last =mid-1;
           
         }
           return -1;
       
    }

    int main()
{
    vector<int> vec;
    int n ;
    
    cout<<"enter the number of elemnt "<<endl;
    cin>>n ;
    
    int find;

    for(int i =0; i<n; i++){
        int element;
        cin>>element;
        vec.push_back(element);
    }
    cout<<"enter the target element "<<endl;
    cin>>find;
    cout<<search(vec, find)<<endl;
    return 0;
}
