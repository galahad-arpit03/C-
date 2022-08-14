#include <iostream>
using namespace std;

int main()
{
    int i,j,sum,temp,size;
    int arr[20];

    cout<<"enter the total number of elements int the array:"<<endl;
    cin>>size;
    cout<<"enter "<<size<<"elements of array"<<endl;

    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<size;i++)
    {
        for(j=1+i;j<size;j++)
        {
            if (arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"elements sorted in ascending order are"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}