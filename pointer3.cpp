// practice of pointers 
#include<iostream>
using namespace std;

int main(){

    int a=10;
    int b =20;
    int* c = &a;
    int* d= &b ;
    cout<<"before swap *c :"<< *c<< "\n" ;
    cout<< "*d :"<< *d<< "\n" ;
    

    *c = *c+*d;    // c=10+20  =>  30
    *d = *c-*d;   // d=20-10  =>  10
    *c = *c-*d;    // c=30-20  =>  10
    cout<<"after swap *c :"<< *c<< "\n" ;
    cout<< "*d :"<< *d<< "\n" ;
    

}