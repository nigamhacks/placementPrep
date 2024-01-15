#include<iostream>
using namespace std;

int main() {
    cout<<"enter any number"<<endl;
	int n;
	cin>>n;
	int even=0;
	int odd=0;
	while(n>0){
          int s=n%10;
		  n=n/10;
		  if(s%2!=0){
			odd += s;

		
                  } else {
                          even += s;
                  }
                  
        }
       
		cout << even << " ";
        cout << odd <<endl ;
		
}