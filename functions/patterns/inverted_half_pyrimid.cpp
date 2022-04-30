#include <iostream>
using namespace std;

void invert_half_pyramid(int x, char c)
{
    for (int i = x; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << c;
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
    cout << "enter the character you want to print";
    cin >> ch;
    invert_half_pyramid(n, ch);

    return 0;
}
