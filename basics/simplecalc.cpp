#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter the first number";
    cin >> a;
    cout << "enter the second number";
    cin >> b;

    int sum = a + b;
    int div = a / b;
    int mul = a * b;
    int sub = a - b;

    cout << "sum \n";
    cout << sum;

    cout << "div \n";
    cout << div;

    cout << "mul  \n";
    cout << mul;

    cout << "sub \n";
    cout << sub;

    return 0;
}