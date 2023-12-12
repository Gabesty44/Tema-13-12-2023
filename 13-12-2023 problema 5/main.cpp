#include <iostream>

using namespace std;

int main()
{
int a,b,a1,b1;
cin>>a>>b;
a1=a;
b1=b;
while(a!=b)
{
    if(a>b)
        a-=b;
    else
        b-=a;
}
cout<<(a1*b1)/a;
return 0;
}
