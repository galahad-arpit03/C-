#include<iostream>
using namespace std;

int main()
{
    int i,j,size,temp;
    int arr[100];
    cout<<"enter the total number of elements: ";
    cin>>size;
    cout<<"enter"<<size<<"elements of array: "<<endl;
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
    
    cout<<"the 2nd largest element is "<<arr[size-1];

    return 0;

}