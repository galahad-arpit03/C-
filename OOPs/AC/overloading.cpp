#include "bits/stdc++.h"
using namespace std;

//operator overloading
class Complex
{
    private:
        int real, img;

    public:
         Complex(int r, int i)
         {
             real = r;
             img = i;
         }
    Complex operator + (Complex const &obj)
    {
        Complex res;
        res.img = img + obj.img;
        res.real = real + obj.real;
        return res;
    }
    void display()
    {
        cout << real << "+ i" << img;
    }
};

int main()
{
    Complex c1(12, 7), c2(9, 5);
    Complex c3 = c1 + c2;
    c3.display();
    return 0;
}
    // function overloading
    //     void fun()
    //     {
    //         cout << "function with no argument\n";
    // }
    // void fun(int a)
    // {
    //     cout << "function with int argument\n";
    // }
    // void fun(double a)
    // {
    //     cout << "function with double argument\n";
    // }
// };
// int main()
// {
//     Collage C;
//     C.fun();
//     C.fun(4);
//     C.fun(4.9);

//     return 0;
// }