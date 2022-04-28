#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i; i < n;i++)
    {
        cin >> arr[i];
        cout << "\t";
    }
    int maxNo ;
    int minNo ;
    for (int i = 0; i < n;i++)
    {
        if (arr[i]>maxNo)
        {
            maxNo = arr[i];
        }
        if (arr[i]<minNo)
        {
            minNo = arr[i];
        
    }
}