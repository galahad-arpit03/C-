#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter number of items you want to put";
    cin >> n;
    int arr[n];
    for (int i=0; i < n;i++)
    {
        cin >> arr[i] ;
    }
    cout << "\n";
    for (int i = 0; i < n;i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}