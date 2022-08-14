#include <iostream>
using namespace std;

void add();
void add(int, int);
void add(int, int, int);


int main()
{
    add();             
    add(10,29);
    add(10,20,30);
   
    return 0;
}

void add()
{
    int n1,n2;
    cout<<"enter 2 num\n";
    cin>>n1>>n2;
    cout<<"\n sum= "<<n1+n2<<"\n";
   
}
void add(int x,int y)
{
    cout<<"sum ="<< x+y<<"\n";
}

void add(int x,int y,int z)
{
    cout<<"sum ="<< x+y+z<<"\n";
}
