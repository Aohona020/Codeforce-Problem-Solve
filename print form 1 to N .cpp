#include<bits/stdc++.h>
    using namespace std;
    void p(long long x){
          if(x==0)
          return;
          p(x-1);
          cout<<x<<endl;
          }
          int main(){
           long long n;
           cin>>n;
           p(n);
        }
