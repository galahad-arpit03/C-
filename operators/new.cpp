#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter the value for a";
    cin >> a;

    cout << "enter the value for b";
    cin >> b;
    
    cout << "enter the value for c";
    cin >> c;
    
    if (a>b && a>c)
    {
        cout << " a is greater";
    }

    if (b>a && b>c)
    {
        cout << "b is greater";
    }
    
    else
    {
        cout << "c is greater";

    }

    return 0;
    
}