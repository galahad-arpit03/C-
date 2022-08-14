#include <iostream>
using namespace std;

class Distance2;

class Distance1
{
private:
    int f, i;

public:
    Distance1()
    {
        cout << "enter distance1 in feet and inches";
        cin >> f >> i;
    }
    friend void addD(Distance1 &D1, Distance2 &D2);
};
class Distance2
{
private:
    int f, i;

public:
    Distance2()
    {
        cout << "enter distance2 in feet and inches";
        cin >> f >> i;
    }
    friend void addD(Distance1 &D1, Distance2 &D2);
};

void addD(Distance1 &D1, Distance2 &D2)

{
    int F, I;
    F = D1.f + D2.f;
    I = D1.i + D2.i;

    while (I >= 12)
    {
        F++;
        I = I - 12;
    }
    cout << "the sum of both " << F << "  feet " << I << "  Inches";
}
int main()
{
    Distance1 d1;
    Distance2 d2;
    addD(d1, d2);

    return 0;
}