#include <iostream>
using namespace std;

void butterfly(int r,char c)
{
    int i, j;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
            cout << c;
        for (j = 1; j <= 2 * (r - i); j++)
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << c;
        cout << "\n";
    }
    for (i = r; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
            cout << c;
        for (j = 1; j <= 2 * (r - i); j++)
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << c;
        cout << "\n";
    }
}
int main()
{
    int r;
    char ch;
    cout << "Enter no. of rows: ";
    cin >> r;
    cout << "Enter the character you want to print:";
    cin >> ch;
    butterfly(r, ch);

    return 0;
}