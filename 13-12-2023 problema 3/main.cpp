#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n,i;
bool prim=true;
cin>>n;
for(i=2;i<=sqrt(n);i++)
    if(n%i==0)
        prim=false;
if(prim && n!=1 && n!=0)
    cout<<"Numarul este prim";
else
    cout<<"Numarul nu este prim";
return 0;
}
