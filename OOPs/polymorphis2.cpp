#include <iostream>
using namespace std;

void area(int,int);
void area(int,float);
void area (float,int);

int main()
{
    int a,b;
    float c;
    cout<<"enter 3 numbers";
    cin>>a>>b>>c;
   
    area(a,b);
    area(a,c);
    area(c,a);
   
    return 0;
}

void area(int x, int y)
{
    cout<<"area is = "<<x*y<<endl;
}    
void area(int x, float y)
{
    cout<<"area is = "<<x*y<<endl;
}    
void area(float x, int y)
{
    cout<<"area is = "<<x*y<<endl;
}    

