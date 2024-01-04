#include<iostream>
using namespace std;
int main()
{
    string c="name";
    string d="name";
    if("name"==c){
        cout<<"1"<<"\n";
    }
    if (d==c)
    cout<<"2"<<"\n";

    else if(d==c){
        cout<<"3";
    }
    else{
        cout<<"false";
    }
    return 0;
}