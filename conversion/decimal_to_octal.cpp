#include<iostream>
using namespace std;

int decimal_to_octal(int  n)
{
    int x = 2;
    int ans = 0;
    while(x <=n)
    {
        x *= 8;
        
    }
    x /= 8;
    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 8;
        ans = ans * 10 + lastdigit;

    }
    return ans;
}

int main()
{
    int  n;
    cout << "enter the vlaue for n";

    cin >> n;

    cout << decimal_to_octal(n) << endl;

    sss
}