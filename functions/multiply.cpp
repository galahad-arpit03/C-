// C++ Program to Add Two Numbers Using Functions
#include <iostream>
using namespace std;
int addTwo(int x, int y);
int main()
{
    int a, b, sum;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

        sum = addTwo(a, b);

    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;
    return 0;
}
int addTwo(int x, int y)
{
    return (x + y);
}