#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int a,b,i,j,k=0;
cin>>a>>b;
for(i=a;i<=b;i++)
{
    bool prim=true;
    for(j=2;j<=sqrt(i);j++)
        if(i%j==0)
            prim=false;
    if(i==1 || i==0)
        prim=false;
    if(prim)
        k++;
}
cout<<k;
return 0;
}
