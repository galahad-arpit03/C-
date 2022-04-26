#include <iostream>
using namespace std;

void ractangle(int x, int y, char a)
{
    int i, j;

    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= y; j++)
        {
            cout << a ;
        }
        cout << endl;
    }
}

int main()
{
    int length, breadth;
    char ch;

    cout << " enter the lenght and breadth";
    cin >> length ;
    cin >> breadth ;
    cin >> ch;

    ractangle(length, breadth, ch);

    return 0;
}