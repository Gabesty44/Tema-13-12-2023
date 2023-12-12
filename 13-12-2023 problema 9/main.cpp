#include <iostream>

using namespace std;

int main()
{
int n,d,s=0;
cin>>n;
for(d=1;d<=n;d++)
    if(n%d==0)
        s+=d;
cout<<s;
return 0;
}
