#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "enter the single character:";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
        cout << "it's already lowercase";
    else
    {
        cout << char(ch - 'A' + 'a');
    }
    return 0;
}