#include <iostream>

using namespace std;

int main()
{
int n,R=0,p=1;
cin>>n;
while(n!=0)
{
    if((n%10)%2==0)
    {
        R=R+p*(n%10);
        p*=10;
    }
    n/=10;
}
if(R==0)
    cout<<"Numarul nu contine cifre pare";
else
    cout<<R%10;
return 0;
}
