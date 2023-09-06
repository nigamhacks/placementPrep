#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {5, 7, 9, 2, 6, 8, 1};
    for (int i = 0; i < 6; i++)
    {

        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }

            else
            {
                break;
            }
        }

        arr[j + 1] = temp;
    }
    for (int i = 0; i < 6; i++)
        cout << arr[i] << " ";

    return 0;
}