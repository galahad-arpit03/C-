#include <iostream>
using namespace std;

class abc
{
private:
    int x, y;

public:
    abc()
    {
        x = 10;
        y = 20;
    }
    abc(int a, int b)
    {
        x = a;
        y = b;
    }
    abc(abc &obj)
    {
        x = obj.x;
        y = obj.y;
    }
    void putdata()
    {
        cout << "\nx=" << x << endl;
        cout << "\ny=" << y << endl;
    }
};

int main()
{
    abc a, b(20, 60), c(a), d = b;
    cout << "\n obj a: \n";
    a.putdata();
    cout << "\n obj b: \n";
    b.putdata();
    cout << "\n obj c: \n";
    c.putdata();
    cout << "\n obj d: \n";
    d.putdata();

    return 0;
}