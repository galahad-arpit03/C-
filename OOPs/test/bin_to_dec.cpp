#include <iostream>
usnig namespace std;
int bintodec(int n);

int main()
{
    int n;
    cout<<"enter the number in binary";
    cin>>n;
    cout<<bintodec(n);

    return 0;
}

int bintodec(int n)
{
    int ans=0;
    int x=2;
    while(n>0){
        int y = n%10;
        ans+=x*y;
        n/=10;
    }
    return ans;
}
