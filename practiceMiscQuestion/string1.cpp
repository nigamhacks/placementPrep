//Change the character in string to its next character**

#include <iostream>
#include<string>
using namespace std;
int main() {
    // Write C++ code here
    //only applicable to lowercase string only 
  string str;
  cin>>str;
  
   
  for(int i =0; i<str.size(); i++){
      if (str[i]>=97 && str[i]<=122)
      str[i]= char(str[i]+1);
  }
  cout<<str<<endl;

    return 0;
}
