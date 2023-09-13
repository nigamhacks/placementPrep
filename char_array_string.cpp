#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count++;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(name[s], name[e]);
        s++, e--;
    }
}
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
    name[3] = '\0';
    cout << name << endl;

    cout << "Length of char array: " << getLength(name) << endl;
    int l = getLength(name);
    reverse(name, l);
    cout << "reverse : " << name << endl;

    return 0;
}