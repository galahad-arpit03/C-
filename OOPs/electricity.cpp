//
#include <iostream>
using namespace std;
class Electricity_Bill
{
    float unit, amount;
    string name;

public:
    Electricity_Bill()
    {
       
        cout << "Enter Name:- ";
        cin >> name;
       
        cout << "Enter unit consumed:- ";
        cin >> unit;

        if (unit <= 100)
        {
            amount = .6 * unit;
        }
        else if (unit > 100 && unit <= 200)
        {
            amount = .8 * unit;
        }
        else if (unit > 200)
        {
            amount = .92 * unit;
        }

        
        cout << "name is  " << name <<endl;
        cout << "your bill amount " << amount;
    }
};
int main()
{
   Electricity_Bill b;
}