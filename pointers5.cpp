#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

int main(){
   int num=5;
   int *p=&num;
    cout<<*p<<endl;
    cout<<num<<endl;
    cout<<p<<endl;
    cout<<&num<<endl;

    int i=6;
    int *y= &i;
    //also we can do this 
    //int *y=0;
    //y=&i;
    //both are same 
    cout<<*y<<endl;

    int num1=9;
    int *ptr=&num1;
    cout<<"before "<<num1<<"\n";
    (*ptr)++;
    cout<<"after "<<num1<<"\n";
    //copying pointer 
    int *o =ptr;
    cout<<*ptr<<endl;

    cout<<*o<<endl;

    cout<<"before " << ptr<<endl;
    ptr= ptr+1;
    cout<<"after "<<ptr<<endl;
    }