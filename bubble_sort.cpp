#include <iostream>
using namespace std;

int main()
{
    int a[5] = {5, 9, 4, 1, 3};
    for (int i = 1; i < 6; i++)
    {
        for (int j = 0; j < 6 - 1; j++)
        {
            if (a[j] > a[j + 1])
                swap(a[j], a[j + 1]);
        }
    }
    for (int i = 0; i < 6; i++)
        cout << a[i] << "";
}
