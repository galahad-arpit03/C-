#include <iostream>
using namespace std;

void floyds_triangle(int n)
{
    int a = 1;
    for (int i = 1; i <= n; i++)
    {
        for ( int c = 1; c <= i; c++)
        {        
            cout << a <<" "; 
            a++; 
        }
        cout << endl;
    }    
}

int main()
{
    int n;
    
    cout << "Enter the number of rows of Floyd's triangle to print: "; 
    cin >> n;
    floyds_triangle(n);

    return 0;
}