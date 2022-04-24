#include<iostream>
using namespace std;

int main()
{
    char button;
    cout << "input a character";
    cin >> button;

    switch (button)
    {
        case 'a':
            cout << "hello";
            break;
        
        case 'b':
            cout << "namestey";
            break;

        case 'c':
            cout << "hola";
            break;

        default:
            cout << "i'm still learning " << endl;
            break;
    }
    return 0;
}