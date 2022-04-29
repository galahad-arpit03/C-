#include<iostream>
using namespace std;

void half_pyramid(int x)
{
     for (int i =1 ; i <=x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    char ch;
    cout << "enter the value for n";
    cin >> n;
    half_pyramid(n);

    return 0;
}


