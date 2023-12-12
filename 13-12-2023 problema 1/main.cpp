#include <iostream>

using namespace std;

int main()
{
int n,d,k=0;
cin>>n;
for(d=1;d*d<n;d++)
    if(n%d==0)
        k+=2;
if(d*d==n)
     k++;
cout<<k;
return 0;
}
