#include<iostream>
using namespace std;


//structure consists of different dataypes
//   
//typedef struct employee{
// int eID ;
// char favChar ;
// Float salary ; 
//   
// } ep;  
 
    struct employee 
    {
        int eID ;
        char favChar;
        double salary;
    };
int main(){
    struct employee sachin;
    sachin.eID=1;
    sachin.favChar='a';
    sachin.salary= 999999;

    cout<< "the value is "<< sachin.eID<<endl;
    cout<< "the value is "<< sachin.favChar<< endl;
    cout<< "the value is "<< sachin.salary<< endl;



}