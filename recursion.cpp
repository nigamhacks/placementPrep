//recursion  Q1.

#include<iostream>
using namespace std;

int Sum(int n ){
    if(n==0){
        return 0;
    }
    int s=Sum(n-1);
    return n+s;


}
int main(){
    
 cout<< Sum(4) <<endl;

    return 0;
}