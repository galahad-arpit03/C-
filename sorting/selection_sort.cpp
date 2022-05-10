#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of an array\t";
    cin >> n;
    cout << "enter the elements\n";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int temp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << "sorted array is ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<"\t";
    }
    return 0;
}