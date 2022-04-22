#include<iostream>
using namespace std;

int main ()
{
    int savings;
    cin >> savings;

    if (savings>5000)
    {
        cout<<"going school picnic";
    }
    else if(savings>2000)
    {
        cout << "going for a movie";
    }
    else 
    {
        cout << " going knowhere";
    }

    return 0;
}