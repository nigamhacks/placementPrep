#include<iostream>
using namespace std;
// in union we can use one variable at time else it won't give desired output
// it allocates max bytes memory but for sack of performance it is uses one variable
union money
{
    /* data */
    int rice;
    char car;
    float pounds; 
};

int main(){
    union money m1;
    m1.rice=34;
    m1.car='c';
    cout<< m1.car;


}
