// it  is for whole string conversion to upper or lower case
// uppercase
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z') // checking for lowercase characters
            str[i] = str[i] - 'a' + 'A';    // converting to uppercase
    }
    // str[i] = str[i] - 32;     =>both are same
    cout << "\n The string in upper case: " << str << endl;

    ////////////////////////////////////////

    string str1;
    getline(cin, str1);

    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 'A' && str1[i] <= 'Z') // checking for uppercase characters
            str1[i] = str1[i] - 'A' + 'a';    // converting lowercase
    }
    // str[i] = str[i] +32;     =>both are same
    cout << "\n The string in lowercase: " << str1 << endl;
    return 0;
}