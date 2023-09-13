#include <iostream>
using namespace std;
int main()
{
    char name[20];
    cout << "enter your name : ";
    cin >> name;

    cout << "your name is " << name << endl;

    // for stopping cin after certain point or index
    // when using char array
    cout << "enter your name and it will take 2 characters of name: ";
    cin >> name;
    name[2] = '\0';
    cout << name << endl;

    return 0;
}