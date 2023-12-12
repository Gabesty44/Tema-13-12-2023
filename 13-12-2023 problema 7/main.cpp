#include <iostream>

using namespace std;

int main()
{
int max=0,k,i,j,n;
cin>>n;
for(i=1;i<=n;i++)
{
    k=0;
    for(j=1;j<=i;j++)
        if(i%j==0)
            k++;
    if(k>max)
        max=i;
}
cout<<max;
return 0;
}
