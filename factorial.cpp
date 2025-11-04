#include <bits/stdc++.h>
using namespace std;
int main()
{
long long t,n;
cin>>t;
while(t--)
{
cin>>n;
long long fact=1;
for(int i=1; i<=n; i++)
{
fact =fact*i;

}
cout<<fact<<endl;
}
}
