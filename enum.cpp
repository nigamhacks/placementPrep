// What Is C++ Enum? In C++ programming, enum or enumeration is a data type consisting of named values like elements, members, etc., 
// that represent integral constants. It provides a way to define and group integral constants.
//  It also makes the code easy to maintain and less complex


#include<iostream>
using namespace std;
int main(){
 enum meal{breakfast, lunch, dinner };
 cout<< breakfast<< endl;
 cout<< lunch<< endl;
 cout<< dinner<< endl;
 
 meal m1=lunch;
 cout<< (m1==2);
// output is zero because it is false condition 
// lunch present 1 position in enum
}