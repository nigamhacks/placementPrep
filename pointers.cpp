#include<iostream>
using namespace std;
int main(){
using namespace std;
    int a=3;
    int* b;
    b= &a;
    int arr[]={12,22,25,66,78};
    cout<< "the address of a is "<<&a<< endl;
    cout<< "the address of a is "<<b<<endl;
    cout<< "the value at address of a is "<<*b<<endl;
    
    //array arr[] is now copied to pointer variable in p
    // p=arr and int*p=arr is same 
    int *p=arr;
    cout<< "the value of arr[0] "<< *(p)   <<endl;
    cout<< "the value of arr[1] "<< *(p+1) <<endl;
    cout<< "the value of arr[2] "<< *(p+2) <<endl;
    cout<< "the value of arr[3] "<< *(p+3) <<endl;
    cout<< "the value of arr[4] "<< *(p+4) <<endl;
    



}