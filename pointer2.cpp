// pointer storing values of arrays

#include<iostream>
using namespace std;
int main(){

    int*ptr;
    int arr[5];
    int i;
    cout<< "five inputs ";
    for(i=0;i<5 ;i++){
        cin>>arr[i];
    }
    ptr=arr;

    cout<<"the value of array from pointer is "<<endl;
    for(i=0;i<5 ;i++){
    cout<<*(ptr+i)<<" " ;
}
}