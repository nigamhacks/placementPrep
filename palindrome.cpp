#include <iostream>
using namespace std;
bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (a[s] != a[e])
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
int main()
{
    // always mention character array size else encounter an error
    char s[30];
    cout << "enter a word with length: " << endl;
    int n;
    cin >> s >> n;
    cout << "palindrome or not \n"
         << "checking... " << endl;
    cout << checkPalindrome(s, n);
    return 0;
}