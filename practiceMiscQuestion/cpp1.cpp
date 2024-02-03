//Rolling dice , saving outcomes, and maximum 

#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
int main()
{

// What is srand () in C++?
// The srand() 
// function sets the starting point 
// for producing a series of pseudo-random integers. If srand() is not called,
//  the rand() seed is set as if srand(1) were called at program start.
    
    srand(time(0));
    int arr[20];
    // rolling a dice for 20 times 
    for(int i=0 ; i<20; i++){
        arr[i]=  (rand()%6)+1;  //rand()%6 is the range to which it can go upto 
        //+1 is denoting non-zero outcomes   
    }
    
    for (int i=0 ; i<20; i++)
    cout<<arr[i]<<endl;
    
    
    int maxi=arr[0];
    
    for (int i=1 ; i<20; i++)
    maxi=max(maxi, arr[i]);
    
    cout<<"max => "<<maxi;
}
