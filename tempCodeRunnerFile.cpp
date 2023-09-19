#include<iostream>
using namespace std;
int main(){
 enum meal{breakfast, lunch, dinner };
 cout<< breakfast<< endl;
 cout<< lunch<< endl;
 cout<< dinner<< endl;
 meal m1=lunch;
 cout<< (m1==0);
}