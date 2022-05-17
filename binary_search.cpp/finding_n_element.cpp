#include <iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;
    int mid = (s + e) / 2;
    while (s < e)
    {

        if (arr[mid] == key)
        {
            return mid;
            break;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "enter the size of an array\t";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "enter the value to serch\t";
    cin >> key;

    cout << binarysearch(arr, n, key) << endl;

    return 0;
}