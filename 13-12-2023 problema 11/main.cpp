#include <iostream>

using namespace std;

int main()
{
int n,d,k=0;
cin>>n;
for(d=1;d<=n;d++)
    if(n%d==0 && d%2==0)
        k++;
cout<<k;
return 0;
}
