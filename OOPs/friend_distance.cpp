#include <iostream>
using namespace std;

class dis
{
    private :
        int i, f;
    public :
        dis()
        {
            cout << "enter distance in feet and inche";
            cin >> f >> i;
        }
        friend void addD(dis &obj1, dis &obj2);
};

void addD(dis &obj1, dis &obj2)
{
    int F, I;
    F = obj1.f + obj2.f;
    I = obj1.i + obj2.i;

    while (I>12)
        {
            F++;
            I -= 12;
        }
        cout << "the total is = " << F << " feet " << I << " inches";
}
int main()
{
    dis d1, d2;
    addD(d1, d2);

    return 0;
}




