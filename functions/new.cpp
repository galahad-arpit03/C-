#include <iostream>
using namespace std;

int function(int a,int b)
{
    int c;
    c=a+b;
    cout << c;
}


int main() {
    int a, b;
    cin >> b;
    cin >> a;
    function( a,b); // call the function
    
    return 0;
}





