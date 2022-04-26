#include<iostream>
using namespace std;

void hollow_ractangle(int x, int y, char c);

int main()
{
    int row, col, ch;

    cin >> row;
    cin >> col;
    cin >> ch;
    hollow_ractangle(row, col, ch);

    return 0;
}



void hollow_ractangle(int x, int y,char c)
{
    int i, j;

    for (i = 1; i <= x; i++)
    {
        for (j = 1; j <= y; j++)
        {
            if(i==1 || j==1 || i==x || j==y)
            {
                cout << c ;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
     }
}