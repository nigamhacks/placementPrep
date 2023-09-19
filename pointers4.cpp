#include<iostream>
using namespace std;
int swap(int* a, int* b){ //in parameter a and b are pointers 

    int temp = *a; // while *a and *b are getting dereferenced 
    *a = *b;
    *b = temp;
    }

int main(){
int x, y ;
cout<< "enter x and y for swap";
cin>>x>>y  ;
swap(x,y);
cout<< "after swap x: "<<x <<" and y : "<<y ;

}


