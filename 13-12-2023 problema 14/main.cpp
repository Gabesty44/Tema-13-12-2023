#include <iostream>

using namespace std;

int main()
{
int n,p=1;
cin>>n;
while(n!=0)
{
    if((n%10)%2==1)
        p*=n%10;
    n/=10;
}
cout<<p;
return 0;
}
