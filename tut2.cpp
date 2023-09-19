#include<iostream>
using namespace std;

int power(int n, int p){
if (p==0){
    return 1;

}
else {

int pre=power(n, p-1);
return  n*pre ;
}
}

int main(){
int x,y;
cout<< "enter n(base),p(power) : ";
cin>>x>>y;

cout<<power(x,y)<<endl;
    return 0;
}