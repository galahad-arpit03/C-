#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of an array";
    cin >> n;

    int arr[n];

    cout << "enter the elements";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    int counter = 1;
    while (counter < n)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;

    return 0;
}
