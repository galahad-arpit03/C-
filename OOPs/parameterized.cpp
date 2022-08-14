#include <iostream>
using namespace std;

class complex
{
private:
    int real, imaginary;

public:
    complex(int x, int y)
    {
        real = x;
        imaginary = y;
    }
    void ans()
    {
        cout << "complex number is " << real << "+" << imaginary << "i";
    }
};

int main()
{
    int n1, n2;
    cout << "enter real and complex part " << endl;
    cin >> n1 >> n2;
    complex d1(n1, n2);
    d1.ans();

    return 0;
}