#include <iostream>
using namespace std;

class dis
{
private:
    int ft, in;

public:
    dis()
    {
        cout << "enter the distance in feet";
        cin >> ft;

        cout << "enter the distance in inch";
        cin >> in;
    }
    void putdata()
    {
        while (in > 12)
        {
            ft++;
            in -= 12;
        }
        cout << ft << " feet " << in << " inches";
    }
};
int main()
{
    dis d;
    d.putdata();

    return 0;
}