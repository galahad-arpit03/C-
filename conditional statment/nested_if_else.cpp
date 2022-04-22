// nested if else

#include <iostream>
using namespace std;

int main()
{
    int savings;
    cout << "enter your savings";
    cin >> savings;

    if (savings > 5000)
    {
        if (savings > 10000)
        {
            cout << "buy a cycle";
        }
        else
        {
            cout << "join a gym";
        }
    }
    else if (savings < 5000)
    {
        cout << "buy a gift for mom";
    }
    else
    {
        cout << "dont spend";
    }

    return 0;
}