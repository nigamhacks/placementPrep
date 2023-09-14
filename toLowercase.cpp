#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter the single character:";
    cin >> ch;
    if (ch >= 'A' && ch <= 'Z')
        cout << "it's already Uppercase";
    else
    {
        cout << char(ch - 'a' + 'A');
    }
    return 0;
}